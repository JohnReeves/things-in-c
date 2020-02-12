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
#include <string>
#include <cctype>
#include <regex>
#include <stack>

using namespace std;

void process_token(string s);

stack<double> st;
string instr;
string num_pattern("[0-9]+(\\.[0-9]*)?");
string op_pattern("[+*/-]");
regex re(num_pattern + "|" + op_pattern);

int main() {

  while (true) {
    cout << "Enter expression (or ENTER to exit): ";
    getline(cin, instr);

    if (instr.length() == 0) break;

    sregex_iterator it(instr.begin(), instr.end(), re);
    sregex_iterator it_end;

    // for each token in the postfix expression:
    for (;it != it_end; ++it) process_token(it->str()){

      //  if token is an operand:
      //    push token onto the stack
      if (s.find_first_not_of("+*/-") != s.npos) {
        st.push(atof(s.c_str()));

      //  else if token is an operator:
      // operand_2 ← pop from the stack
      // operand_1 ← pop from the stack
      // result ← evaluate token with operand_1 and operand_2
      // push result back onto the stack
      } else {
        double op2 = st.top(); st.pop();
        double op1 = st.top(); st.pop();
        switch(s[0]) {
          case '+': st.push(op1 + op2); break;
          case '-': st.push(op1 - op2); break;
          case '*': st.push(op1 * op2); break;
          case '/': st.push(op1 / op2); break;
        }
      }
    }
    if (!st.empty()) cout << "The value is: " << st.top() << endl;
  }
  return 0;
}
