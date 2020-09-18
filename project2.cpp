#include <string>
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace  std;
int main ()
{

// declared variables

	int meat    	= 0;
	int vegetables  = 0;
	int pasta   	= 0;
	int potatoes	= 0;
	int chocolate   = 0;
	int fruit	   = 0;
	double tax	  = 0.00;
	double budget   = 0.00;
	double bill	 = 0.00;
	double subtotal = 0.00;
	std::string appetizer  ;
	std::string mainCourse ;
	std::string dessert    ;
	
// cout questions & cin variables

	cout << "Welcome to John's Restaurant" << endl;
	cout << endl;
	cout << "Here the chef will make a suprise meal for you based on the answers to the questions below. " << endl;
	cout << "Enjoy your meal!" << endl;
	cout << endl;
	
	cout << "How much do you like meat on scale of 1..100? ";
	cin >> meat;
	cout << "How much do you like vegetables on a scale of 1..100? ";
	cin >> vegetables;
	cout << "How much do you like pasta on a scale of 1..100? ";
	cin >> pasta;
	cout << "How much do you like potatoes on a scale of 1..100? ";
	cin >> potatoes;
	cout << "How much do you like chocolate on a scale of 1..100? ";
	cin >> chocolate;
	cout << "How much do you like fruit on a scale of 1..100? ";
	cin >> fruit;
	cout << "What is your budget (before tax) for this meal? ";
	cin >> budget;
	
// Appetizer

	if ( (budget >= 15.00) || ((budget < 10.00) && (budget >= 5.00)) )
	
	
		if ((meat < 10) && (vegetables < 10))
			appetizer = "Garlic Bread";
		
		else if (meat >= vegetables)
			appetizer = "Chicken Wings";
		
		else if (vegetables > meat)
			appetizer = "Garden Salad";		
	
	
// Main Course

	if (budget >= 10.00)
	
		
		if ((meat < 10) && (vegetables < 10) && (pasta < 10) && (potatoes < 10))
			mainCourse = "Cheese Omelet";
		
		else if ((meat >= vegetables) && (potatoes >= pasta))
			mainCourse = "Meat & Potatoes";
		
		else if ((meat >= vegetables) && (pasta > potatoes))
			mainCourse = "Meat & Pasta";
			
		else if (vegetables > meat)
			mainCourse = "Pasta primavera";
		
// Dessert

	if (budget >= 20.00)

		if ((fruit >= chocolate) && (fruit > 10) && (chocolate > 10))
			dessert = "Apple pie";

		else if (chocolate > 10)
			dessert = "Chocolate cake";
			
		else 
			dessert = "Vanilla ice cream";

// Order
		  cout << endl;
		  cout << "Your surprise meal consists of..." << endl;
		  cout << "	" << "Appetizer:" << "	" << appetizer   << endl;
  		cout << "	" << "Main course:" << "	" << mainCourse  << endl;
	  	cout << "	" << "Dessert:" << "	" << dessert 	<< endl;

// Subtotal
		
		if (budget >= 15.00)
			subtotal = 5.00;
			
		if (budget >= 10.00)
			subtotal = subtotal + 10.00;
		
		if (budget >= 20.00)
			subtotal = subtotal + 5.00;
		
//Tax		
		tax = subtotal * .07;
			
//Bill
		bill = subtotal + tax;
		
		cout << endl;
		cout << "Your bill for this meal is..." << endl;
		cout << "	" << "Meal:" <<  "	" << "$" << fixed << setprecision (2) << subtotal << endl;
		cout << "	" << "Tax:" <<  "	" << "$" << fixed << setprecision (2) << tax << endl;
		cout << "	" << "Total:" << "	" << "$" << fixed << setprecision (2) << bill << endl;
		
return 0;
}