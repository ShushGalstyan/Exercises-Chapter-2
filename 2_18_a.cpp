//(Arithmetic) Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	cout<< "Enter two integer: " << endl;
	cin >> number1 >> number2;
	if( number1> number2 )
		cout<< number1<< " is larger."<< endl;
	if( number2 > number1 )
		cout << number2 << " is larger." << endl;
	else if( number1 = number2 )
		 cout << "These numbers are equal." << endl;
		

}
