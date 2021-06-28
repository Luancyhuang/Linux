#include <stdio.h>

/*int MySum(int top)
{
   int i = 1;
   int sum = 0;
   for(;i<top;i++)
   {
      sum += i;
   }
   return sum;
}*/
int IsPrime(int n)
{   
    int m = 0; 
    for(m=2;m<n;m++)
    {
       if(n%m == 0)
       {
          return 0;
       }	    
    }
    return 1;
}





int main()
{
   /*printf("process begin running...!\n");
   int result = MySum(100);
   printf("result = %d\n",result);
   printf("process end running...!\n");*/
 //写一个函数可以判断一个数是不是素数（质数）
     int i = 0;
     for(i = 100;i<=200;i++)
     {
        if(IsPrime(i)==1)
        {
	   printf("%d ",i);
        }
     }

	return 0;
}	
