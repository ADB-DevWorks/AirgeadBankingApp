#include "Account.h"

Account::Account() { // Constructor built with defaults set to -1. This is used for input validation and menu processing
	m_initialInvestment = -1;
	m_monthlyDeposit = -1;
	m_annualInterest = -1;
	m_numberYears = -1;
}

void Account::SetInitialInvestment(double t_initialInvestment) {
	m_initialInvestment = t_initialInvestment;
}

void Account::SetMonthlyDeposit(double t_monthlyDeposit) {
	m_monthlyDeposit = t_monthlyDeposit;
}

void Account::SetAnnualInterest(double t_annualInterest) {
	m_annualInterest = t_annualInterest;
}

void Account::SetNumberYears(int t_numberYears) {
	m_numberYears = t_numberYears;
}

double Account::GetInitialInvestment() const { return m_initialInvestment; }
double Account::GetMonthlyDeposit() const { return m_monthlyDeposit; }
double Account::GetAnnualInterest() const { return m_annualInterest; }
int Account::GetNumberYears() const { return m_numberYears; }

// Checks if all members values have been updated
bool Account::IsDataCollected() const {
	if (m_initialInvestment != -1 && m_monthlyDeposit != -1 && m_annualInterest != -1 && m_numberYears != -1) {
		return true;
	}
	return false;
}