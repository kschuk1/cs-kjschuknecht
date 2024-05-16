/*
   	Created by: Kyle Schuknecht
	Date made: 5/10/24

*/
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <random>
#include <ctime>

#define clear() system("clear")

using namespace std;
double guesscheck(const string &, string &);
void fillanswer(const string &, string &, char &);
void displaynoose(int &);
double repeat(char &, int &, string &);
void displayelim(char &, int &, string &);
void clearanswer(string &);
void getword(string &);
double game();
int main()
{
    for (int w = 0; w < 1;)
    {
        game();
        // aks them if they want to play again
        cout << "Would you like to play again (1=yes, 0=no) ";
        getchar();
        int b = 0;
        cin >> b;
        if (b == 0)
        {
            w++;
        }
        else
        {
            cout << "hit enter to run again";
            getchar();
            cin.get();
        }
    }
    cout << "hit enter to quit";
    getchar();
    cin.get();
    return 0;
}
double game()
{
    // Create Variables
    string word;
    string answer;
    char guess;
    int vic;
    int v;
    int g;
    string v2;
    string v3;
    clear();
    
    getword(word);
    
    answer.resize(word.length());
    vic = 0;
    v = 0;
    g = 0;
    // set answer to underscores
    clearanswer(answer);
    vector<string> v1(1);
    v1.at(0) = answer;
    
    cout << "there are " << word.length() << " letters.\n";
    while (vic == 0)
    {
        g++;
        v1.resize(1 + g);
        for (int z = 0; z < 1;)
        {
            cout << "type a guess then hit enter: " << '\n';
            cin >> guess;
            // See if they already entered the letter.
            if (repeat(guess, g, v2) == 1)
            {
                cout << "you already entered that letter. \n";
            }
            if (repeat(guess, g, v2) == 0)
            {
                z++;
            }
        }
        fillanswer(word, answer, guess);
        v1.at(g) = answer;
        // if the letter they entered went into the word check if they won
        if (v1.at(g) != v1.at(g - 1))
        {
            if (guesscheck(word, answer) == 1)
            {
                vic = 1;
            }
        }

        else
        {
            cout << "there is no " << guess << "\n";
            v++;
            displaynoose(v);
            displayelim(guess, v, v3);
            if (v == 7)
            {
                break;
            }
        }
        cout << "progress: \n";
        cout << answer << "\n\n";
    }
    if (v == 7)
    {
        cout << "you lose the answer was: " << word << '\n';
    }
    else
    {
        cout << "congratulations you win.\n";
    }
    return 0;
}
double repeat(char &guess, int &g, string &v2)
{
    v2.resize(g);
    for (size_t c = 0; c < v2.length() - 1; c++)
    {
        if (v2.at(c) == guess)
        {
            return 1;
        }
    }
    v2.at(g - 1) = guess;
    return 0;
}

void fillanswer(const string &word, string &answer, char &guess)
{
    for (size_t i = 0; i < word.length(); i++)
    {
        if (word.at(i) == guess)
        {
            answer.at(i) = guess;
        }
    }
}

double guesscheck(const string &word, string &answer)
{
    if (word == answer)
    {
        return 1;
    }
    return 0;
}
// dispay stages
void displaynoose(int &v)
{
    if (v == 1)
    {
        cout << "Stage 1 \n";
        cout << "---------------\n";
        cout << "|/\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "----------\n";
    }
    if (v == 2)
    {
        cout << "Stage 2 \n";
        cout << "---------------\n";
        cout << "|/            |\n";
        cout << "|             0\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "----------\n";
    }
    if (v == 3)
    {
        cout << "stage 3\n";
        cout << "---------------\n";
        cout << "|/            |\n";
        cout << "|             0\n";
        cout << "|             |\n";
        cout << "|             |\n";
        cout << "|             |\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "----------\n";
    }
    if (v == 4)
    {
        cout << "stage 4\n";
        cout << "---------------\n";
        cout << "|/            |\n";
        cout << "|             0\n";
        cout << "|             |\n";
        cout << "|             |\n";
        cout << "|             |\n";
        cout << "|            /\n";
        cout << "|           / \n";
        cout << "|\n";
        cout << "----------\n";
        cout << "----------\n";
    }
    if (v == 5)
    {
        cout << "stage 5\n";
        cout << "---------------\n";
        cout << "|/            |\n";
        cout << "|             0\n";
        cout << "|             |\n";
        cout << "|             |\n";
        cout << "|             |\n";
        cout << "|            / \\\n";
        cout << "|           /   \\\n";
        cout << "|\n";
        cout << "----------\n";
    }
    if (v == 6)
    {
        cout << "stage 6\n";
        cout << "---------------\n";
        cout << "|/            |\n";
        cout << "|             0\n";
        cout << "|             |\\\n";
        cout << "|             | \\\n";
        cout << "|             |\n";
        cout << "|            / \\\n";
        cout << "|           /   \\\n";
        cout << "|\n";
        cout << "----------\n";
    }
    if (v == 7)
    {
        cout << "stage 7\n";
        cout << "---------------\n";
        cout << "|/            |\n";
        cout << "|             0\n";
        cout << "|            /|\\\n";
        cout << "|           / | \\\n";
        cout << "|             |\n";
        cout << "|            / \\\n";
        cout << "|           /   \\\n";
        cout << "|\n";
        cout << "----------\n";
    }
}

void displayelim(char &guess, int &v, string &v3)
{
    v3.resize(v);
    v3.at(v - 1) = guess;
    cout << "Eliminated letters are: " << '\n';
    for (size_t m = 0; m < v3.length(); m++)
    {
        cout << v3.at(m) << ' ';
    }
    cout << '\n';
}

void clearanswer(string &answer)
{
    for (size_t x = 0; x < answer.length(); x++)
    {
        answer.at(x) = '_';
    }
}

void getword(string &word)
{
    ifstream fin;
    srand(time(0));
    int randomLine = rand() % 855 + 1;
    fin.open("rndmword.txt", ifstream::in);
    string line;
    int currentline = 1;
    while (getline(fin, line))
    {
        if (currentline == randomLine)
        {
            istringstream iss(line);
            iss >> word;
            break;
        }
        currentline++;
    }
    fin.close();
}
