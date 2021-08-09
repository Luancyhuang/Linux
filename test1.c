//设计一个程序来判断当前机器的字节序。(2015 百度面试大小端题）
#include <stdio.h>
int check_sys()
{
   int a = 1;
   return *(char*)&a;
}
int main()
{
 // int a = 1;
 // char *pa = (char*)&a;
 // if(*pa == 1)
 // {
 //   printf("小端存储\n");
 // }
 // else
 // {
 //   printf("大端存储\n");
 // }
  int ret =  check_sys();
  if(1 == ret)
  {
    printf("小端存储\n");
  }
  else
  {
    printf("大端存储\n");
  }
  return 0; 
}

