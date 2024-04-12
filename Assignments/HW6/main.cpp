/*
Author kyle schuknecht
strings

*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;
string answer(string &compact, const string &name);
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

void testAnswer()
{
    // test if you got it right
    string line2,line3, line4, compact;
    line2 = "chess";
    line3 = "bookkeeper";
    line4 = "sallysellingseeshells";
    assert(answer(compact, line2) == "ches");
    assert(answer(compact, line3) == "bokeper");
    assert(answer(compact, line4) == "salyselingseshels");
    cerr << "All test cases passed!\n";
}

void solve()
{
    //get the first anem with the repeated letters
    string compact;
    string name;
    cin >> name;
    cout << answer(compact, name) << '\n';
}

string answer(string &compact, const string &name)
{
    // get rid of all the repeated letters leaving one.
    compact = string(1, name[0]);
    for (size_t i = 1; i < name.size(); i++)
    {
        if (name[i] != name[i - 1])
        {
            compact += string(1, name[i]);
        }
    }
    return compact;
}