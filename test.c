
//两个兵乓球队进行比赛，各出3人。甲队为A、B、C 3人，乙队为X、Y、Z 3人。已抽签决定比赛名单。
//有人向队友打听比赛的名单。A说他不和X比，C说他不和X、Z比。请编程序找出3对赛手的名单。

#include <stdio.h>
int main()
  {
   char i,j,k;
    for(i='X';i<='Z';i++)
     for(j='X';j<='Z';j++)
      if(i!=j)
      for(k="X';k<='Z';k++)
	    if(i!=k && j!=k)
	     if(i!='X' && k!='X' && k!="Z")
		printf("Avs%c\tBvs%c\tCvs%c\n",i,j,k);
       
   return 0; 
  }




