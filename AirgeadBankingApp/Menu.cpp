#include "Menu.h"
#include <iostream>

void Menu::SetMenuOption(int t_menuOption) {
	m_menuOption = t_menuOption;
}

int Menu::GetMenuOption() const { return m_menuOption; }

void Menu::UpdateAccount(Account& account) {
	int menuOption;
	double investmentAmount;
	double deposit;
	double intrest;
	int years;

	std::cin >> menuOption;
	
	if (menuOption < 1 || menuOption > 4) {
		std::cout << "Invalid option" << std::endl;
		return;
	}
	else {
	    if (menuOption == 1) {
		    std::cout << "Enter your initial investment ammout: ";
		    std::cin >> investmentAmount;
		    account.SetInitialInvestment(investmentAmount);
	    }
		if (menuOption == 2) {
			std::cout << "Enter your monthly deposit amount: ";
			std::cin >> deposit;
			account.SetMonthlyDeposit(deposit);
		}
		if (menuOption == 3) {
			std::cout << "Enter the annual interst percentage: ";
			std::cin >> intrest;
			account.SetAnnualInterest(intrest);
		}
		if (menuOption == 4) {
			std::cout << "Enter how many years you are investing: ";
			std::cin >> years;
			account.SetNumberYears(years);
		}
	}
}