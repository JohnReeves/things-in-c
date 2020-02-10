#include <stdio.h>
#include <string.h>

char rules[]="Winning Rules of the Rock paper scissor game as follows:\nRock vs paper->paper wins\nRock vs scissor->Rock wins\npaper vs scissor->scissor wins\n";

char choices[]="Enter choice:\n1. Rock\n2. Paper\n3. Scissors\n";

char * elements[3]={"rock","paper","scissors"};

int main(void) 
{
  printf("%s\n", rules);
  return 0;
} 
