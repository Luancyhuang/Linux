#include <stdio.h>

/*void print(int n)
{
    if(n>9)
    {
      print(n/10);
    }
    printf("%d ",n%10);
}
int main()
{
    int num = 0;
    scanf("%d",&num);
    print(num);


   // print(123)4
   // print(12)3
   // print(1)2
   // print 1
    return 0;
}*/
int my_strlen(char* p)
{
    //int count = 0;
   // while(*p!='\0')
   // {
      // count++;
      // p++;
   // }
   // return count;
   // 编写函数不允许创建临时变量，求字符串长度
   if(*p != '\0')
   {
     return 1+my_strlen(1+p);
   }
   else
   {
     return 0;
   }
}
int main()
{
    char arr[] = "hello";
    int len = my_strlen(arr);
    printf("len = %d\n",len);
    return 0;
}


