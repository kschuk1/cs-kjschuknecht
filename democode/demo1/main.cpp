#include <iostream>

using namespace std;

int main (){
 int grade = 75;
 if( grade !=100 ) cout << "try harder\n";
 if ( grade == 100 && grade >= 90) {
     cout << "A\n";
 }
 else if (grade >= 80 && grade <90 ) {
     cout << "B\n";
 }
 else if (grade >= 70 && grade <80 ) {
     cout << "C\n";
 }
 else if (grade >= 60 && grade <70 ) {
     cout << "D\n";
 }
 else if (grade >= 50 && grade <60 ) {
     cout << "F\n";
 }
return 0;
}