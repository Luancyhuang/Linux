//编写一个函数，使输入的一个字符串按反序存放，在主函数中输入和输出字符串。
#include <stdio.h>
#include <string.h>

void inverse(char arr[])
{
    char t;
    int i = 0;
    int j = 0;
    for(i=0,j=strlen(arr);i<=(strlen(arr)/2);i++,j--)
    {
       t = arr[i];
       arr[i] = arr[j-1];
       arr[j-1] = t; 
    }
}
int main()
{
    char arr[100];
    printf("input string: ");
    scanf("%s",arr);
    inverse(arr);
    printf("inverse string: %s\n",arr);
    return 0;
}	
