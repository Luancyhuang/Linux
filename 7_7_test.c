//用牛顿迭代法求方程的根。方程ax³+bx²+cx+d=0,系数a,b,c,d由主函数输入。求x在1附近的一个实根。求出根后，由主函数输出。
#include <stdio.h>
#include <math.h>
float solut(float a,float b,float c,float d)
{
    float x=1,x0,f,f1;
    do
    {
      x0=x;
      f=((a*x0+b)*x0+c*x0+d);
      f1=(3*a*x0+2*b)*x0+c;
      x=x0-f/f1;
    }while(fabs(x-x0)>=1e-3);
    return x;
}
int main()
{
    float a,b,c,d;
    printf("input a,b,c,d:");
    scanf("%f,%f.%f,%f",&a,&b,&c,&d);
    printf("x=%10.7f\n",solut(a,b,c,d));
    return 0;
}
