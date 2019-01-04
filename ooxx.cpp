#include<stdio.h>

int main(void)
{
    int player = 0;
    int choice = 0;
    int X = 0;
    int Y = 0;
    char JG[3][3] =
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}

    };
for(int i = 0; i < 9 ; i++)
    {
        printf("\n\n");
        printf("+-----+-----+-----+\n");
        printf("| %2c  | %2c  | %2c  |\n",JG[0][0],JG[0][1],JG[0][2]);
        printf("+-----+-----+-----+\n");
        printf("| %2c  | %2c  | %2c  |\n",JG[1][0],JG[1][1],JG[1][2]);
        printf("+-----+-----+-----+\n");
        printf("| %2c  | %2c  | %2c  |\n",JG[2][0],JG[2][1],JG[2][2]);
        printf("+-----+-----+-----+\n");

        player = i % 2 + 1;
        printf("Player 1 = X\n");
        printf("Player 2 = O\n");

        do
        {
            printf("Player %d , please play: ",player);
            scanf("%d",&choice);

            X = --choice / 3;
            Y = choice % 3;
        }
        while(choice < 0 || choice > 9 || JG[X][Y] > '9');

        JG[X][Y] = (player == 1) ? 'X' :'O';

        if(JG[0][0] == JG[0][1] && JG[0][1] == JG[0][2])
        {
            if(JG[0][0] == 'X')
            {
                printf("Congratulations! Player 1 won this game!\n");
                break;
            }
            if(JG[0][0] == 'O')
            {
                printf("Player 2 won this game! Don't JGe discouraged! Play again!\n");
                break;
            }
        }
        if(JG[1][0] == JG[1][1] && JG[1][1] == JG[1][2])
        {
            if(JG[1][0] == 'X')
            {
                printf("Congratulations! Player 1 won this game!\n");
                break;
            }
            if(JG[1][0] == 'O')
            {
                printf("Player 2 won this game! Don't JGe discouraged! Play again!\n");
                break;
            }
        }
        if(JG[2][0] == JG[2][1] && JG[2][1] == JG[2][2])
        {
            if(JG[2][0] == 'X')
            {
                printf("Congratulations! Player 1 won this game!\n");
                break;
            }
            if(JG[2][0] == 'O')
            {
                printf("Player 2 won this game! Don't JGe discouraged! Play again!\n");
                break;
            }
        }
        if(JG[0][0] == JG[1][0] && JG[1][0] == JG[2][0])
        {
            if(JG[0][0] == 'X')
            {
                printf("Congratulations! Player 1 won this game!\n");
                break;
            }
            if(JG[0][0] == 'O')
            {
                printf("Player 2 won this game! Don't JGe discouraged! Play again!\n");
                break;
            }
        }
        if(JG[0][1] == JG[1][1] && JG[1][1] == JG[2][1])
        {
            if(JG[0][1] == 'X')
            {
                printf("Congratulations! Player 1 won this game!\n");
                break;
            }
            if(JG[0][1] == 'O')
            {
                printf("Player 2 won this game! Don't JGe discouraged! Play again!\n");
                break;
            }
        }
        if(JG[0][2] == JG[1][2] && JG[1][2] == JG[2][2])
        {
            if(JG[0][2] == 'X')
            {
                printf("Congratulations! Player 1 won this game!\n");
                break;
            }
            if(JG[0][2] == 'O')
            {
                printf("Player 2 won this game! Don't JGe discouraged! Play again!\n");
                break;
            }
        }
        if(JG[0][0] == JG[1][1] && JG[1][1] == JG[2][2])
        {
            if(JG[0][0] == 'X')
            {
                printf("Congratulations! Player 1 won this game!\n");
                break;
            }
            if(JG[0][0] == 'O')
            {
                printf("Player 2 won this game! Don't JGe discouraged! Play again!\n");
                break;
            }
        }
        if(JG[0][2] == JG[1][1] && JG[1][1] == JG[2][0])
        {
            if(JG[0][2] == 'X')
            {
                printf("Congratulations! Player 1 won this game!\n");
                break;
            }
            if(JG[0][2] == 'O')
            {
                printf("Player 2 won this game! Don't JGe discouraged! Play again!\n");
                break;
            }
        }
    }

    printf("\n\n");
    printf("+-----+-----+-----+\n");
    printf("| %2c  | %2c  | %2c  |\n",JG[0][0],JG[0][1],JG[0][2]);
    printf("+-----+-----+-----+\n");
    printf("| %2c  | %2c  | %2c  |\n",JG[1][0],JG[1][1],JG[1][2]);
    printf("+-----+-----+-----+\n");
    printf("| %2c  | %2c  | %2c  |\n",JG[2][0],JG[2][1],JG[2][2]);
    printf("+-----+-----+-----+\n");

    if((JG[0][0] != '1')
            && (JG[0][1] != '2')
            && (JG[0][2] != '3')
            && (JG[1][0] != '4')
            && (JG[1][1] != '5')
            && (JG[1][2] != '6')
            && (JG[2][0] != '7')
            && (JG[2][1] != '8')
            && (JG[2][2] != '9'))
    {
        printf("Draw! Play again!\n");
    }
    getchar();
    return 0;
}
