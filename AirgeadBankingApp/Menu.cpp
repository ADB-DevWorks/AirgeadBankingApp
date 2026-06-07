#include "Menu.h"
#include <iostream>

// Method handles the logic and user input to set the account members value

void Menu::UpdateAccount(Account& account) {
	int menuOption;
	double investmentAmount;
	double deposit;
	double interest;
	int years;

	std::cin >> menuOption; // Selects which field to modify
	
	// Validation for menu options range
	if (menuOption < 1 || menuOption > 4) {
		std::cout << "Invalid option" << std::endl;
		return;
	}
	else { // Matches input to menu option. Uses account modifiers to set the account
	    if (menuOption == 1) {
		    std::cout << "Enter your initial investment amount: ";
		    std::cin >> investmentAmount;
		    account.SetInitialInvestment(investmentAmount);
	    }
		if (menuOption == 2) {
			std::cout << "Enter your monthly deposit amount: ";
			std::cin >> deposit;
			account.SetMonthlyDeposit(deposit);
		}
		if (menuOption == 3) {
			std::cout << "Enter the annual interest percentage: ";
			std::cin >> interest;
			account.SetAnnualInterest(interest);
		}
		if (menuOption == 4) {
			std::cout << "Enter how many years you are investing: ";
			std::cin >> years;
			account.SetNumberYears(years);
		}
	}
}