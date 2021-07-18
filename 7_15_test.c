//互换两个数的位置，不用第三个变量。
#include <stdio.h>
int main()
{
 /* int a = 3;
  int b = 5;
  printf("before: a=%d,b=%d\n",a,b);
 // a=a+b;
 // b=a-b;
 // a=a-b;
 // 如果数字大的情况下会产生溢出，存在bug。
 // 如果用异或（产生1或0）就不会产生了这种数字溢出问题。
  a=a^b;
  b=a^b;
  a=a^b;
  printf("after : a=%d,b=%d\n",a,b);*/
//求一个整数存储在内存中二进制1的个数。
  int num = 0;
  int count = 0;
  scanf("%d",&num);
  int i = 0;
  for(i=0;i<32;i++)
  {
    if(1 ==((num >> i)&1))
    {
      count++;
    } 
  }
  printf("%d\n",count);
  return 0;
}
