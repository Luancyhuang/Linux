//编写一段程序，像右边这样根据输入整数后，循环显示1234567890，显示的位数和输入的整数值相同。
#include <stdio.h>
int main()
{ 
  int n = 0;
  printf("请输入一个整数：");
  scanf("%d",&n); 
  int i = 0;
  int j = 1;
  for(i=1;i<=n;i++)
  {
    printf("%d",j);
    j++;
    if(j>9)
    {
      j-=10;
    } 
  }
  putchar('\n');  
  return 0;
}
