//输入一个字符判断是元音还是辅音。
#include <stdio.h>
int main()
{
  int ch = 0;
  char vowel[] = "aeiouAEIOU";
  //循环判断部分其实是在读取字符
  while((ch = getchar()) != EOF)
  {
    //判断是否为元音字母
    int i = 0;
    int flag = 0;
    for(i=0;i<10;i++)
    {
       if(ch == vowel[i])
       {
         flag = 1;//是元音字母
         break;  
       }
    }
    if(flag == 1)
    {
      printf("vowel\n");
    } 
    else
    {
      printf("consonant\n");
    }
    getchar();
  }
  return 0;
}
