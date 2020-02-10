#include <iostream>

using std::cout;

int main(int argc, char* argv[]) {

  if (argc>1){
    cout << "Hello " << argv[1];
  }
  else {
      cout << "Hello World!\n";
  }

return 0;
}

