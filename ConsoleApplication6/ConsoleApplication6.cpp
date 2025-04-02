/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/26/2025

Requirements: (Part 2) Create a program hat calculates the sales tax of a custom amount purchase as well as a custom state and county tax
*/

#include <iostream>
#include <iomanip>

int main() {

	double purchaseAmount, stateTaxR, countyTaxR;

	std::cout << "Enter the purchase amount you've made: $";
	std::cin >> purchaseAmount;
	std::cout << "Enter the state sales tax amount (as a percentage amount): ";
	std::cin >> stateTaxR;
	std::cout << "Enter the county sales tax amount (as a percentage amount): ";
	std::cin >> countyTaxR;

	stateTaxR /= 100.0;
	countyTaxR /= 100.0;

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
