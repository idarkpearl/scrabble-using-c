#include<stdio.h>
#include<string.h>
#include <ctype.h>
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char player[2][100];
int calculate(char playerstring[]);
int main(){
    printf("Player 1 : ");
    scanf("%s",player[0]);
    printf("\nPlayer 2 : ");
    scanf("%s",player[1]);
    int score1 = calculate(player[0]);
    int score2 = calculate(player[1]);
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    } else if (score2 > score1) {
        printf("Player 2 wins!\n");
    } else {
        printf("Tie!\n");
    }
    return 0;
}
int calculate(char playerstring[])
{
    int score = 0;
    for (int i = 0; i < strlen(playerstring); i++)
    {
        if (isupper(playerstring[i]))
        {
             score += POINTS[playerstring[i] - 'A'];
        }
        else if (islower(playerstring[i]))
        {
             score += POINTS[playerstring[i] - 'a'];
        }

    }
    return score;
}
