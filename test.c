#include <stdio.h>
#include <math.h>
int main()
{
  //依次按大小顺序输入3个数字中的最大值、中间值、最小值
  /* int a =0;
  int b =0;
  int c =0;
  scanf("%d %d %d",&a,&b,&c);
  if(a<b)
   {
    int temp = a;
    a = b;
    b = temp;
   }
  if(a<c)
   {
    int temp = a;
    a = c;
    c = temp;
   }
  if(b<c)
   {  
    int temp = b;
    b = c;
    c = temp;
   }
  printf("%d %d %d\n",a,b,c);*/

//打印1~100之间3的倍数。
   /*int i = 0;
   for(i=3;i<100;i+=3)
   { 
      printf("%d ",i);
   }*/

//给定两个数，求它们的最大公约数和最小公倍数。
/*
   int a = 0;
   int b = 0;
   int c = 0;
   int d = 0;
   scanf("%d %d",&a,&b);
   int tmp1 = a;
   int tmp2 = b;
   while(c = a%b)
   {
     a = b;
     b = c;
   }//辗转相除法得到最大公约数
   d = tmp1*tmp2/b; //最大公约数*最小公倍数 = 这两个数的乘积
   printf("%d %d\n",b,d);*/


//打印1000～2000之间闰年的年份
   // int year = 0;
   // int count = 0;
   // for(year=1000;year<=2000;year++)
   // {
       /*if(year%4 ==  0 && year%100 != 0)
//判断闰年的规则：1.能被4整除且不能被100整除；2.能被400整除；
       {
          printf("%d ",year);
	  count++;
       }
       else if(year%400 == 0)
       {
          printf("%d ",year);
	  count++;
       }
    }*/
     /* if((year%4==0 && year%100 != 0) ||(year%400 == 0))
      {
	printf("%d ",year);
        count++;
      }
    }
    printf("\ncount=%d\n",count);*/
    //打印100～200素数（质数）
    //如果一个数=两个数的乘积，这两个数中至少有一个小于等于这个数的平方根。

    int i = 0;
    int count = 0;;
    for(i=100;i<=200;i++)
    {
       int j = 0;
       for(j=2;j<=sqrt(i);j++)
       {
	  if(i%j == 0)
	  {
	    break;
	  }
       }
       if(j>sqrt(i))
       {
	    count++;
	    printf("%d ",i);
       }	
    } 
    printf("\ncount=%d\n",count);
    return 0;   
}
