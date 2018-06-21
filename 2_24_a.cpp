//(Odd or Even) Write a program that reads an integer and determines and prints whether it’s odd or even. [Hint: Use the modulus operator. An even number is a multiple of two. Any mul-tiple of two leaves a remainder of zero when divided by 2.]
#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	cout<<"enter two interger: " << endl;
	cin>>number1>>number2;
	if( number1 % 2 ==0 ) 
		cout<< number1<<" is even."<< endl;
	else
		cout<<number1<<" is odd."<< endl;
	if( number2 % 2 == 0 )
		cout<< number2 << " is even."<< endl;
	else
		cout<< number2  <<  " is odd."<< endl;

}
