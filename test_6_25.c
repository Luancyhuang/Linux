#include <stdio.h>
int main()
{
 // printf("\n%d\n",printf("hello world!"));
   char ch = 0;
   ch = getchar();
   int i =0;
   for(i=1;i<=5;i++)
   {
     int j = 0;
     for(j=1;j<=5-i;j++)
     {
       printf(" ");
     }
     for(j=1;j<=i;j++)
     {
      printf("%c ",ch);  
     } 
    printf("\n");
   }
  return 0;
}
