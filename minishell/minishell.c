#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define NUM 128
#define COM_NUM 64

int main()
{
  char command[NUM];

  for(;;)
  {
    char* argv[COM_NUM] = {NULL};
    //1.打印提示符
    command[0] = 0;//用这种方式，可以做到用O（1）的时间复杂度，清空字符串
    printf("[who@localhost process]# ");
    fflush(stdout);
    //2.获取命令字符串
    fgets(command,NUM,stdin);
    
    command[strlen(command)-1] = '\0';//strlen 以‘\0'作为结束，把倒数第二个‘\n'(strlen-1)处置‘\0’
    //3.解析命令字符串 char* argv[]
    
    const char* sep = " ";
    
    argv[0] = strtok(command,sep);//字符串截取
    int i = 1;
    while(argv[i] = strtok(NULL,sep))
    {
      i++;
    }

    /*for(i = 0; argv[i]; i++)
    {
      printf("argv[%d]: %s\n",i,argv[i]);
    }*/
    //4.检测命令是否是需要shell本身执行的——内建命令
    if(strcmp(argv[0],"cd") == 0)
    {
      if(argv[1] != NULL) 
      {
        chdir(argv[1]);
	continue;
      }
    }

    //5.执行第三方命令
    if(fork() == 0)
    {
      execvp(argv[0],argv);
      exit(1);
    }

    int status = 0;
    waitpid(-1,&status,0);
    printf("exit code:%d\n",(status>>8)&0xFF);

    //printf("echo: %s\n",command);

    //sleep(1);

  }
  return 0;
}
