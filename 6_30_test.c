#include <stdio.h>
//求n的阶乘
//用递归的方法
/*int fac(int n)
{
    if(n == 1)
    {
      return 1;
    }
    else
    {
      return n*fac(n-1);
    }
}*/
//用循环的方法
int fac(int n)
{
    int i = 0;
    int ret = 1;
    for(i=1;i<=n;i++)
    {
       ret*=i;
    }
    return ret;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = fac(n);
    printf("%d\n",ret);
    return 0;
}	

