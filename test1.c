//青蛙跳台阶的问题：
//一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。此时该青蛙跳上一个n级台阶总共有多少种跳法？
//
//算法分析：青蛙跳一级台阶有一种跳法，跳两级台阶有两种跳法，跳三级台阶有3种跳法，青蛙跳4个台阶有5种跳法，跳5个台阶有8种跳法...(类似斐波那契数列）；

#include <stdio.h>
int Fib(int n)
{ 
  if(n<=3)
    return n;
  else	  
  {	
    int a = 2;
    int b = 3;
    int c = 0;
    while(n>3)
    {
      c = a+b;
      a = b;
      b = c;
      n--;
    }
    return c;
  }
}
int main()
{
  int n = 0;
  printf("Please input your number:\n");
  scanf("%d",&n);
  int ret = Fib(n);
  printf("%d\n",ret);
  return 0;
}
