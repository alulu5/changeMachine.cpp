#include <iostream>
#include <string>
using namespace std;

int main()
{
	//goal of program - ask user to enter an integer (representing # of cents), then display the coins equivalent to that amount.
	
	//defining variables
	double userInteger {};
	
	//ask user for input
	cout << "Howdy there partner. I'm Ted, a magic money machine - you enter any number of cents, and I'll spit back coins and dollars." << endl <<
			"Ted. That stand for 'Truffles Every Day', 'cause I can make you so rich that you can even feed your dog truffle, yessirree." << endl <<
			"Hmm, can those little suckers even eat truffle? Don't ask me, I ain't no dog doctor." << endl <<
			"\nAnyways, I'm like one of those newfangled Arabic wish-grantin' lamps I keep hearing about, 'cept all I can give you is money. Trust me, that's all you need to live a good life." << endl;
			askForMoreMoney:
	cout << "Go ahead and enter how much money you want, in cents, and I'll see what I can do. Press that doohickey enter key when you're done." << endl;
	cin >> userInteger;
	
//	//define coin variables - how many cents is each coin/dollar worth?
//	const int dollar {100};
//	const int quarter {25};
//	const int dime {10};
//	const int nickel {5};
//	const int penny {1};
	
	
	/* let's say the user enters 92 cents.
	 * what I want to display is this:
	 * 		dollars:
	 * 		quarters:
	 * 		dimes:
	 * 		nickels:
	 * 		pennies:
	 * now how can I approach creating this program?
	 * 
	 * very very specific and limited code
	 * 		if (userInteger >= 100 || userInteger <= 199) 
	 * 		{
	 * 		cout << "dollars: 1" << endl;
	 * 		}
	 * 
	 */
	 
	//let's store the value of userInteger into another variable
	double userInteger_original {};
	userInteger_original = userInteger;
	 
	//example - 92 cents
	 
	int dollars {};
	dollars = userInteger / 100;
//	cout << "Dollars: " << dollars << endl; //expect 0
	userInteger -= dollars * 100;
	//userInteger should be 92
	
	int quarters {};
	quarters = userInteger / 25;
//	cout << "Quarters: " << quarters << endl; //expect 3
	userInteger -= quarters * 25;
	//userInteger should be 17
	
	int dimes {};
	dimes = userInteger / 10;
//	cout << "Dimes: " << dimes << endl; //expect 1
	userInteger -= dimes * 10;
	//userInteger should be 7
	
	int nickels {};
	nickels = userInteger / 5;
//	cout << "Nickels: " << nickels << endl; //expect 1
	userInteger -= nickels * 5;
	//userInteger should be 2
	
	int pennies {};
	pennies = userInteger;
//	cout << "Pennies: " << pennies << endl; //expect 2
	userInteger -= pennies * 1;
	//userInteger should be 0
	
	
	//output statement
	cout << "Gee whiz, partner. You want " << dollars << " dollars, " << quarters << " quarters, " << dimes << 
			" dimes, " << nickels << " nickels, and " << pennies << " pennies? Well, if it's for my ole partner, I'll try my best." << endl <<
			"\nAlright, your " << userInteger_original << " cents is ready out back. Give me a holler if you want some more!" << endl <<
			"Do you want to give a holler? Type 'yes' or 'no', then press enter." << endl;
	
	//give a holler?
	string giveaHoller;
	string yes = "yes";
	string no = "no";
	cin >> giveaHoller;
	if (giveaHoller == yes)
	{
		cout << "Back already, partner? " << endl;
		goto askForMoreMoney;
	}
	else if (giveaHoller == no)
	{
		cout << "See ya later, partner." << endl;
	}
	
	
	
	return 0;
}