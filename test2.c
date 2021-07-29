//显示输入的月份所处的季节（用switch 语句）
#include <stdio.h>
//int main()
//{
// int month = 0;
// scanf("%d",&month);
// switch(month)
// {
//   case 3:
//   case 4:
//   case 5:
//   puts("春季");
//   break;
//   case 6:
//   case 7:
//   case 8:
//   puts("夏季");
//   break;
//   case 9:
//   case 10:
//   case 11:
//   puts("秋季");
//   break;
//   case 12:
//   case 1:
//   case 2:
//   puts("冬季");
//   break;
//   default:
//   puts("输入错误，请重新输入");
//   break;
// }
// return 0;
//
//用switch语句判断一个整数是奇数还是偶数。
//int main()
//{
//  int num = 0;
//  scanf("%d",&num);
//  int ret = num % 2; 
//  switch(ret) 
//  { 	
//    case 1:
//      puts("是奇数");
//      break;
//    case 0:
//      puts("是偶数");
//  }
//  return 0;
//}

// 编写一段程序，像右边这样读取两个整数的值，然后计算出它们之间所有整数的和。（整数1:37，整数2:28。大于等于28小于等于37的所有整数的和是325。）

int main()
{
  int a = 0;
  int b = 0;
  puts("请输入两个整数。");
  printf("整数1: ");
  scanf("%d",&a);
  printf("整数2: "); 
  scanf("%d",&b);
  int sum = 0;
  do
  {  
    sum += b;
    b++;
  }
  while(b <= 37);
  printf("大于等于28小于等于37的所有整数的和是%d。\n",sum);
  return 0;
}








