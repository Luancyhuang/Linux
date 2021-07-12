//编写一个函数，实现两个字符串的比较。自己写一个strcmp函数:strcmp(s1,s2)
#include <stdio.h>
int strcmp(char*p1,char*p2)
{
    int i=0;
    while(*(p1+i)==*(p2+i))
    { 
       if(*(p1+i++)=='\0')
	       return 0;
    }
   return (*(p1+i)-*(p2+i));
}
int main()
{  
    int m ;
    char str1[20],str2[20],*p1,*p2;
    printf("input two strings:\n");
    scanf("%s %s",str1,str2);
    p1=&str1[0];
    p2=&str2[0];
    m=strcmp(p1,p2);
    printf("result: %d\n",m);
    return 0;
}
