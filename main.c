#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;

    srand(time(NULL));

    n = rand() % 100 + 1;
    printf("<<<<Welcome to the Number Guessing Game.>>>>\n");
    int g = -1;
    int i;
    for (i = 0; g != n; i++)
    {
        printf("Guess The Number :");
        scanf("%d", &g);
        if (g > n)
        {
            printf("Lower Number Please!\n");
        }
        else if (g < n)
        {
            printf("Higher Number PLease!\n");
        }
    }
    printf("You Have gussed the correct number!!\n");
    printf("The number of guesses you took: %d", i);

    return 0;
}