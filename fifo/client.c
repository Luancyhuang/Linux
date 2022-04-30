#include "comm.h"//此时是不是两个程序，又能看到同一个资源的能力呢？
#include <string.h>

int main()
{
  //用不用再创建fifo文件？，不需要，只需要获取就可以
  int fd = open(MY_FIFO,O_WRONLY);//不需要O_CREAT
  if(fd < 0)
  {
    perror("open");
    return 1;
  }
  //业务逻辑
  while(1)
  {
    printf("请输入#");
    fflush(stdout);
    char buffer[64] = {0};
    //先把数据从标准输入拿到我们的client进程内部，
    ssize_t s = read(0,buffer,sizeof(buffer) -1);
    if(s > 0)
    {
      buffer[s - 1] = 0;
      printf("%s\n",buffer);
      write(fd,buffer,strlen(buffer));
    }
  }
  //拿到了数据
  //发送给writer

  close(fd);
  return 0;
}
