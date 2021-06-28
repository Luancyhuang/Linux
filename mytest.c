//二分查找
//在一个有序数组中查找具体的某个数
//如果找到了，就返回数字的下标；找不到就返回-1；

#include <stdio.h>
//本质上arr是一个指针
int binary_search(int arr[],int k,int sz)
{
    int left = 0;	
    int right = sz - 1;
    while(left <= right)
    {
         int mid = (left + right)/2; //中间元素的下标
         if(arr[mid] < k)
	 {
            left = mid + 1;
         }
         else if(arr[mid] > k)
         {
            right = mid - 1;
         }	    
         else
         {
            return mid;
         }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k =7;
    int sz = sizeof(arr)/sizeof(arr[0]);//数组的个数
    int ret = binary_search(arr,k,sz);//实际传递的是数组的首元素的地址（arr)
    if(ret == -1)
    {
      printf("找不到制定的数字\n");
    }
    else
    {
      printf("找到了，下标是：%d\n",ret); 
    }
    return 0;
}
