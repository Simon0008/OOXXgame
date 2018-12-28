#include<stdio.h>

int main(void)
{
    int player = 0;
    int winner = 0;
    int choice = 0;
    int X = 0;
    int Y = 0;
    int line = 0;
    char JG[3][3] =
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}

    };
for(int i = 0; i < 9 && winner == 0; i++)
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

        do
        {
            printf("player%d,please play:",
                   player);
            scanf("%d",&choice);

            X = --choice / 3;
            Y = choice % 3;
        }
        while(choice < 0 || choice > 9 || JG[X][Y] > '9');

        JG[X][Y] = (player == 1) ? 'X' :'O';

            for(line = 0; line < 3; line++)
            {
                if(JG[0][line] == JG[1][line]
                        && JG[0][line] == JG[2][line] ||
                        JG[line][0] == JG[line][1]
                        && JG[line][0]== JG[line][2])
                    winner = player;
            }
    }
