#include "game.h"
void game()
{
   char mine[ROWS][COLS]={0};//11*11的数组，布置好雷的信息。
   char show[ROWS][COLS]={0};//排查出雷的信息。
   InitBoard(mine,ROWS,COLS,'0');
   InitBoard(show,ROWS,COLS,'*');
   ShowBoard(mine,ROW,COL);
   SetMine(mine,ROW,COL);
   FindMine(mine,show,ROW,COL);
  // ShowBoard(mine,ROW,COL);
}
void menu()
{
   printf("***********************\n");
   printf("*******  1.play *******\n");
   printf("*******  0.eixt *******\n");
   printf("***********************\n");
}
void test()
{
   int input =0;
   srand((unsigned int)time(NULL));
   do
   {
    menu();
    printf("请选择:");
    scanf("%d",&input);
    switch(input)
    {
        case 1:
           game();
           break;    
	case 0:
	   printf("退出游戏!\n");
	   break;
	default:
	   printf("选择错误，请重新输入:\n");
           break;
    }	    
   }while(input);
}
int main()
{
   test();
   return 0;
}
