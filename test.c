//求一个数字各位上的数字之和（函数递归实现）\n
#include <stdio.h>
int get_add(int n)
{
  if(n>9)
  {  
    return get_add(n/10)+n%10;
  }
  else
   return n;
}
int main()
{
  int n = 1234;
  int ret = get_add(n);
  printf("%d\n",ret);
  return 0;
}
