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

#include <iostream>

using std::cout;

int main(int argc, char* argv[]) {

  if (argc==0){
    cout << "needs numbers and operators ";
    return 0;
  }
  else if (argc==1){
    cout << "invalid argument " << argv[1];
  }
  else {
      cout << "Hello World!\n";
  }

return 0;
}
