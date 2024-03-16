#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

using namespace std;

double addnums(double&, double&);
double multiplynums(double&, double&);
double divdenums(double&, double&);
double reamaindernums(double&, double&);
double subtractnums(double&, double&);
double exponentnums(double&, double&);
double squarerootnum(double&);
float larger(double&, double&);
void test();

int main(){
    double num1 = 0, num2 = 0;
    cout << "Hello enter two numbers seperated by a space.\n";
    cin >> num1 >> num2;

    printf("The sum of the two numbers is: %f", addnums(num1, num2));
    cout << '\n';
    
    printf("The sum of the two numbers is: %f", multiplynums(num1, num2));
    cout << '\n';

    printf("The qoutient of the fist divided by the second is; %f", divdenums(num1, num2));
    cout << '\n';

     printf("The difference between the two numbers is: %f", subtractnums(num1, num2));
    cout << '\n';
    printf("The remainder of the first divided by the second is: %f", remaindernums(num1, num2));
    cout << '\n';
    printf("The first number to the power of the second is: %f", exponentnums(num1, num2));
    cout << '\n';
    printf("The square root of the first number is: %f", squarerootnum(num1));
    cout << '\n';
    if (larger(num1, num2) == 0)
    {
        cout << "The first number is larger.\n";
    }
    if (larger(num1, num2) == 1)
    {
        cout << "The numbers are equal.\n";
    }
    if (larger(num1, num2) == 2)
    {
        cout << "The second number is larger.\n";
    }
    test();
    cout << "All tests passed.\n";
    return 0;
}

double addnums(double &num1, double &num2)
{
    return (num1 + num2);
}

double multiplynums(double &num1, double &num2)
{
    return (num1 * num2);
}

double dividenums(double &num1, double &num2)
{
    return (num1 / num2);
}

double subtractnums(double &num1, double &num2)
{
    return (num1 - num2);
}

double remaindernums(double &num1, double &num2)
{
    double result;
    result = remainder(num1, num2);
    return result;
}

double exponentnums(double &num1, double &num2)
{
    return (pow(num1, num2));
}

double squarerootnum(double &num1)
{
    return (sqrt(num1));
}

float larger(double num1, double num2)
{
    if (num1 > num2)
    {
        return 0;
    }
    if (num1 == num2)
    {
        return 1;
    }
    if (num1 < num2)
    {
        return 2;
    }
    return 3;
}

void test()
{
    double testnum1 = 3, testnum2 = 2, testnum3 = 5, testnum4 = 6;
    float result = addnums(testnum1, testnum2);
    float expected = 5;
    assert(fabs(result - expected) <= 0.00001);
    float result1 = addnums(testnum3, testnum4);
    float expected1 = 11;
    assert(fabs(result1 - expected1) <= 0.00001);
    float result2 = multiplynums(testnum1, testnum2);
    float expected2 = 6;
    assert(fabs(result2 - expected2) <= 0.00001);
    float result3 = multiplynums(testnum3, testnum4);
    float expected3 = 30;
    assert(fabs(result3 - expected3) <= 0.00001);
    float result4 = dividenums(testnum1, testnum2);
    float expected4 = 1.5;
    assert(fabs(result4 - expected4) <= 0.00001);
    float result5 = dividenums(testnum3, testnum4);
    float expected5 = .833333;
    assert(fabs(result5 - expected5) <= 0.00001);
    float result6 = subtractnums(testnum1, testnum2);
    float expected6 = 1;
    assert(fabs(result6 - expected6) <= 0.00001);
    float result7 = subtractnums(testnum3, testnum4);
    float expected7 = -1;
    assert(fabs(result7 - expected7) <= 0.00001);
    float result8 = remaindernums(testnum1, testnum2);
    float expected8 = -1;
    assert(fabs(result8 - expected8) <= 0.00001);
    float result9 = remaindernums(testnum3, testnum4);
    float expected9 = -1;
    assert(fabs(result9 - expected9) <= 0.00001);
    float result10 = exponentnums(testnum1, testnum2);
    float expected10 = 9;
    assert(fabs(result10 - expected10) <= 0.00001);
    float result11 = exponentnums(testnum3, testnum4);
    float expected11 = 15625;
    assert(fabs(result11 - expected11) <= 0.00001);
    float result12 = squarerootnum(testnum1);
    float expected12 = 1.732051;
    assert(fabs(result12 - expected12) <= 0.00001);
    float result13 = squarerootnum(testnum3);
    float expected13 = 2.236068;
    assert(fabs(result13 - expected13) <= 0.00001);
    float result14 = larger(testnum3, testnum4);
    float expected14 = 2;
    assert(fabs(result14 - expected14) <= 0.00001);
    float result15 = larger(testnum1, testnum2);
    float expected15 = 0;
    assert(fabs(result15 - expected15) <= 0.00001);
    }

}