#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char rules[]="Winning Rules of the Rock paper scissor game as follows:\nRock vs paper->paper wins\nRock vs scissor->Rock wins\npaper vs scissor->scissor wins\n";

char choices[]="Enter choice:\n1. Rock\n2. Paper\n3. Scissors\n";

char * elements[3]={"rock","paper","scissors"};

int main(void) 
{
  srand(time(NULL));
  char name[10];
  int play_again=1;
  int user_choice, comp_choice;
  
  printf("type in your name: ");
  fgets(name, 10, stdin);    

  printf("%s\n", rules);

  while (play_again == 1){
    printf("%s\n", choices);

    //play the game
    // choices
    printf("Your turn: ");
    scanf("%d", &user_choice);   

    while ((user_choice > 3) || (user_choice < 1)){
      printf("Give a valid choice: ");
      scanf("%d", &user_choice);
    }

    user_choice -= 1; // convert to array index
    printf("user choice is: %s", elements[user_choice]);
    printf("\nNow its computer turn.......");

    comp_choice = rand() % 3;
    while (comp_choice == user_choice){
      comp_choice = rand() % 3;
    }

    printf("Computer choice is: %s ", elements[comp_choice]);
    printf("%s vs %s",elements[user_choice],elements[comp_choice]);

    // compare guesses

    //repeat?
    printf("Do you want to play again?\n");
    printf("1 for yes; 2 for no: ");
    scanf("%d", &play_again);   
  }

  printf("\nThank you for playing, %s.\nGoodbye\n", name);
  return 0;
} 
