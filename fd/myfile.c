#include <stdio.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main()
{
  int fd = open("log.txt",O_CREAT|O_WRONLY,0644);
  
  if(fd < 0)
  {
    perror("open");
    return 1;
  }

  close(fd);

  return 0;
}

