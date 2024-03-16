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
    //FIXME3: declare a variable to store name #fixed
    string yourname;
    //FIXME4: prompt user to enter their name and store the value in variable#fixed
    cout << "what is your name? ";
    getline(cin, yourname);
    //FIXME5: greet the name using the variable as the following output#fixed
    //must output: Nice meeting you, <name>!#fixed
    cout << "Nice meeting you, " << yourname << endl;
    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";
    string line1;
    line1 = "  |\\_/|   **********************   (\\_/)\n";
    cout << line1;
    line1 = " / @ @ \\  *      ASCII Lab     *  (='.'=)\n";
    cout << line1;
    line1 = "( > 0 < ) *    By kyle schuknecht   *  (\")_(\")\n";
    cout << line1;
    line1 = "  >>x<<   *       CSCI 111     *\n";
    cout << line1;
    line1 = "  / 0 \\   **********************\n";
    cout << line1;
   

    cout << "\nGood bye... hit enter to exit the program:" << '\n';
    
    getchar();
    return 0; //exit program by returning 0 status to the system
}