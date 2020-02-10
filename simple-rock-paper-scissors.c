#include <stdio.h>
#include <string.h>
#include <random.h>

char rules[]="Winning Rules of the Rock paper scissor game as follows:\nRock vs paper->paper wins\nRock vs scissor->Rock wins\npaper vs scissor->scissor wins\n";

char choices[]="Enter choice:\n1. Rock\n2. Paper\n3. Scissors\n";

char * elements[3]={"rock","paper","scissors"};

int main(void) 
{
  char name[10];
  int play_again=1;
  int user_choice, computer_choice;
  
  printf("type in your name: ");
  fgets(name, 10, stdin);    

  printf("%s\n", rules);

  while (play_again == 1){
    printf("%s\n", choices);

    //play the game


    //repeat?
    printf("Do you want to play again?\n");
    printf("1 for yes; 2 for no: ");
    scanf("%d", &play_again);   
  }

  printf("\nThank you for playing, %s.\nGoodbye\n", name);
  return 0;
} 
