#include <stdio.h>
int main()
{
    int player1,player2;
    printf("player 1 (1= rock,2=paper, 3=scissors):\n");
    printf("player 2 (1= rock,2=paper, 3=scissors):\n");
    scanf("%d",&player1);
    scanf("%d",&player2);
    switch(player1)
    {
         case 1:
                if(player2 == 1)
                {
                    printf("draw\n");
                }
                else if(player2 == 2)
                {
                    printf("player2 wins\n");
                }
                else if(player2 == 3)
                {
                    printf("player1 wins\n");
                }
                break;
          case 2:
          	if(player2 == 1)
                {
                    printf("player1 wins\n");
                }
                else if(player2 == 2)
                {
                    printf("draw\n");
                }
               else if (player2 == 3)
                {
                    printf("player2 wins\n");
                }
                break;
           case 3:
           	if(player2 == 1)
                {
                    printf("player2 wins\n");
                }
                else if (player2 == 2)
                {
                    printf("player1 wins\n");
                }
                else if(player2 == 3)
                {
                    printf("draw\n");
                }
                break;
           default :
           {
               printf("invalid choice\n");
           }
    }
    return 0;
}
