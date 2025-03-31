/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/26/2025

Requirements: Create a program that calculates the number of miles per gallon a car can get with 15 gallons of gasoline then display the results.
*/

#include <iostream>

int main() {

	double gallonsOfGas, MilesDriven, mpg;

	std::cout << "Enter the number of gallons of gas used: ";
	std::cin >> gallonsOfGas;

	std::cout << "Enter the number of miles driven: ";
	std::cin >> MilesDriven;

	if (gallonsOfGas <= 0) {
		std::cout << "Error: Gallons of Gas must be greater than 0." << std::endl;
	} else {
		mpg = MilesDriven / gallonsOfGas;

		std::cout << "The car gets " << mpg << " miles per gallon." << std::endl;
	}

	return 0;
}
