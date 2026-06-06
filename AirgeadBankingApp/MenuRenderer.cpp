#include "MenuRenderer.h"
#include <string>
#include <iostream>


void MenuRenderer::OptionsMenu() {

	std::cout << std::string(39, '*');
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::string(11, '*') + " Account Options " + std::string(11, '*') << std::endl;
	std::cout << std::endl;
	std::cout << "Select an option to set up your account" << std::endl;
	std::cout << std::endl;
	std::cout << "1) Initial Investment: " << std::endl;
	std::cout << "2) Monthly Depost: " << std::endl;
	std::cout << "3) Annual Intrest Rate: " << std::endl;
	std::cout << "4) Number of years to invest:" << std::endl;

}

void MenuRenderer::AccountStatus(const Account& account) {
	std::cout << std::string(39, '*');
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::string(11, '*') + " Account Status " + std::string(11, '*') << std::endl;
	std::cout << std::endl;
	std::cout << "Select an option to set up your account" << std::endl;
	std::cout << std::endl;
	std::cout << "Initial Investment: " << account.GetInitialInvestment() << std::endl;
	std::cout << "Monthly Depost: " << account.GetMonthlyDeposit() << std::endl;
	std::cout << "Annual Intrest Rate: " << account.GetAnnualInterest() << std::endl;
	std::cout << "Number of years to invest:" << account.GetNumberYears() << std::endl;
}