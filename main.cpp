#include <iostream>
#include <string>
#include "edit.cpp"
#include "read.cpp"
/*#include "help.cpp"
#include "credits.cpp"
#include "about.cpp"
*/
using namespace std;
int main ()
{
string command;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "      Welcome to XDeathEdit by XTard!      " << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "Type 'edit' to edit a text file" << endl << "Type 'read' to read a text file" << endl << "Type 'help' to see usage of the commands" << endl << "Type 'credits' to see the credits" << endl << "Type 'about' to see info about XDeathEdit" << endl;
cout << "Choose what you want to do: ";

while (1)
{
  getline(cin, command);

  if (command == "edit" || command == "Edit" || command == "EDIT" || command == "^e" || command == "^E")
  edit();

  else if (command == "read" || command == "Read" || command == "READ" || command == "^r" || command == "^R")
  read();
  /*
  else if (command == "help" || command == "Help" || command == "HELP" || command == "^h" || command == "^H" || command == "?")
  help();

  else if (command == "credits" || command == "Credits" || command == "CREDITS" || command == "^c" || command == "^C")
  credits();

  else if (command == "about" || command == "About" || command == "ABOUT" || command == "^a" || command == "^A")
  about();
  */
  else if (command == "exit" || command == "Exit" ||command == "EXIT" ||command == "^e" || command == "^x" || command == "^q" || command == "^c" || command == "^d" || command == "^E" || command == "^X"  || command == "^Q" || command == "^C" || command == "^D")
  {
  cout << "Bye! See you soon!" << endl;
  return false;
  }

  else
  {
  cout << "Wrong command!" << endl << "Try again or use 'help': ";
  }
}
}
