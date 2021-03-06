#include "game.h"

int x = 0;
int y = 0;

void Menu()
{
      printf("####################\n");
      printf("## 1.Play  0.Exit ##\n");
      printf("####################\n");
      printf("please select# ");
}

void PlayerMove(int board[][COL],int row ,int col,int who)
{
   while(1){
             printf("player[%d] please enter your pos#",who);
             scanf("%d %d",&x, &y);
             if( x < 1 || x > row || y < 1 || y > col)
                {
                  printf("Pos is not right!\n");
                  continue;
	       	}
	     else if(board[x-1][y-1] != 0)
                {
                  printf("Pos is occupied!\n");
                  continue;
		}
	     else
	        {     
	          board[x-1][y-1] = who;
	          break;
		}
            }
}

             
int ChessCount(int board[][COL],int row,int col,enum Dir d)
{
    int _x = x - 1; //从1开始
    int _y = y - 1; //从1开始

    int count = 0;
    while(1)
    {
         switch(d)
        {
		case LEFT:
			_y--; 
			break;
		case RIGHT:
			_y++;
			break;
		case UP:
			_x--;
			break;
		case DOWN:
			_x++;
			break;
                case LEFT_UP:
			_x--;_y--;
		        break;
		case LEFT_DOWN:
			_x++;_y--;
			break;
		case RIGHT_UP:
			_x--;_y++;
			break;
		case RIGHT_DOWN:
			_x++;_y++;
			break;
		default:
			// do nothing!
			break;
         }
         if(_x < 0 || _x > row - 1 || _y < 0 || _y > col - 1)
            {
                 break;
            }   
         if(board[x-1][y-1] == board[_x][_y])
            {
                 count++;
            }
         else 
            {    
                 break;
            } 
    }
return count;
}
int IsOver(int board[][COL], int row, int col)
{
    int count1 = ChessCount(board,row,col,LEFT) + ChessCount(board,row,col,RIGHT) + 1;
    int count2 = ChessCount(board,row,col,UP) + ChessCount(board,row,col,DOWN) + 1;
    int count3 = ChessCount(board,row,col,LEFT_UP) + ChessCount(board,row,col,RIGHT_DOWN) + 1;
    int count4 = ChessCount(board,row,col,LEFT_DOWN) + ChessCount(board,row,col,RIGHT_UP) + 1;
   
    if(count1 >= 5 || count2 >= 5 || count3 >= 5 || count4 >= 5)
    {
       if(board[x-1][y-1] == PLAYER1)
        {
           return PLAYER1_WIN;
        }
       else
        {
           return PLAYER2_WIN;
        }
    }
     int i = 0;
     for(;i < row;i++)
     {
         int j = 0;
     for(;j < col;j++)
         {
           if(board[i][j] == 0)
            {   
	     return NEXT;
            }
         }
     }     
     return DRAW ;
}
void ShowBoard(int board[][COL],int row,int col)
{
  printf("\e[1;1H\e[2J");
  printf("  ");
  int i = 1;
  for(; i <= col ; i++)
   {
   printf("%3d",i);
   }
   printf("\n"); 
   for(i = 0;i < row;i++)
      {
        int j = 0;
        printf("%2d ",i+1);
        for(; j < col; j++)
         {
             if(board[i][j] == 0)
             {
                 printf(" . ");
	     }
	     else if(board[i][j] == PLAYER1)
	     {
	        printf(" ● ");
	     }   
	     else
	     {
	        printf(" ○ ");
	     }
          }
   printf("\n");
       }
}
void Game()
{
     int board[ROW][COL];
     memset(board, 0, sizeof(board));
     int result = NEXT;
     do{
         ShowBoard(board, ROW, COL);
         PlayerMove(board, ROW, COL, PLAYER1);
         result = IsOver(board, ROW, COL);
        if(NEXT != result)
           {
               break;
	   }
         ShowBoard(board, ROW, COL);
         PlayerMove(board, ROW, COL, PLAYER2);
	 result = IsOver(board, ROW, COL);
	 if(NEXT != result)
	   {
               break;
	   }
        }while(1);
     ShowBoard(board, ROW, COL);
     switch(result)
        {
	     case PLAYER1_WIN:
		     printf("恭喜用户1，你已经赢了！\n");
		     break;
	     case PLAYER2_WIN:
                     printf("恭喜用户2，你已经赢了！\n");
		     break;
	     case DRAW:
		     printf("平局，和气生财！\n");
		     break;
	     default:
		     //do nothing!
		     break;
        } 
}

