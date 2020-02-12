/*
RPN Calculator in pseudocode
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
for each token in the postfix expression:
  if token is an operand:
    push token onto the stack
  else if token is an operator:
    operand_2 ← pop from the stack
    operand_1 ← pop from the stack
    result ← evaluate token with operand_1 and operand_2
    push result back onto the stack
result ← pop from the stack
*/

#include <iostream>
#include <string>
#include <cctype>
#include <regex>
#include <stack>

using namespace std;

stack<double> st;
string instr;
string num_pattern("[0-9]+(\\.[0-9]*)?");
string op_pattern("[+*/-]");
regex re(num_pattern + "|" + op_pattern);

int main() {

  while (true) {
    cout << "Expr: ";
    getline(cin, instr);
    if (instr.length() == 0) break;

    sregex_iterator it(instr.begin(), instr.end(), re);
    sregex_iterator it_end;

    for (;it != it_end; ++it) {
      if (it->str().find_first_not_of("+*/-") != it->str().npos) {
        st.push(atof(it->str().c_str()));
      } else {
        double op2 = st.top(); st.pop();
        double op1 = st.top(); st.pop();
        switch(it->str()[0]) {
          case '+': st.push(op1 + op2); break;
          case '-': st.push(op1 - op2); break;
          case '*': st.push(op1 * op2); break;
          case '/': st.push(op1 / op2); break;
        }
      }
    }
    if (!st.empty()) cout << "= " << st.top() << endl;
  }
  return 0;
}
