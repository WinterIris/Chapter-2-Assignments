/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/27/2025

Requirements: Create a program that displays ocean levels at 5 years, 7 years then 10 years
*/

#include <iostream>
#include <iomanip>

int main() {

	const double riseRate = 1.5;

	double riseAfter5Years = 5 * riseRate;
	double riseAfter7Years = 7 * riseRate;
	double riseAfter10Years = 10 * riseRate;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The estimated ocean level rise: \n";
	std::cout << "After 5 years, it will be: " << riseAfter5Years << " mm\n";
	std::cout << "After 7 years, it will be: " << riseAfter7Years << " mm\n";
	std::cout << "After 10 years, it will be: " << riseAfter10Years << " mm\n";

	return 0;
}
