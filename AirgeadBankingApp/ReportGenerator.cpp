#include "ReportGenerator.h"
#include <iostream>
#include <iomanip>

void ReportGenerator::GenerateNoDepositReport(const Account& account) {

	char continueKey = ' ';

	double balance = account.GetInitialInvestment();
	double interestRate = account.GetAnnualInterest() / 100; // Changes percentage to decimal value

	for (int year = 1; year <= account.GetNumberYears(); year++) {
		
		double yearlyInterest = 0.0; // Initializes earned interest at 0

		for (int month = 0; month < 12; month++) {
			double monthlyInterest = balance * (interestRate / 12); // Gets the interest earned or each month
			balance += monthlyInterest; // Updates balance with earned interest
			yearlyInterest += monthlyInterest; // Updates yearly interst earned every month

		}

		std::cout << std::fixed << std::setprecision(2) << "     " << year << "       " << balance << "              " << yearlyInterest << " \n";

	}

	std::cout << "***** Press Any Key To Continue *****";
	std::cin >> continueKey;
}

void ReportGenerator::GenerateReportWithDeposit(const Account& account) {

	char continueKey = ' ';

	double balance = account.GetInitialInvestment();
	double monthlyDeposit = account.GetMonthlyDeposit();
	double interestRate = account.GetAnnualInterest() / 100; // Changes percentage to decimal value

	for (int year = 1; year <= account.GetNumberYears(); year++) {

		double yearlyInterest = 0.0; // Initializes earned interest at 0

		for (int month = 0; month < 12; month++) {
			double monthlyInterest = (balance + monthlyDeposit) * (interestRate / 12); // Gets the interest earned or each month
			balance += monthlyInterest + monthlyDeposit; // Updates balance with earned interest
			yearlyInterest += monthlyInterest; // Updates yearly interst earned every month

		}

		std::cout << std::fixed << std::setprecision(2) << "     " << year << "       " << balance << "              " << yearlyInterest << " \n";

	}

	std::cout << "***** Press Any Key To Continue *****";
	std::cin >> continueKey;
}
