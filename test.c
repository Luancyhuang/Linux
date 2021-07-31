//编写一段程序，像右边这样显示出身高和标准体重的对照表。显示的身高范围和间隔由输入的整数值进行控制，标准体重精确到小数点后2位。


#include <stdio.h>
//int main()
//{
//  int start = 0;
//  int end = 0;
//  int i = 5;
//  printf("开始数值(cm):");
//  scanf("%d",&start);
//  printf("结束数值(cm):");
//  scanf("%d",&end);
//  printf("间隔数据(cm):");
//  scanf("%d",&i);
//  for(;start<=end;start+=i)
//  {
//     printf("%d %.2lf\n",start,(double)(start-100)*(0.9));
//  }
//  return 0;
//}

//编写一段程序，像右边这样为九九乘法表增加横纵标题。

int main()
{
  int i = 0;
  int j = 0;
  printf("   |");  
  for(i=1;i<=9;i++)
  {
    printf("  %d",i);
  }//打印第一行
  printf("\n");
  for(i=1;i<=32;i++)
  {
    printf("-");
  } //打印第二行
  printf("\n");
  for(i=1;i<=9;i++)
  {
    printf(" %d |",i);
    for(j=1;j<=9;j++)
    {
      printf(" %2d",i*j);
    }
    printf("\n");
  }
  return 0;
}

//int main()
//{
//  int i = 0;
//  for(i=1;i<=9;i++)
//  {
//    int j = 0;
//    for(j=1;j<=i;j++)
//    {
//      printf("%d*%d=%-2d ",i,j,i*j);
//    }
//    printf("\n");
//  }
//  return 0;
//}





