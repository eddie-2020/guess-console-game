#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  int i = 8, n = 5;

  while(1) {
    printf("\n Enter a guess number: ");

    scanf("%d", &n);

    if (n == i) {
      printf("\n----------");
      printf("\nYou Are Right!");
      printf("\n----------\n");
      printf("Thank you for playing!\n");
      break;
    }
    else if (n == 9 || n == 6) {
      printf("\n Good guess you are close to the number, keep trying you can do this!\n");
    }
    else if (n == 0 || n == 1) {
      printf("\n Invalid Number!, please enter a valid number\n");
    }
    else if (n > 1)
    {
      printf("\n You Have Entered the wrong number, clue : the number is lower than the guess, try again!\n");
    }
    else if (n < 1)
    {
      printf("\n You Have Entered the wrong guess, clue : the number is larger than the guess, try again!\n");
    }
  }
}