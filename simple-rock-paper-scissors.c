#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

char rules[]="Winning Rules of the Rock paper scissor game are:\nRock vs paper->paper wins\nRock vs scissor->Rock wins\npaper vs scissor->scissor wins\n";

char choices[]="Enter choice:\n1. Rock\n2. Paper\n3. Scissors\n";

char * elements[3]={"rock","paper","scissors"};

int main(void) 
{
  srand(time(NULL));
  char name[10];
  int play_again=1;
  int user_choice, comp_choice;
  char * result;
  
  printf("What is your name: ");
  fgets(name, 10, stdin);    

  printf("Hi %s, \nThe %s\n", name, rules);

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
    printf("Your choice is: %s", elements[user_choice]);
    printf("\n\nNow its the computer's turn.......\n");
    sleep(1);

    comp_choice = rand() % 3;
    while (comp_choice == user_choice){
      comp_choice = rand() % 3;
    }

    printf("Computer choice is: %s\n ", elements[comp_choice]);
    printf("\n%s vs %s\n",elements[user_choice],elements[comp_choice]);

    // compare guesses
    // paper & rock
    if((user_choice == 0 && comp_choice == 1) ||
       (user_choice == 1 && comp_choice == 0 )) {
        printf("\nPaper wins =>\n");
        result = elements[1]; // "paper"
    }

    // scissors & rock
    else if((user_choice == 0 && comp_choice == 2) ||
            (user_choice == 2 && comp_choice == 0)){
             printf("\nRock wins =>\n");
             result = elements[0]; // "rock"
    }

    // scissors & paper?
    else {
        printf("\nScissor wins =>\n");
        result = elements[2]; // "scissors"
    }
    // what about the draw?
    sleep(2);
    if (result == elements[user_choice]) 
        printf("for you! ==>\n");
    else
        printf("for the Computer ==>\n");
 
    //repeat?
    printf("Do you want to play again?\n");
    printf("1 for yes; 2 for no: ");
    scanf("%d", &play_again);
    printf("\n");
  }

  printf("\nThank you for playing, %s.\nGoodbye\n", name);
  return 0;
} 
