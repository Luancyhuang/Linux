//编写一段程序，像右边这样显示出身高和标准体重的对照表。显示的身高范围和间隔由输入的整数值进行控制，标准体重精确到小数点后2位。


#include <stdio.h>
int main()
{
  int start = 0;
  int end = 0;
  int i = 5;
  printf("开始数值(cm):");
  scanf("%d",&start);
  printf("结束数值(cm):");
  scanf("%d",&end);
  printf("间隔数据(cm):");
  scanf("%d",&i);
  for(;start<=end;start+=i)
  {
     printf("%d %.2lf\n",start,(double)(start-100)*(0.9));
  }
  return 0;
}
