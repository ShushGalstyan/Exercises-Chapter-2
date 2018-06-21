//(Arithmetic, Smallest and Largest) Write a program that inputs three integers from the key-board and prints the sum, average, product, smallest and largest of these numbers. The screen dialog should appear as follows:
#include <iostream>
using namespace std;

int main()
{
	int number1, number2, number3;
	int sum, average, product, smallest, largest;
	cout<< "Input three different integer: "<< endl;
	cin>> number1 >> number2 >>number3;
	sum= number1 + number2 + number3;
	average = (number1+ number2 + number3)/3;
	product = number1 * number2 * number3;
	if( number1 < number2 and number1 < number3 )
		smallest = number1;
	if( number2< number1 and number2< number3 )
		smallest = number2;
	if( number3 < number1 and number3< number2 )
		smallest = number3;
        if( number1 < number2 and number3 < number2 )
                largest = number2;
        if( number2< number3 and number1 < number3 )
                largest = number3;
        if( number3 < number1 and number2 < number1 )
                largest = number3;
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << average << endl;
	cout << "Product is: " << product << endl;
	cout << "Largest is: " << largest << endl;
	cout << "Smallest is: "<< smallest << endl;
}
