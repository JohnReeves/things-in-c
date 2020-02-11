/*
RPN Calculator in pseudocode
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
for each token in the postfix expression:
  if token is an operator:
    operand_2 ← pop from the stack
    operand_1 ← pop from the stack
    result ← evaluate token with operand_1 and operand_2
    push result back onto the stack
  else if token is an operand:
    push token onto the stack
result ← pop from the stack
*/

#include <stdio.h>
#include <stdlib.h>

char * message[]={"Needs numbers and operators.",
                "Invalid arguments >>",
                "Invalid arguments >>"};

int stack[]={0,0,0}
;
int main(int argc, char* argv[]) {
  if (argc < 2) printf("%s\n", message[0]); 
  else if (argc == 2) printf("%s %s %s\n", message[1], argv[0], argv[1]); 
  else if (argc == 3) printf("%s %s %s %s\n", message[2], argv[0], argv[1], argv[2]); else {
    printf("Hello World!\n");

    // for each token in the postfix expression:
    for (int i; i < argc; i++){
      // if token is an operator:
      if (argv[i] == "+"){
        // operand_2 ← pop from the stack
        // operand_1 ← pop from the stack
        // result ← evaluate token with operand_1 and operand_2
        // push result back onto the stack
      }
      else if (argv[i] == "-"){

      }
      else if (argv[i] == "*"){

      }
      else if (argv[i] == "/"){

      }
      // else if token is an operand:
      } else {

        // push token onto the stack
        // result ← pop from the stack     

      }

  }

  }


return 0;
}
