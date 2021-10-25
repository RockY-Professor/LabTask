//Question No 1 Lab task
#include <iostream>
using namespace std;
int main() {
	cout << "Enter Radius "; // Enter Value of Radius.
	float radius, circumference, area; // Declaring Variables.
	cin >> radius; // Taking Input from the user.
	circumference = radius * 2 * 3.14; // Declaring Circumference Formula.
	area = 3.14 * (radius * radius); // Declareing Area Formula.
	cout << "Circumference of Circle= " << circumference << "\n"; // Output in Circumference.
	cout << "Area of Circle= " << area << "\n"; // Output in Area.
   return 0;
}
