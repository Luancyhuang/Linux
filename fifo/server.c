#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "comm.h"

#define MY_FIFO "./fifo"
int main()
{
  umask(0);
  sleep(50);
  if(mkfifo(MY_FIFO,0666) < 0)
  {
    perror("mkfifo");
    return 1;
  }

  int fd = open(MY_FIFO,O_RDONLY);
  if(fd < 0)
  {
    perror("open");
    return 2;
  }
  //读写
  while(1)
  {
    char buffer[64] = {0};
    ssize_t s = read(fd,buffer,sizeof(buffer) - 1);
    
    if(s > 0)
    {
      buffer[s] = 0;
      if(strcmp(buffer,"show") == 0)
      {
        if(fork() == 0)
	{
	  execl("/usr/bin/ls","ls","-l",NULL);
	  exit(1);
	}
	waitpid(-1,NULL,0);
      }
      else if(strcmp(buffer,"run") == 0)
      {
        if(fork() == 0)
	{
	  execl("/usr/bin/sl","sl",NULL);
	}
	waitpid(-1,NULL,0);
      }
      else
      {
      
      }
      printf("client# %s\n",buffer);
    }
    else if(s == 0)
    {
      //对方关闭
      printf("client quit ...");
    }
    else
    {
      //error
      perror("read");
      break;
    }
  }
  
  close(fd);

  return 0;
}
