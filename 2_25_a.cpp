//(Multiples) Write a program that reads in two integers and determines and prints if the first is a multiple of the second. [Hint: Use the modulus operator.]
#include <iostream>
using namespace std;
int main()
{
	int number1, number2;
	cout<<"Enter to integer: "<<endl;
	cin>>number1>> number2;
	if(number2 % number1 == 0)
		cout<< "The first number is a multiple of the second number."<<endl;
	else
		cout<<"Try again."<<endl;
}
