#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#define NUM 1
pthread_t g_id;

void* thread_run(void* args)
{
  
  pthread_detach(pthread_self());
  //const char* id = (const char*)args;
  int num = *(int*) args;

  while(1)
  {    
    printf("I am a new thread[%s],I create threadID: %1u\n",num,pthread_self());
    sleep(3); 
    break;
    /*if(num == 3)
    {
      printf("thread number: %d\n quit",num);
      int* p = NULL;
      *p = 1000;
    }*/

  }
  //pthread_exit((void*)123);

  return (void*)111;
}

int main()
{
  g_id = pthread_self();

  pthread_t tid[NUM];
  
  for(int i = 0; i < NUM; i++)
  {
    pthread_create(tid + i,NULL,thread_run,(void*)&i);
    sleep(1);
  }

  printf("wait sub thread...\n");

  sleep(1);

  printf("cancel sub thread...\n");

  //pthread_cancel(tid[0]);

  void* status = NULL;
  int ret = 0;
  for(int i = 0; i < NUM; i++)
  {
    ret = pthread_join(tid[i],&status);
  }

  printf("ret: %d,status: %d\n",ret,(int)status);
 
  sleep(3);
  /*while(1)
  {
    printf("I am a mian thread,I thread ID: %lu\n",pthread_self());
    
    for(int i = 0;i < 5;i++)
    {
      printf("############# begin #############");
      printf("I create thread[%d]: %lu\n",i,tid[i]);
      printf("############## end     ##########");
    }
    sleep(1);
  }*/

  return 0;
}
