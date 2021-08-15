//喝汽水（1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元可以喝多少瓶汽水？）
#include <stdio.h>
int main()
{
  int money = 0;
  int total = 0;
  int empty = 0;
  scanf("%d",&money);//买回来的汽水
  total = money;//换回来的汽水
  empty = total;//全部喝掉的空瓶
  while(empty>=2)
  {
    total += (empty/2);
    empty = empty/2+empty%2;
  }
  printf("total=%d\n",total);
  return 0;
}

