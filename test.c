//函数指针实现加减乘除计算器功能
#include <stdio.h>
int Add(int x,int y)
{
  return x+y;
}
int Sub(int x ,int y)
{
  return x-y;
}
int Mul(int x ,int y)
{
  return x*y;
}
int Div(int x ,int y)
{
  return x/y;
}

void menu()
{
  printf("***********************\n");
  printf("**** 1.加法 2.减法 ****\n");
  printf("**** 3.乘法 4.除法 ****\n");
  printf("**** 0.exit        ****\n");
  printf("***********************\n");
}
int main()
{
 //  int (*pf1)(int,int) = Add();
 //  int (*pf2)(int,int) = Sub();
 //  int (*pf3)(int,int) = Mul();
 //  int (*pf4)(int,int) = Div();
 // int (*pfArr)[5](int,int) = {0,Add,Sub,Mul,Div};//pfArr就是一个函数指针的数组
 // int input = 0;	
 // do
 // {
 //  int x = 0;
 //  int y = 0;
 //  int ret = 0;
 //  menu();
 //  printf("请选择:>");
 //  scanf("%d",&input);
 //  printf("请输入两个操作数:>");
 //  scanf("%d %d",&x,&y);
 //  switch(input)
 //  {
 //    case 1:
 //       ret =  Add(x,y);
 //       printf("%d\n",ret);
 //       break;
 //    case 2:
 //       ret = Sub(x,y);
 //       printf("%d\n",ret);
 //       break;
 //    case 3:
 //       ret = Mul(x,y);
 //       printf("%d\n",ret);
 //       break;
 //    case 4:
 //       ret = Div(x,y);
 //       printf("%d\n",ret);
 //       break;
 //    case 0:
 //       printf("请退出计算器!\n");
 //       break;
 //    default:
 //       printf("选择错误，请重新输入!\n");
 //       break;
 //  }
 // }while(input);
  int input = 0;
  do
  {
    int x = 0;
    int y = 0;
    int ret = 0;
    menu();
    printf("请选择:>");
    scanf("%d",&input);
    int (*pfarr[5])(int,int)= {0,Add,Sub,Mul,Div};
    if(input == 0)
    {
      printf("请退出计算器!\n");
    } 
    else if((input >=1) &&(input <= 4)) 
    {
      printf("请输入两个操作数:>");
      scanf("%d %d",&x,&y);
      ret = pfarr[input](x,y);
      printf("ret = %d\n",ret);
    } 
    else
    {
      printf("选择错误，请重新输入！\n");
    }
  }while(input);
  return 0;
}
