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
 
int main() 
{
	const double pi = 3.14159;
	
	double radius=0, area=0, circumference=0;

	string name = "Anonymous"; 
	cout << "Hi there, what's your full name? ";
	// FIXME3: using getline function, read user's fullname and store it into name variable

	cout << "Nice meeting you, " << name << "!" << endl;

	
	cout << "\nProgram finds area and circumference of a circle with the given radius.\n";
	cout << string(75, '=') << endl << endl;


	cout << name << ", please enter radius of a circle: ";
	cin >> radius; //read the entered value and store it into radius variable

	area = pi * pow(radius, 2); // same as: area = pi * radius * radius;
	//FIXME4: calculate circumference and store it into the circumference variable

	cout << "Your circle has radius: " << fixed << setprecision(6) << radius << endl;
	cout << "Area of the circle is:\t" << area << '\n';
	//FIXME5: print the calculated value of circumference

	// the following code may be required to make your console pause...
	cout << "Good bye...\nHit enter to exit the program!" << '\n';
	cin.ignore(1000, '\n'); 
	cin.get();
	return 0;
}
