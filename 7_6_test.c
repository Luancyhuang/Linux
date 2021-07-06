//编一函数用来实现左右循环移位，n为位移的位数，如n<0,表示为左移；n>0为右移，
//如n=4,表示要右移4位；n= -3，为要左移3位。
#include <stdio.h>
unsigned short moveright(unsigned short value,int n)
{
    unsigned short z;
    z=(value >> n)|(value << (16-n));
    return z;
}
unsigned short moveleft(unsigned short value,int n)
{
    unsigned short z;
    z=(value >>(16-n))|(value << n);
    return z;
}
int main()
{
    unsigned short a;
    int n;
    printf("\ninput an octal number: ");
    scanf("%o",&a);
    printf("input n:");
    scanf("%d",&n);
    if(n>0)
    {
      moveright(a,n);
      printf("result: %o\n",moveright(a,n));
    }
    else	  
    {
      n=-n;
      moveleft(a,n);
      printf("result: %o\n",moveleft(a,n));    
    }
    return 0;
}
