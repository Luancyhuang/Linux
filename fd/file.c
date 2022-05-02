#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{ 
  //写入内容到文件
  //int fd0 = open("./log0.txt", O_CREAT|O_WRONLY,0644);
  //int fd1 = open("./log1.txt", O_CREAT|O_WRONLY,0644);
  //int fd2 = open("./log2.txt", O_CREAT|O_WRONLY,0644);
  //int fd3 = open("./log3.txt", O_CREAT|O_WRONLY,0644);
  //int fd4 = open("./log4.txt", O_CREAT|O_WRONLY,0644);
  
  //printf("%d,%d,%d,%d,%d\n",fd0,fd1,fd2,fd3,fd4);

 // 
 // if(perror < 0)
 // {
 //   perror("open");
 //   return 1;
 // }
 // //只写的方式打开文件
 // const char* msg = "hello,world\n";
 // int cnt = 5;
 // while(cnt)
 // {
 //   write(fd,msg,strlen(msg));//在我们写入文件的过程中，我们需要写入\0吗？不需要
 //   //\0作为字符串额结束标识位，只是C的规定
 //   cnt--;
 // }
 // 
 // 
 // close(fd);
  

  //读取文件内容
 // int fd = open("./log.txt",O_RDONLY);//两个参数的open就可以打开一个创建好的文件
 // if(fd < 0)
 // {
 //   perror("open");
 //   return 1;
 // }
 // 
 // char* buffer[1024];
 // ssize_t s = read(fd,buffer,sizeof(buffer)-1);
 // 
 // if(s > 0)
 // {
 //   buffer[s] = 0;
 //   printf("%s\n",buffer);
 // }

 // close(fd);
 // close(fd0);
 // close(fd1);
 // close(fd2);
 // close(fd3);
 // close(fd4);
  //const char* msg = "hello,world\n";
  //write(2,msg,strlen(msg));
  //write(2,msg,strlen(msg));
  //write(2,msg,strlen(msg));
  //write(2,msg,strlen(msg));
  //write(2,msg,strlen(msg));
  //write(2,msg,strlen(msg));
  //write(2,msg,strlen(msg));
  
 // char buffer[64];
 // ssize_t s = read(0,buffer,sizeof(buffer));
 // buffer[s-1] = 0;

 // printf("echo# %s\n",buffer);
 // close(1);
 // int fd = open("./log.txt",O_CREAT|O_WRONLY|O_APPEND,0644);
 // printf("fd:%d\n",fd);
 // fprintf(stdout,"hello,world\n");
  close(0);
  int fd = open("./log.txt",O_RDONLY);
  //fd == 0
  printf("fd: %d\n",fd);
  
  char line[128];
  while(fgets(line,sizeof(line) - 1,stdin))
  {
    printf("%s",line);
  }

  
  close(fd);

  return 0;
}
