//汉诺塔（函数递归的方式实现）
//算法分析：1.先将n-1个盘子放在B下；
//          2.将A下剩下的一个盘子放到C下；
//          3.再将B下的n-1 个盘子移动到C下。
#include <stdio.h>
void Move(char x,char y)
{
  printf("%c->%c ",x,y);
}
void HanNuo(int n, char A, char B ,char C)
{
  if(n==1)
  {
    Move(A,C);
  }
  else
  {
    HanNuo(n-1,A,C,B);
    Move(A,C);
    HanNuo(n-1,B,A,C);
  }
}
int main()
{ 
  int n = 0;
  char c[3]={'A','B','C'};
  printf("Please input your number:\n");
  scanf("%d",&n);
  HanNuo(n,'A','B','C');
  printf("\n");
  return 0;
}
