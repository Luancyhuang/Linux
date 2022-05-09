#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  pid_t id = fork();
  
  if(id == 0)
  {
    //child
    int cnt = 10;

    while(cnt)
    {
      printf("child[%d] is running:cnt is: %d\n",getpid(),cnt);
      cnt--;
      sleep(1);
    }

    //int a = 10;
    //a /= 0;
    
    exit(0);
  }
  
  int status = 0;
  pid_t ret = waitpid(id,&status,WNOHANG);
  while(true)
  {
    if(ret == 0)
    {
    //检测子进程没有退出，但是waitpid等待是成功的，需要父进程重复进行等待
      printf("do parent things!\n");

    }
    else if(ret > 0)
    {
    //子进程退出，waitpid也成功了，获取到了对应的结果
      printf("parent wait:%d,success,status exit code: %d,status exit singal: %d\n",ret,(status>>8)&0xFF,status&0x7F);
      break;
    }
    else
    {
    //等待失败
      perror("waitpid");
      break;
    }
    sleep(1);//每隔1S检测一次 
  }
  //parent
  //sleep(3);
  //printf("parent wait begin!\n");
  //int status = 0;//
  //pid_t ret = waitpid(id,NULL,0);//等待一个指定的子进程
  //pid_t ret = waitpid(-1,&status,0/*默认行为，代表阻塞等待，WNOHANG：设置等待方式为非阻塞*/);//等待任意一个子进程,等价于wait!
  
  //if(ret > 0)
  //{
  //  if(WIFEXITED(status))//没有收到任何退出信号
  //  {
      //正常结束,获取正常退出的退出码

  //    printf("exit code: %d\n",WEXITSTATUS(status));
  //  }
  //  else
  //  {
  //    printf("error,get a signal!\n");
  //  }
  // }


  /*if(ret > 0)
  {
    printf("parent wait:%d,success,status exit code: %d,status exit singal: %d\n",ret,(status>>8)&0xFF,status&0x7F);
  }
  else 
  {
    printf("parent wait failed!\n");
  }*/

  //sleep(10);

  return 0;
}


/*int main()
{
  printf("pid: %d,ppid: %d\n",getpid(),getppid());
  
  exit(10);
  return 0;
}*/
