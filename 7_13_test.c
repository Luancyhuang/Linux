//设计一个函数，使给出一个数的原码，能得到该数的补码。
#include <stdio.h>
unsigned short int getbits(unsigned short value)
{
   unsigned int short z;
   z=value&0100000;
   if(z==0100000)
   {
      z=~value+1;
   }
   else
   {
     z=value;
   }
   return z;
}
int main()
{
    unsigned short int a ;
    printf("\ninput an octal number: ");
    scanf("%o",&a);
    printf("result: %o\n",getbits(a));
    return 0;
}
