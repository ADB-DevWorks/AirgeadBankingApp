#include "ReportRenderer.h"
#include <string>
#include <iostream>

//These two functions handle formating and displaying the static reports


void ReportRenderer::RenderWithoutDeposit(Account account, ReportGenerator report) {

	std::cout << std::string(50, '*') << std::endl;
	std::cout << "Year  " << " Year End Balance" << "  Year End Earned Interest  \n";
	std::cout << std::string(50, '_') << std::endl;
	report.GenerateNoDepositReport(account);
	
}

void ReportRenderer::RenderWithDeposit(Account account, ReportGenerator report) {
	std::cout << std::string(50, '*') << std::endl;
	std::cout << "   Year  " << " Year End Balance" << "  Year End Earned Interest  \n";
	std::cout << std::string(50, '_') << std::endl;
	report.GenerateReportWithDeposit(account);
}