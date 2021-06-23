#include "game.h"

int main()
{
  int input = 0;
  srand((unsigned int)time(NULL));
  do
  {
     menu();
     printf("请猜数字：");
     scanf("%d",&input);
     switch (input)
     {
      case 1:
	  game();
          break;
      case 0:
          printf("退出游戏\n");
	  break;
      default:
	  printf("选择错误，重新选择!\n");
	  break;
      }
   }while(input);	     
  return 0;
}
