#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number_of_guess = 0;
    int guess;

    int randomNum = (rand() % 100) + 1;

    do
    {
        printf("guess the number: \n");
        scanf("%d", &guess);
        if(guess > randomNum) printf("lower the number\n");
        else if(guess<randomNum) printf("higher the number\n");

        number_of_guess++;
        

    } while (guess != randomNum);
    printf("you guesssed the number in %d number of attempts\n", number_of_guess);
    return 0;
}
