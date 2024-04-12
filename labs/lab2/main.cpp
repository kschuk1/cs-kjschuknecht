/*
circle lab
Kyle Schuknecht
Date 2/12/2014
*/
#include <iostream>
#include <string> 
#include <cmath> 
#include <iomanip> 

using namespace std; 
 
int main() //main entry function that returns 0
{
	const double pi = 3.14159;
	// variables declared and initialized
	double radius=0, area=0, circumference=0;

	string name = "Anonymous"; // variable to store user's name
	cout << "Hi there, what's your full name? ";
	// FIXME3: use getline to read user's fullname and store it into name variable 
    getline(cin, name);
	cout << "Nice meeting you, " << name << "!" << endl;

	// display some information about this program to the user
	cout << "\nProgram finds area and circumference of a circle with the given radius.\n\n";

	// prompt user telling what to do
	cout << name << ", please enter radius of a circle: ";
	cin >> radius; //read the entered value and store it into radius variable

	area = pi * pow(radius, 2); // same as: area = pi * radius * radius;
	//FIXME4: find circumference #fixed
    circumference = 2 * pi * abs(radius);
	cout << "Your circle has radius: " << fixed << setprecision(6) << radius << endl;
	cout << "Area of the circle is:\t" << area << '\n';
	//FIXME5: Output the value of circumference 
    cout << "Circumference of your circle is: " << circumference <<'\n';
	// the following code may be required to make your console pause...
	cout << "Good bye...\nHit enter to exit the program!" << '\n';
	cin.ignore(1000, '\n'); //ignore 1000 chars or until \n whichever comes first
	// make the console wait for user input
	cin.get();
	return 0;
}