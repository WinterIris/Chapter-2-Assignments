/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/27/2025

Requirements: (Part 2) Create a program that allows the users input for the size of the fence.
*/

#include <iostream>
#include <cmath>

int main() {

	double fenceH, fenceL;
	const double coveragePerGallon = 340.0;
	const int coats = 2;

	std::cout << "What is the height of the fence that needs to be painted?";
	std::cin >> fenceH;
	std::cout << "What is the length of the fence that needs to be painted?";
	std::cin >> fenceL;

	double totalArea = fenceH * fenceL * coats;
	double gallonsNeeded = std::ceil(totalArea / coveragePerGallon);

	std::cout << "Total area needed to be painted (2 Coats mentioned): " << totalArea << " square feet\n";
	std::cout << "Gallons of paint needed: " << gallonsNeeded << " gallons\n";

	return 0;
}
