/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: Kyle Schuknecht
    Date: 20240207

*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    string name = "";

    cout << "Please enter your name" << endl; //FIXME3
    cin >> name; //FIXME4: prompt user to enter their name and store the value into name variable using getline function
    
    cout << "Nice to meet you, " << name << endl; //FIXME5: greet the name using the variable as the following output
    //must output: Nice meeting you, <name>!

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "  |\\_/|   **********************    (\\_/)\n";
    cout << line1;

    string line2 = " /  @  @ \\    *   ASCII Lab   *   (='.'=)\n"; 
    cout << line2; //FIXME6: use variable to print the second line line of the graphic
    string line3 = "( >   0  <   )       *              By: Kyle      * 	( \" )_( \" )\n";//FIXME7: print the third line of the graphics
 

    cout << "\nGood bye... hit enter to exit the program: " << '\n';
    

    return 0;
}