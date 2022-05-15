#pragma once
//.h .cc .cpp
//.hpp ->开源软件使用->声明和实现可以放在一个文件夹里
#include <iostream>
#include <queue>
#include <pthread.h>

namespace ns_blockqueue
{
   const int default_cap = 5;
   
   template<class T>
   class BlockQueue
   {
   public:
     BlockQueue(int cap = default_cap)
       :_cap(cap)
     {
       pthread_mutex_init(&_mtx,nullptr);
       pthread_cond_init(&_empty,nullptr);
       pthread_cond_init(&_full,nullptr);
     }
     ~BlockQueue()
     {
       pthread_mutex_destroy(&_mtx);
       pthread_cond_destroy(&_empty);
       pthread_cond_destroy(&_full);
     }

   private:
     bool IsFull()
     {
       return _bq.size() == _cap;
     }
     bool IsEmpty()
     {
       return _bq.size() == 0;
     }

     void LockQueue()
     {
       pthread_mutex_lock(&_mtx);
     }

     void UnlockQueue()
     {
       pthread_mutex_unlock(&_mtx);
     }        
     
     void ProducerWait()
     {
       //pthread_cond_eait
       //1.调用的时候，首先会释放锁_mtx，然后再挂起自己
       //2.返回的时候，会自动竞争锁,_mtx，获取到锁后，才能返回
       pthread_cond_wait(&_empty,&_mtx);
     }

     void ConsumerWait()
     {
       pthread_cond_wait(&_full,&_mtx);
     }

     void WakeupConsumer()
     {
       pthread_cond_signal(&_full);
     }

     void WakeupProducer()
     {
       pthread_cond_signal(&_empty);
     }

   public:
     //输入型参数： const &
     //输出型参数： *
     //输入输出型参数： &
     void Push(const T& in)
     {
       //向队列放入数据，生产函数
      LockQueue();
      if(IsFull())
       {
         ProducerWait();
         return;
       }

       _bq.push(in);

       WakeupConsumer();
       
       UnlockQueue();
     }

     void Pop(T* out)
     {
       LockQueue();
       if(IsEmpty())
       {
         //无法消费
         ConsumerWait();
       }
       //从队列中拿数据，消费函数
       *out = _bq.front();
       _bq.pop();

       WakeupProducer();

       UnlockQueue();

     }
   
   private:
     std::queue<T> _bq;//阻塞队列
     int _cap;//队列元素的上限
     pthread_mutex_t _mtx;//保护临界资源的锁
     //1.当生产者生产满了，就应该不要生产了（不要竞争锁了），而应该让消费者来消费
     //2.当消费空了，就不应该消费了（不要竞争锁了），而应该让生产者来生产了
     
     pthread_cond_t _full;//bq满的情况下，消费者在该条件下等待

     pthread_cond_t _empty;//bq空的情况下，让生产者在此条件下等待



   };


}




