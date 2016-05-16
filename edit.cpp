#include <iostream>
#include <string>
#include <fstream>
int edit ()
{
using namespace std;
int line = 1;
string text;
char filename[50];
ofstream editfile;
cout << "Enter name of the file to edit: ";
cin.getline(filename, 50);
editfile.open(filename);
cout << "Okay, now type something: " << endl;
  while (1)
  {
  cout << line << "> ";
  getline(cin, text);
  line++;
    if (text == "^x" || text == "^q" || text == "^c" || text == "^d" || text == "^X"  || text == "^Q" || text == "^C" || text == "^D")
    {
    editfile.close();
    cout << "Moving you back to the XDeathEdit's main menu..." << endl << "Choose what you want to do: ";
    return false;
    }
    else
    editfile << text << endl;
  }
}

