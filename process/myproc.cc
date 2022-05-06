#include <iostream>
using namespace std;
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
  //pid_t id = fork();
  //
  //if(id == 0)
  //{
  //  //child
  //  while(1)
  //  {
  //    std::cout << "I am child pid:" << getpid() << ".ppid:" << getppid() << std:: endl;
  //    sleep(1);
  //  }
  //}
  //else if(id > 0)
  //{
  //  //parent
  //  while(1)
  //  {
  //    std::cout << "I am parent pid:" << getpid() << ".ppid:" << getppid() << std:: endl;
  //    sleep(2);
  //  }
  //}
  //else
  //{
  //  //TODU
  //}

 // while(1)
 // {
 //   sleep(10);
 //   std::cout << "hello,world" << std::endl;
 // }
  //std::cout << "hello child: " << getpid() << " " << "hello parent: " << getppid() <<" " << "ret: " << id <<std::endl;
  //sleep(1);
  
  //while(true)
  //{
  //  cout << "hello,world!" << endl;
  //}
  pid_t id = fork();
  
  if(id == 0)
  {
    //child
    while(true)
    {
      cout << "I am child running!" << endl;
      sleep(2);
    }
  }
  else
  {
    //parent
    cout << "father doing nothing!" << endl;
    sleep(10);
    exit(1);//终止进程
    
  }

  return 0;
}
