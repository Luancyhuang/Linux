//将数组A中的内容和数组B中的内容交换
#include <stdio.h>
int main()
{
  int arr1[] = {1,3,5,7,9};
  int arr2[] = {2,4,6,8,10};
  int sz = sizeof(arr1)/sizeof(arr1[0]);
  int tmp = 0;
  int i = 0;
  for(i=0;i<sz;i++)
  {
    tmp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = tmp;
    printf("%d ",arr1[i]);
  }
  printf("\n");
  for(i=0;i<sz;i++)
    printf("%d ",arr2[i]);
  return 0;
}
