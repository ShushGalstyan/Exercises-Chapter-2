//(Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each. [Hint: Use the integer division and modulus operators.] For example, if the user types in 42339, the program should print:
#include <iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "Enter a five-digit number: ";
	cin >> number;
	cout << number / 10000 << " " << endl;
	number = number % 10000;
	cout << number / 1000 << " " << endl;
	number = number % 1000;
	cout << number / 100 << " "  << endl;
	number = number % 100;
	cout << number / 10 << " " << endl;
	number = number % 10;
	cout << number / 1 << "\n" << endl;
	return 0;
}
