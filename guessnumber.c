#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess;
    int answer = rand() % 100 + 1;
    int guesses = 0;

    // seed rand function with pseudo-random number
    srand(time(0));
    printf("Guess a number between 1 and 100\n");

    do
    {

        scanf("%d", &guess);
        guesses++;
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low\n");
        }
        else
        {
            printf("You guessed correctly\n");
        }

    } while (guess != answer);

    printf("You guessed right in %d guesses\n", guesses);
    return 0;
}