/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/26/2025

Requirements: Create a program that calculates the number of miles per gallon a car can get with 15 gallons of gasoline then display the results.
*/

#include <iostream>

int main() {

	double gallonsOfGas = 15.0;
	double MilesDriven = 375.0;

	double mpg = MilesDriven / gallonsOfGas;

	std::cout << "The car gets " << mpg << " miles per gallon." << std::endl;

	return 0;
}