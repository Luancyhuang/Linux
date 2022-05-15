#include "BlockQueue.hpp"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

using namespace ns_blockqueue;

void* consumer(void* args)
{
  BlockQueue<int> *bq = (BlockQueue<int>*)args;  
  
  while(true)
  {
    //sleep(2);
    int data = 0;
    
    bq->Pop(&data);  

    std::cout << "消费者消费了一个数据" << data << std::endl;
  }
}

void* producer(void* args)
{
  BlockQueue<int> *bq = (BlockQueue<int>*)args;  
  
  while(true)
  {
    //制造数据
    sleep(2);
    
    int data = rand() % 20 + 1;//1到20之间
    
    std::cout << "生产者生产数据:" << data << std::endl;

    bq->Push(data);
  }
}

int main()
{
  srand((long long)time(nullptr));
  
  BlockQueue<int> *bq = new BlockQueue<int>();  
  
  pthread_t c,p;
  
  pthread_create(&c,nullptr,consumer,(void*)bq);
  pthread_create(&p,nullptr,producer,(void*)bq);
  
  pthread_join(c,nullptr);
  pthread_join(p,nullptr);
  

  return 0;
}

