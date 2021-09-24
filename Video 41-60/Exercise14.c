#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
// srand(time(NULL));  //srand takes seed as an input and is defined inside stdlib.h//
// printf("The random number between 0 to 3 is %d\n", rand()%3);

int main()
{
    int round;
    char name[50];
    char game[40];
    char comp[3][8] = {"rock", "paper", "scissor"};
    int comp_score = 0, user_score = 0;
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter the number of round you want to play the game: ");
    scanf("%d", &round);
    for (int i = 0; i < round; i++)
    {
        printf("This is the turn of %s. Enter one among rock, paper and scissor:\n", name);
        scanf(" %s", &game);
        printf("Your choice: %s\n", game);
        for (int i = 0; game[i]; i++)
        {
            game[i] = tolower(game[i]);
        }
        if ((strcmp(game, "rock") == 0) || (strcmp(game, "paper") == 0) || (strcmp(game, "scissor") == 0))
        {
            printf("This is the turn of the computer\n");
            srand(time(NULL));
            char *store;
            store = (char *)malloc(10);
            store = comp[rand() % 3];
            printf("Computer's choice: %s\n", store);

            if (strcmp("rock", game) == 0)
            {
                if (store == comp[0])
                {
                    printf("It's a Draw!!!\n");
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                }
                else if (store == comp[1])
                {
                    printf("Bad Luck...Computer won!!!\n");
                    comp_score++;
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                }
                else
                {
                    printf("Yaay...You won!!!\n");
                    user_score++;
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                }
            }
            else if (strcmp("paper", game) == 0)
            {
                if (store == comp[0])
                {
                    printf("Yaay...You won!!!\n");
                    user_score++;
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                }
                else if (store == comp[1])
                {
                    printf("It's a Draw!!!\n");
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                }
                else
                {
                    printf("Bad Luck...Computer won!!!\n");
                    comp_score++;
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                }
            }
            else if (strcmp("scissor", game) == 0)
            {
                if (store == comp[0])
                {
                    printf("Bad Luck...Computer won!!!\n");
                    comp_score++;
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                    break;
                }
                else if (store == comp[1])
                {
                    printf("Yaay...You won!!!\n");
                    user_score++;
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                }
                else
                {
                    printf("It's a Draw!!!\n");
                    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
                }
            }
        }

        else
        {
            printf("You entered wrong input\n");
        }
        printf("You have left over %d round\n", round - (i + 1));
    }
    printf("Your score is %d and computer's score is %d\n", user_score, comp_score);
    if (user_score > comp_score)
    {
        printf("You won!!\n");
    }
    else if (user_score == comp_score)
    {
        printf("It's a draw!!");
    }

    else
    {
        printf("Bad luck...computer won!!\nTry next time...");
    }

    return 0;
}
