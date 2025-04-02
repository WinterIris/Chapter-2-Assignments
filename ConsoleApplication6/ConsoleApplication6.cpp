/* File Name: Chapter 2 Assignment
Programmer/Name: Christopher Wilson
Date: 3/29/2025

Requirements: [RESUBMISSION] Create a program that displays the approximate number of customers in the survery who have purchased one or more energy drinks per week and those who prefer citrus-flavored energy drinks.
*/

#include <iostream>
using namespace std;

int main() {
	const int totalCustomers = 16500;
	const double energyDrinkPercent = 0.15;
	const double citrusDrinkPercent = 0.58;

	int energyDrinkCustomers = totalCustomers * energyDrinkPercent;

	int citrusDrinkCustomers = energyDrinkCustomers * citrusDrinkPercent;


	cout << "A company recently surveyed 16,500 different about their product. The results showed that approximately 15% of the 16,500 customers purchase at least one or more energy drinks per week. Of those said customers, approximately 58% of those people prefer citrus-flavored drinks.\n";
	cout << "Being specific, 15% of the 16,500 would be " << energyDrinkCustomers << " that buy at least one drink per week." << endl;
	cout << "While the 58% of those people, or " << citrusDrinkCustomers << " people, would prefer the citrus-flavored drink." << endl;

	return 0;
}
