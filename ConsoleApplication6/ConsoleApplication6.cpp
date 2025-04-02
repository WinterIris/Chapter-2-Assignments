/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/26/2025

Requirements: (Part 1) Create a program hat calculates the sales tax of a $95 purchase, assuming state is 4% and county is 2%
*/

#include <iostream>
#include <iomanip>

int main() {

	const double purchaseAmount = 95.0;
	const double stateTaxR = 0.04;
	const double countyTaxR = 0.02;

	double stateTax = purchaseAmount * stateTaxR;
	double countyTax = purchaseAmount * countyTaxR;
	double totalTax = stateTax + countyTax;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Purchase Amount: $" << purchaseAmount << std::endl;
	std::cout << "State Sales Tax: $" << stateTax << std::endl;
	std::cout << "County Sales Tax: $" << countyTax << std::endl;
	std::cout << "Total Sales Tax: $" << totalTax << std::endl;

	return 0;
}
