//九宫格
#include <stdio.h>
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
	{
	   board[i][j]=' ';
	}
    }
}
void ShowBoard(char board[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
       int j=0;
       for(j=0;j<col;j++)
       {
           printf(" %c ",board[i][j]);
	   if(j<col-1)
	      printf("|");
       }
       printf("\n");
         if(i<row-1)
         {   
            for(j=0;j<col;j++)
	    {  
	        printf("---");
	        if(j<col-1)
	        printf("|");
	    } 
         }
       printf("\n"); 
    }
}
int main()
{
    char board[ROW][COL]={0};
    InitBoard(board,ROW,COL);
    ShowBoard(board,ROW,COL);
    return 0;
}
