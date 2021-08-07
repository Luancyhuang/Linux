//求Sn = a+aa+aaa+aaaa+aaaaa,前五项的和。
#include <stdio.h>
int main()
{
  int n = 0;
  int a = 0;
  scanf("%d %d",&a,&n);
  int sum = 0;
  int k = 0;
  int i = 0;
  for(i=0;i<n;i++)
  {
    k = k*10+a;
    sum += k;
  }
  printf("%d\n",sum);
  return 0;
}
