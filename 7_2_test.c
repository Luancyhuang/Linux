//编写一个函数，输入一个四位数字，要求输出这4个数字字符，但每两个数字字符间空一个空格。如输入1990，应输出“1 9 9 0”。
#include <stdio.h>
#include <string.h>
void insert(char arr[])
{
    int i = 0;
    for(i=strlen(arr);i>0;i--)
    {
       arr[2*i]=arr[i];
       arr[2*i-1]=' ';
    }
    printf("output:\n%s\n",arr);
}
int main()
{
    char arr[80];
    printf("input four digits: ");
    scanf("%s",arr);
    insert(arr);
    return 0;
}
