/*
Author kyle schuknecht
arrays

*/
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

void test();
double solve();

int main(int argc, char *argv[])
{
    if (argc == 2 and string(argv[1]) == "test")
        test();
    else
        solve();
    return 0;
}
double solve()
{
    
    int n1, s1, s2;
    s1 = 0;
    s2 = 0;
    // get the desired size
    cin >> n1;
    // get all the components
    vector<int> v1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }
    // sort by large to small- pick the largest number first
    sort(v1.rbegin(), v1.rend());
    
    for (int t = 0; t < n1; t++)
    {
        if (t % 2 == 0)
        {
            s1 += v1[t];
        }
        else
        {
            s2 += v1[t];
        }
    }
    //  amounts
    cout << s1 << ' ' << s2 << '\n';
    return 0;
}

void test()
{
    //  test
    int s1 = 0, s2 = 0;
    vector<int> v1(6);
    v1 = {12, 45, 43, 23, 33, 42};
    sort(v1.rbegin(), v1.rend());
    for (int t = 0; t < 6; t++)
    {
        if (t % 2 == 0)
        {
            s1 += v1[t];
        }
        else
        {
            s2 += v1[t];
        }
    }
    assert(s1 == 110);
    assert(s2 == 88);

    int s3 = 0, s4 = 0;
    vector<int> v2(4);
    v2 = {21, 56, 22, 23};
    sort(v2.rbegin(), v2.rend());
    for (int t = 0; t < 4; t++)
    {
        if (t % 2 == 0)
        {
            s3 += v2[t];
        }
        else
        {
            s4 += v2[t];
        }
    }

    assert(s3 == 78);
    assert(s4 == 44);

    int s5 = 0, s6 = 0;
    vector<int> v3(5);
    v3 = {21, 54, 21, 23, 2};
    sort(v3.rbegin(), v3.rend());
    for (int t = 0; t < 5; t++)
    {
        if (t % 2 == 0)
        {
            s5 += v3[t];
        }
        else
        {
            s6 += v3[t];
        }
    }

    assert(s3 == 78);
    assert(s4 == 44);

    cout << "all tests passed\n";
}
