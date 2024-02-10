/*
Kyle Schuknecht
Hangman
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "what is your Name" << endl;
    string Name;
    getline(cin, Name);
    cout << "Hello " << Name << " welcome to Hangman" << endl;
    cout << "stage 0\n";
    cout << "--------------------\n";
    cout << "|/\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "------------------\n\n";

    cout << "stage 1\n";
    cout << "--------------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "------------------\n\n";

    cout << "stage 2\n";
    cout << "--------------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|             |\n";
    cout << "|             |\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "------------------\n\n";

    cout << "stage 3\n";
    cout << "--------------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|            /|\n";
    cout << "|             |\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "------------------\n\n";

    cout << "stage 4\n";
    cout << "--------------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|            /|\\\n";
    cout << "|             |\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "------------------\n\n";

    cout << "stage 5\n";
    cout << "--------------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|            /|\\\n";
    cout << "|             |\n";
    cout << "|            /\n";
    cout << "|           /\n";
    cout << "|\n";
    cout << "------------------\n\n";

        cout << "stage 6\n";
    cout << "--------------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|            /|\\\n";
    cout << "|             |\n";
    cout << "|            / \\\n";
    cout << "|           /   \\\n";
    cout << "|\n";
    cout << "------------------\n\n";
    return 0;
}