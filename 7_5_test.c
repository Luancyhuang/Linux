//有n个人围成一圈，顺序牌号。从第一个人开始报数（从1到3 报数），凡报到3的人退出圈子，问最后留下的原来的第几号的那个人。
#include <stdio.h>
int main()
{
    int i,k,m,n,num[50],*p;
    printf("input number of person :=");
    scanf("%d",&n);
    p=num;
    for(i=0;i<n;i++)
       *(p+i)=i+1;
    i=0;
    k=0;
    m=0;
    while(m<n-1)
    {
      if(*(p+i)!=0)
	k++;
      if(k==3)
      {
        *(p+i)=0;
        k=0;
	m++;
      }
      i++;
      if(i==n)
	i=0;
    }
    while(*p==0)
	p++;
    printf("The last one is No.%d\n",*p); 
    return 0;
}


