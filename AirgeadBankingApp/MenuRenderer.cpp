#include "MenuRenderer.h"
#include <string>
#include <iostream>


void MenuRenderer::OptionsMenu(const Account& account) {

	double investment = account.GetInitialInvestment();
	double deposit = account.GetMonthlyDeposit();
	double interest = account.GetAnnualInterest();
	int years = account.GetNumberYears();

	std::cout << std::string(39, '*');
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::string(11, '*') + " Account Options " + std::string(11, '*') << std::endl;
	std::cout << std::endl;
	std::cout << "Select an option to set up your account" << std::endl;
	std::cout << std::endl;
	std::cout << "1) Initial Investment: ";
	if (investment < 0) {
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "$" << investment << std::endl;
	}
	std::cout << "2) Monthly Deposit: ";
	if (deposit < 0) {
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "$" << deposit << std::endl;
	}
	std::cout << "3) Annual Interest Rate: ";
	if (interest < 0) {
		std::cout << " " << std::endl;
	}
	else {
		std::cout << interest << "%" << std::endl;
	}
	std::cout << "4) Number of years to invest:";
	if (years < 0) {
		std::cout << " " << std::endl;
	}
	else {
		std::cout << " " << years << std::endl;
	}
		std::cout << std::endl;

}

