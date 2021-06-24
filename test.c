#include <stdio.h>
int main()
{
   int n = 0;
   int arr[100] ={0};
   scanf("%d",&n);
   int i = 0;
   for(i=1;i<=n;i++)
   {
     scanf("%d",&arr[i]);
   }   
   int x = 0;
   scanf("%d",&x);
   int count = 0;
   for(i=0;i<n;i++)
   {
     if(x == arr[i])
     {
     count++;
     }
   }
  printf("%d\n",count);   
return 0;
}
