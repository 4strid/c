#include <stdio.h>
#include <stdlib.h>

int play_the_game(void);
int squareTheNumber(int);

int main (int argc, char** argv) {
  //char name[512];
  //printf("Who are you? ");
  //scanf("%s", &name);
  //printf("Hello, %s.\n", name);
  int twenty_two = 22;
  printf("The 22 squared is %d", squareTheNumber(twenty_two));

  int did_win = play_the_game();
  if (did_win) {
    printf("You win!");
  } else {
    printf("Womp Womp!");
  }

  return 0;
}

int play_the_game (void) {
  int number, guess;
  number = 65;
  printf("Guess the number: ");
  scanf("%d", &guess);

  if (guess == number) {
    printf ("You got it! ");
    return 1;
  } else if (guess > number) {
    printf ("Too High! ");
  } else if (guess < number) {
    printf ("Too Low! ");
  }
  return 0;
}

int squareTheNumber (int x) {
  return x * x;
}
