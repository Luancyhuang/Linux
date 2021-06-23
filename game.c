#include "game.h"
void menu()
{
   printf("******************\n");
   printf("***** 1.play *****\n");
   printf("***** 0.exit *****\n");
   printf("******************\n");
}

void game()
{
   int guess = 0;
   int ret =rand()%100 + 1;
   while(1)
  {
     printf("请猜数字：");
     scanf("%d",&guess);
     if(guess < ret)
     {
       printf("猜小了!\n");
     }
     else if(guess > ret)
     {   
       printf("猜大了!\n");
     }
     else 
     {
       printf("恭喜你猜对了!\n");
       break;
     }
  }
}

