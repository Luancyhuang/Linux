#include <stdio.h>
//#include <string.h>
//int Max(int* pa,int* pb)
/*{
    int z = 0;
    z = x > y ? x : y;
    return z;
}*/
void Swap(int* pa,int* pb)
{
     int tmp = 0;
     tmp = *pa;
     *pa = *pb;
     *pb = tmp;
}
int main()
{
  //从1～100中找出含有数字9的数字。
    /*int i = 0;
    int count = 0;
    for(i=1;i<=100;i++)
    {
       if(i%10==9)
       {
          printf("%d ",i);
          count ++;
       }
       else if(i/10==9)
       {
          printf("%d ",i);
	  count++;
       }
    }
    printf("\ncount=%d\n",count);*/
   
//分数求和：计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100
    
    /*int i = 0;
    float sum = 0.0;
    int flag = 1;
    for(i=1;i<=100;i++)
    {
       sum+=flag*1.0/i; 
       flag = -flag;
    }
    printf("%f\n",sum); */

//求10个数中最大值
  /*  int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int max = arr[0];
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for(i=1;i<sz;i++)
    {
       if(max <= arr[i])
       {
         max=arr[i];
       }      
    }
    printf("max = %d\n",max);*/
//九九乘法口诀表   
    /*int i = 0;
    for(i=1;i<=9;i++)
    {
       int j= 0;
       for(j=1;j<=i;j++)
       {
          printf("%d*%d=%-2d ",i,j,i*j);
       } 
    printf("\n");
    }*/

//memset 的用法
   /* char arr[] = "hello world";
   memset(arr,'*',5);
   printf("%s\n",arr);*/

//strcpy 的用法
  /* char arr1[] = "bit";
   char arr2[20] = "########";
   strcpy(arr2,arr1);
   printf("%s\n",arr2);*/
//写一个函数找出两个数中的较大值
 /*   int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    int c = Max(a,b);
    printf("the max=%d\n",c);*/
   
//写一个函数可以调换连个整型变量的位置
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    Swap(&a,&b);
    printf("a=%d b=%d\n",a,b);    
    return 0;
}
    

    
