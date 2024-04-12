/*
Kattis - Hissing Microphone Problem

By: Kyle Schuknecht
Date: 3/12/24

Hissing Microphone Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read string
2. find "ss" substring in the string
    - if found, print "hiss"
    - otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

#define clear() system("clear")

// function prototypes
string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char *argv[])
{
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve();
    return 0;
}

string answer(const string &line)
{
   
    // implment algorithm step 2
    // return "hiss" if ss is found in line
    // otherwise, return "no hiss"
    for (size_t x = 1; x < line.length(); x++)
    {
        if (line.at(x - 1) == line.at(x) && line.at(x) == 's')
        {
            return "hiss";
        }
    }

    return "no hiss";
}

//unit testing answer()
void testAnswer()
{
    string line2,line3;
    line2 = "chess";
    line3 = "colors";
    
    assert(answer(line2) == "hiss");
    assert(answer(line3) == "no hiss");
    // write at least two test cases to test answer()
    cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve()
{
    clear();
    string line;
    // string consists of only lowercase letters (no spaces) upto 30 chars
    
    // read string into line
    cout << "Enter a word between than 30 charachters.\n";
    for (int i = 0; i < 1;)
    {
        cin >> line;
        if (line.length() > 30)
        {
            cout << "Enter a word between 1 and 30 charachters.\n";
        }
        else
        {
            i++;
        }
    }
    cout << answer(line) << endl;

}

// unit testing answer()
void testAnswer() {
    
    // write at least two test cases to test answer()
    cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve() {
    string line;
    // string consists of only lowercase letters (no spaces) upto 30 chars
    
    // read string into line
    cout << answer(line) << endl;
}