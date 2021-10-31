//⦁	Write a code in C++ that takes values of a and b from the user and displays result of polynomial 𝑎 2 + 2𝑎𝑏 + 𝑏 2. 

#include <iostream>
using namespace std;
int main() {

	float a, b;

	cout << "Enter Value of a " << '\n';

	cin >> a;

	cout << "Enter value of b " << '\n';

	cin >> b;

	float c = a * a + 2 * a * b + b * b;

	cout << "Result " << c << '\n';
	
	return 0;
}
