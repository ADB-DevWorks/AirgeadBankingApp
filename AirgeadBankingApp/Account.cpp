#include "Account.h"

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