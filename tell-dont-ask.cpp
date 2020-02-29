
#include <string>
#include <iostream>

using namespace std;

class Display {
  void showText( string messageToDisplay ) {
    system.out.println( messageToDisplay );
  }
};

class Person {
  private final string name ;
  Person( string name ) {
    this.name = name ;
  }
  void showName( Display display ) {
    display.showText( "My name is " + this.name );
  }
};

static void main(String[] dummy) {
  Display d = new Display();
  
  Person me = new Person( "John" );
  me.showName( d );
}