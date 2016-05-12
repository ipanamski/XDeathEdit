#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main (int argc, char* argv[])
{
int line = 1;
string text;
char filename[50];
cout << "Welcome to Dirt Editor" << endl;
cout << "Enter name of the file to edit: ";
cin.getline(filename, 50);
ofstream editfile;
editfile.open(filename);
cout << "Okay, now make a text: " << endl;
while (1)
{
cout << line << "> ";
getline(cin, text);
line++;
if (text == "stop")
{
editfile.close();
cout << "Bye!" << endl;
return false;
}
else
editfile << text << endl;
}
}
