//(Diameter, Circumference and Area of a Circle) Write a program that reads in the radius ofa circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value 3.14159 for π . Do all calculations in output statements. [Note: In this chapter, we’ve discussed only integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that can have decimal points.]
#include <iostream>
using namespace std;

int main()
{
	int radius;
	int diameter, circumference, area;
	float Value_of_pi;
	cout << "Enter radius: " << endl;
	cin >> radius;
	Value_of_pi = 3.14159;
	diameter = 2* radius;
	circumference = Value_of_pi * diameter;
	area = circumference * radius * radius;
	cout << "The diameter is: " << diameter << endl;
	cout << "The circumference is: " << circumference << endl;
	cout << "The area of the circle is: "  << area<< endl;


}

