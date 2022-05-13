#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <string>
#include <pthread.h>
#include <unistd.h>
#include <mutex>

//抢票逻辑，1000张票，5线程同时再抢
//tickets是不是所谓的临界资源？tickets--是原子的吗？（是安全的吗？）
//为了让多个线程进行切换，线程什么时候可能切换（1.时间片到了，2.检测的时间点：从内核态返回用户态的时候）
//对临界区进行加锁！
class Tickets
{
public:
  Tickets():tickets(1000)
  {
    pthread_mutex_init(&mtx,nullptr);
  }

  bool GetTickets()
  {
    //执行这部分代码是串行的
    //此处bool 变量是否是被所线程所共享的呢？！ 不是的？！

    bool res = true;
    //pthread_mutex_lock(&mtx);
    mymtx.lock();
    if(tickets > 0)
    {
      std::cout << "我是[" << pthread_self()<< "]我要抢的票是：" << tickets << std::endl;
      //抢票
      usleep(10000);
      tickets--;
      printf("");
    } 
    else
    {
      //没票
      printf("票已经被抢空\n");
      res = false;
    }
    //pthread_mutex_unlock(&mtx);
    mymtx.unlock();
    return res;
  }

  ~Tickets()
  {
    pthread_mutex_destroy(&mtx);
  }
//加锁和解锁的原子性，本身是安全的
private:
  int tickets;
  //pthread_mutex_t vs std::mutex
  pthread_mutex_t mtx;//系统级别原生线程库
  std::mutex mymtx;//c++11 
};

void* ThreadRoutine(void* args)
{
  //int id = *(int*)args;
  //delete (int*) args;
  Tickets* t = (Tickets*)args;

  //srand((long)time(nullptr));
  while(true)
  {
    if(!t->GetTickets())
    {
      break;
    }
  }
}

int main()
{
  Tickets* t = new Tickets();
  pthread_t tid[5];

  for(int i = 0; i < 5; i++)
  {
    int* id = new int(i);
    pthread_create(tid + i,nullptr,ThreadRoutine,(void*)t);    
  }
  
  for(int i = 0; i < 5; i++)
  {
    pthread_join(tid[i],nullptr);    
  }
 
  return 0;
}

