/*
loops
author: kyle Schuknecht
guess the number
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cassert>

using namespace std;

double randomNumber();

double readnumber(double);

double checknumber(double, double);

void test();

int main()
{
    double guess = 0;
    string myname;
    test();
    cout << "what is your name ";
    getline(cin, myname);
    cout << "welcome " << myname << " to guess the number you get 6 attempts. \n";
    for (int x = 0; x < 1;)
    {
        double rnum = randomNumber();
        for (int w = 0; w < 6;)
        {
            guess = readnumber(guess);
            if (checknumber(guess, rnum) == 0)
            {
                cout << "you win. it took " <<w +1 << " guesses.\n";
                break;
            }
            if (checknumber(guess, rnum) == 2)
            {
                cout << "Too High\n";
                w++;
            }
            if (checknumber(guess, rnum) == -1)
            {
                cout << "Too low\n";
                w++;
            }
        }
        cout << "The number was: " << rnum << " would you like to play again( 1 = yes, 2 = no )\n";
        int answer2;
        cin.get();
        cin >> answer2;
        if (answer2 == 2)
        {
            x++;
        }
        else
        {
            cout << "hit enter to run again.\n";
            cin.get();
            getchar();
        }
    }
    cout << "goodbye.\n";
    getchar();
    cin.get();
    return 0;
}

double randomNumber()
{
    srand(time(0));
    // credit to codescracker.com
    return (rand() % (20 + 1 - 0) + 0);
}

double readnumber(double guess)
{
    for (int t = 0; t < 1;)
    {
        cout << "enter a guess from 1-20.\n";
        cin >> guess;
        if (guess > 0 && guess < 21)
        {
            return guess;
        }
        else
        {
            cout << "\n";
        }
    }
    return 0;
}
double checknumber(double guess, double rnum)
{
    if (guess == rnum)
    {
        return 0;
    }
    if (guess < rnum)
    {
        return -1;
    }
    if (guess > rnum)
    {
        return 2;
    }
    return 3;
}

void test()
{
    double test1 = 2, test2 = 4, test3 = 6, test4 = 10, test5 = 12, test6 = 22;
    assert(checknumber(test1, test2) == -1);
    assert(checknumber(test3, test4) == -1);
    assert(checknumber(test5, test6) == -1);
}