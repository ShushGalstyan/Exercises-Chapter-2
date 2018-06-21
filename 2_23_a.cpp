//(Largest and Smallest Integers) Write a program that reads in five integers and determines and prints the largest and the smallest integers in the group. Use only the programming techniques you learned in this chapter.
#include <iostream>
using namespace std;
int main()
{
	int number1,number2,number3,number4,number5;
	int largest, smallest;
	cout << "Enter five integers: ";
	cin >> number1 >> number2 >> number3 >> number4 >> number5;

	largest = number1;
	smallest = number1;
	if ( number1 > largest )
		largest = number1;
	if ( number2 > largest )
		largest = number2;
	if ( number3 > largest )
		largest = number3;
	if ( number4 > largest )
		largest = number4;
	if ( number5 > largest )
		largest = number5;
	if ( number1 < smallest )
		smallest = number1;
	if ( number2 < smallest )
		smallest = number2;
	if ( number3 < smallest )
		smallest = number3;
	if ( number4 < smallest )
		smallest = number4;
	if ( number5 < smallest )
		smallest = number5;
	cout << "Largest is " << largest<< endl;
	cout<< "Smallest is " << smallest << endl;
	return 0;
}
