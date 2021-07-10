#include <stdio.h>
#include <string.h>
void bubble(int arr[],int sz)
{
    int i=0;
    for(i=0;i<sz-1;i++)
    {
        int j=0;
	for(j=0;j<sz-1-i;j++)
	{
          if(arr[j]>arr[j+1])
	  {
	     int tmp=arr[j];
	     arr[j]=arr[j+1];
	     arr[j+1]=tmp;
	  }
        }   
    }
}
int main()
{
  /*  char arr1[]={'a','b','c'};
    char arr2[]="abc"; 
    printf("%d\n",sizeof(arr1));
    printf("%d\n",strlen(arr1));
    printf("%d\n",sizeof(arr2));
    printf("%d\n",strlen(arr2));*/

  //  char arr[]="abcde";
   // printf("%c\n",arr[4]);
   // int i=0;
   // int len =strlen(arr);
   // for(i=0;i<len;i++)
	  //  printf("%c ",arr[i]);
 /*   int arr2[]={1,2,3,4,5,6,7,8,9,0};
    int sz =sizeof(arr2)/sizeof(arr2[0]);
    int i =0;
    for(i=0;i<sz;i++)
    printf("&arr2[%d]=%p\n",i,&arr2[i]);*/
    

   int arr[]={9,8,7,6,5,4,3,2,1,0};
   int sz=sizeof(arr)/sizeof(arr[0]); 
   bubble(arr,sz);
   int i =0;
   for(i=0;i<sz;i++)
   {
      printf("%d ",arr[i]); 

   }
   return 0;
}
