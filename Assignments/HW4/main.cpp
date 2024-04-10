/*
conditionals
Author: Kyle Schuknecht
Homework 4
*/
#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

double sum(const double &, const double &, const double &, const double &, const double &);
double product(const double &, const double &, const double &, const double &, const double &);
double larger(const double &, const double &, const double &, const double &, const double &);
double smaller(const double &, const double &, const double &, const double &, const double &);
double floor1(const double &, const double &, const double &, const double &, const double &);
double ave(const double &, const double &, const double &, const double &, const double &);
void test();
void menu();
void clearscreen();

int main(int argc, char *argv[])
{
    if (argc == 2 && string(argv[1]) == "test")
    {
        test();
    }
    else
    {
        {
            int option;
            for (int i = 0; i < 1;)
            {
                double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
                clearscreen();
                menu();
                cin >> option;
                switch (option)
                {
                case 1:
                {
                    cout << "enter 5 numbers seperated by a space.\n ";
                    cin >> num1 >> num2 >> num3 >> num4 >> num5;
                    cout << "The sum of these numbers is: " << sum(num1, num2, num3, num4, num5) << '\n';
                    getchar();
                    cin.get();
                    break;
                }
                case 2:
                {
                    cout << "enter 5 numbers seperated by a space.\n ";
                    cin >> num1 >> num2 >> num3 >> num4 >> num5;
                    cout << "The product of these numbers is: " << product(num1, num2, num3, num4, num5) << '\n';
                    getchar();
                    cin.get();
                    break;
                }
                case 3:
                {
                    cout << "enter 5 numbers seperated by a space.\n ";
                    cin >> num1 >> num2 >> num3 >> num4 >> num5;
                    cout << "The average of these numbers is: " << ave(num1, num2, num3, num4, num5) << '\n';
                    getchar();
                    cin.get();
                    break;
                }
                case 4:
                {
                    cout << "enter 5 numbers seperated by a space.\n ";
                    cin >> num1 >> num2 >> num3 >> num4 >> num5;
                    cout << "The largest of these numbers is: " << larger(num1, num2, num3, num4, num5) << '\n';
                    getchar();
                    cin.get();
                    break;
                }
                case 5:
                {
                    cout << "enter 5 numbers seperated by a space.\n ";
                    cin >> num1 >> num2 >> num3 >> num4 >> num5;
                    cout << "The smallest of these numbers is: "<< smaller(num1, num2, num3, num4, num5) << '\n';
                    getchar();
                    cin.get();
                    break;
                }
                case 6:
                {
                    cout << "enter 5 numbers seperated by a space.\n ";
                    cin >> num1 >> num2 >> num3 >> num4 >> num5;
                    if (floor1(num1, num2, num3, num4, num5) == 1)
                    {
                        cout << "The floor of these numbers is even. "<< '\n';
                    }
                    if (floor1(num1, num2, num3, num4, num5) == 0)
                    {
                        cout << "The floor of these numbers is odd. " << '\n';
                    }
                    if (floor1(num1, num2, num3, num4, num5) == 2)
                    {
                        cout << "The floor of these numbers is 0.";
                    }
                    getchar();
                    cin.get();
                    break;
                }
                case 7:
                {
                    cout << "quit\n";
                    i++;
                    getchar();
                    cin.get();
                    break;
                }
                }
            }
            clearscreen();
            cout << "Enter to continue...";
            cin.get();
        }
        return 0;
    }
}
void test()
{
    assert(sum(1, 2, 3, 4, 5) == 15);
    assert(sum(1, 6, 3, 10, 5) == 25);
    assert(product(1, 2, 3, 4, 5) == 120);
    assert(product(2, 3, 3, 4, 5) == 360);
    assert(larger(1, 2, 3, 4, 5) == 5);
    assert(larger(112, 21, 33, 4, 89) == 112);
    assert(smaller(1, 2, 3, 4, 5) == 1);
    assert(smaller(23, 21, 22, 10, 5.5) == 5.5);
    assert(floor1(3, 2.5, 3, 4, 5) == 0);
    assert(floor1(0, .5, .3, .1, .01) == 2);
    cout << "All tests passed" << endl;
    assert(ave(1, 2, 3, 4, 5) == 3);
    assert(ave(2, 2, 2, 2, 2) == 2);
}

void menu()
{
    cout << "[1]sum 5 nums\n";
    cout << "[2]product 5 nums\n";
    cout << "[3]average 5 nums\n";
    cout << "[4]largest of 5 nums\n";
    cout << "[5]smallest of 5 nums\n";
    cout << "[6]even, odd, or 0 floor \n";
    cout << "[7]exit program\n";
}

void clearscreen()
{
    system("clear");
}

double sum(const double &num1, const double &num2, const double &num3, const double &num4, const double &num5)
{
    return (num1 + num2 + num3 + num4 + num5);
}

double product(const double &num1, const double &num2, const double &num3, const double &num4, const double &num5)
{
    return (num1 * num2 * num3 * num4 * num5);
}

double larger(const double &num1, const double &num2, const double &num3, const double &num4, const double &num5)
{
    return max(num1, max(max(num2, num3), max(num4, num5)));
}

double smaller(const double &num1, const double &num2, const double &num3, const double &num4, const double &num5)
{
    return min(num1, min(min(num2, num3), min(num4, num5)));
}

double floor1(const double &num1, const double &num2, const double &num3, const double &num4, const double &num5)
{
    double f1 = 0;
    f1 = floor(sum(num1, num2, num3, num4, num5));
    if (f1 == 0)
    {
        return 2;
    }
    if (remainder(f1, 2) == 0)
    {
        return 1;
    }
    if (remainder(f1, 2) != 0)
    {
        return 0;
    }
    return 3;
}

double ave(const double &num1, const double &num2, const double &num3, const double &num4, const double &num5)
{
    double ave1;
    ave1 = (sum(num1, num2, num3, num4, num5)/5);
    return (ave1);
}
