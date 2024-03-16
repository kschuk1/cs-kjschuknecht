/*
created by Kyle Schuknecht
2/15/2024
triangle hw
*/


#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
    double side1, side2, side3, var, sum;

    cout << "What is your name? "<< '\n';
    string name;
    getline (cin, name);
    cout << "Hello " << name << " lets solve a triangle. \n";
    
    cout << "Enter the length of side one \n " ;
    cin >> side1;
    
    cout << " Enter the length of side 2 \n";
    cin >> side2;

    cout << "Enter the length of side 3 \n";
    cin >> side3;

    var = side1 + side2 + side3;

    sum = (var/2);

    cout << "The area of the triangle is " << fixed << setprecision(6) << sqrt(sum * (sum-side1)* (sum-side2)* (sum-side3)) << '\n';

    cout << "The perimeter is " << var << '\n';

    cout << " Press enter to exit.";
     cin get();
     getchar();
     return 0;
     


}