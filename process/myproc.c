#include <stdio.h>
#include <unistd.h>

int main(int argc,char*argv[],char* env[])
{
  for(int i = 0; env[i];i++)
  {
    printf("%d->%s\n",i,env[i]);
  }

 // for(int i =0;i<argc;i++)
 // {
 //   printf("argv[%d]->%s\n",i,argv[i]);
 // }

  //int cnt = 5;
  //while(cnt)
  //{
  ////  printf("I am a process,pid: %d,ppid:%d\n",getpid(),getppid());
  //  sleep(1);
  //  printf("I am a cmd -> process!\n");
  //  cnt--;
  //}
  return 0;
}
