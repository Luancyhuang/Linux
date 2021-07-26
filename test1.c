#include <stdio.h>
double Pow (int n,int k)
{
  if(k>0)
  { 
    return n*Pow(n,k-1);
  }
  else if(k==0)
  {   
    return 1.0;
  }
  else 
  {  
    return 1.0/Pow(n,-k); 
  }
}
int main()
{
  int n = 2;
  int k = -3;
  double ret = Pow(n ,k);
  printf("%lf\n",ret);
  return 0;
}
