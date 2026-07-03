#include <stdio.h>

int main() {
    int secret =33;
    int guess;

    printf("Guess the number (1-66): ");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Congratulations! You guessed the correct number.");
    else if (guess < secret)
        printf("Too low! Try a higher number.");
    else
        printf("Too high! Try a lower number.");

    return 0;
}