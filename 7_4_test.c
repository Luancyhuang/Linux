//有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面m个数。
#include <stdio.h>
void move(int arr[20],int n,int m)
{
    int* p,arr_end;
    arr_end = *(arr+n-1);
    for(p=arr+n-1;p>arr;p--)
       *p=*(p-1);
    *arr=arr_end;
    m--;
    if(m>0)
    move(arr,n,m);
}
int main()
{
    int num[20],n,m,i;
    printf("how many numbers?");
    scanf("%d",&n);
    printf("input %d numbers:\n",n);    
    for(i=0;i<n;i++)
    {
       scanf("%d",&num[i]);
    }
    printf("how many place you want move?");
    scanf("%d",&m);
    move(num,n,m);
    printf("Now,they are:\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
