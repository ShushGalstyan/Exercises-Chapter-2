//(Arithmetic) Write a program that asks the user to enter two numbers, obtains the twonumbers from the user and prints the sum, product, difference, and quotient of the two numbers.
#include <iostream>
using namespace std;
int main()
{
	int number1;
	int number2;
	int sum, sub, div, mult;
	cout << "Enter two integer: " << endl;
	cin >> number1 >> number2;
	sum = number1 + number2;
	sub = number1 - number2;
	div = number1 / number2;
	mult = number1 * number2;
	cout << "Sum is: " << sum << endl;
        cout << "Div is: " << div << endl;
        cout << "Mult is: " << mult << endl;
        cout << "Sub is: " << sub << endl;

}

