/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/27/2025

Requirements: Create a program that stores 5 different values in different variables, calculate the sum of the 5 values, store the result in a separate variable then divide by 5 to get the average then display the Average on screen.
*/

#include <iostream>
#include <iomanip>

int main() {
	int num1 = 28, num2 = 32, num3 = 37, num4 = 24, num5 = 33;

	int sum = num1 + num2 + num3 + num4 + num5;

	double average = sum / 5.0;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The average of the five numbers given is: " << average << std::endl;

	return 0;
}
