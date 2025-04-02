/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/27/2025

Requirements: Create a program that calculates the gallons needed for a fence that is 6 feet tall and 100 feet long that requires 2 coats with a particular paint brand
*/

#include <iostream>
#include <cmath>

int main() {

	const double fenceH = 6.0;
	const double fenceL = 100.0;
	const double coveragePerGallon = 340.0;
	const int coats = 2;

	double totalArea = fenceH * fenceL * coats;
	double gallonsNeeded = std::ceil(totalArea / coveragePerGallon);

	std::cout << "Total fence area caluclated to be painted (including the 2 coats mentioned): " << totalArea << " square feet\n";
	std::cout << "Gallons of paint needed: " << gallonsNeeded << " gallons\n";

	return 0;
}
