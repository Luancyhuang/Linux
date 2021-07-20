//创建一个整型数组，完成对数组的操作
//   1.实现函数Init()初始化数组为全0；
//   2.实现Print()打印数组的每个元素；
//   3.实现Reverse()函数实现数组的逆置。
//要求：自己设计以上函数的参数，返回值。
void Init(int arr[],int sz)
{  
  int i = 0 ;
  for(i=0;i<sz;i++)
  {
    arr[i] = 0;
  }        
}
void Print(int arr[],int sz)
{
  int i = 0;
  for(i=0;i<sz;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

void Reverse(int arr[],int sz)
{
  int left = 0;
  int right = sz - 1;
  while(left<right)
  {
    int tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;
    left++;
    right--;
  }
}
#include <stdio.h>
int main()
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int sz = sizeof(arr)/sizeof(arr[0]);
 // Init(arr,sz);
  Print(arr,sz);
  Reverse(arr,sz);
  Print(arr,sz);
  return 0;
}
