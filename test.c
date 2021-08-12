#include <stdio.h> 
#include <string.h>
//void show(const int *_p)
//{
//  printf("%p\n",&_p);
//  printf("%d\n",*_p);
//
//}
//int main()
//{
//  int a = 10;
//  int *p = &a;
//  printf("%p\n",&p);
//  show(p);
int main()
{
 // char arr[] = "abcdef";
 // printf("%d",sizeof(arr));//sizeof(arr)计算的是数组的大小，单位是字节。
 // printf("%d",sizeof(arr+0));//首元素的地址大小32位4字节，64位8字节。
 // printf("%d",sizeof(*arr));//首元素的大小为1。
 // printf("%d",sizeof(arr[1]));//第二个元素的大小1。
 // printf("%d",sizeof(&arr));//取出的数组的地址，但也是地址，所以是4/8个字节
 // printf("%d",sizeof(&arr+1));//跳过整个数组后的地址，取出的也是数组的地址 4/8
 // printf("%d",sizeof(&arr[0]+1));//4/8 &arr[0]+1,取出的是第二个元素的地址，大小是4/8。	
 // return 0;
 // char arr[] = "abcdef";
 // printf("%d\n",strlen(arr));//遇到‘\0'，就停下来。6
 // printf("%d\n",strlen(arr+0));//6/首元素的地址。
 // printf("%d\n",strlen(*arr));//err 97 a 非法访问内存strlen访问的是地址。
 // printf("%d\n",strlen(arr[1]));//err 98 b 同上
 // printf("%d\n",strlen(&arr));//取出的是数组的地址，存到数组指针里面char (*p)[7] = &arr; 6
 // printf("%d\n",strlen(&arr+1)); //err 随机值
 // printf("%d\n",strlen(&arr[0]+1));//5 
  char *p = "abcdef";
 // printf("%d\n",sizeof(p));//计算指针变量大小4/8
 // printf("%d\n",sizeof(p+1));//p+1 找到的是字符b 的地址4/8
 // printf("%d\n",sizeof(*p));//1（第一个字符-a）
 // printf("%d\n",sizeof(p[0]));// 1int arr[10];arr[0] == *(arr+0); p[0] == *(p+0) == 'a'  
 // printf("%d\n",sizeof(&p));//4/8 地址
 // printf("%d\n",sizeof(&p+1));//4/8 地址
 // printf("%d\n",sizeof(&p[0]+1));//4/8 地址
  //printf("%d\n",strlen(p));// 6 存储的a的地址首元素地址
 // printf("%d\n",strlen(p+1));// 5  存储的是b 的地址
 // printf("%d\n",strlen(*p)); //err  字符 'a'
 // printf("%d\n",strlen(p[0]));//err 同上  
 // printf("%d\n",strlen(&p));//随机值  
 // printf("%d\n",strlen(&p+1)); //随机值 
 // printf("%d\n",strlen(&p[0]+1));//5  
 // return 0;
  int a[3][4] = {0};
  printf("%d\n",sizeof(a));// 3*4*4=48
  printf("%d\n",sizeof(a[0][0]));//4 第一个元素的大小 
  printf("%d\n",sizeof(a[0]));//16 看成一维数组（第一行的数组名）4*4=16
  printf("%d\n",sizeof(a[0]+1));//4/8 第一行首元素的地址+1 指向的是第一行第2个元素的地址
  printf("%d\n",sizeof(*(a[0]+1)));//4/8
  printf("%d\n",sizeof(a+1));//4/8第二行数组的地址
  printf("%d\n",sizeof(*(a+1)));//16 计算第二行的大小
  printf("%d\n",sizeof(&a[0]+1));// 4/8 第二行的地址
  printf("%d\n",sizeof(*(&a[0]+1)));//16 
  printf("%d\n",sizeof(*a));//16 第一行首元素地址第一行的大小 
  printf("%d\n",sizeof(a[3]));//16 不会访问第四行sizeof不会计算第四行大小

}
