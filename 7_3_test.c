//给出年、月、日，计算该日是该年的第几天
#include <stdio.h>
int sum_day(int month,int day)
{
    int month_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i = 0;
    for(i=1;i<month;i++)
    {
       day+=month_tab[i];
    }
    return day;
}
int leap(int year)
{
    if((year%4 == 0 && year%100!=0) || (year%400 == 0))
      return 1;
    else
      return 0;
}
int main()
{   
    int year,month,day,days;
    printf("input date(year,month,day):");
    scanf("%d,%d,%d",&year,&month,&day);
    days=sum_day(month,day);
    if(leap(year)==1)
    {
      days+=1;
    }
    if(leap(year)== 0)
    {
      days=days;
    }
    printf("Today is the %dth day in this year.\n",days);
    return 0;
}
