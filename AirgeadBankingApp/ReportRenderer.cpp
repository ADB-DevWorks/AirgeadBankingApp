#include "ReportRenderer.h"
#include <string>
#include <iostream>
#include <iomanip>

void ReportRenderer::RenderWithoutDeposit(Account account, ReportGenerator report) {

	std::cout << std::string(40, '*') << std::endl;
	std::cout << "Year  " << " Year End Balance" << "  Year End Earned Interest  \n";
	std::cout << std::string(40, '_') << std::endl;
	report.GenerateNoDepositReport(account);
	
}

void ReportRenderer::RenderWithDeposit(Account account, ReportGenerator report) {
	std::cout << std::string(50, '*') << std::endl;
	std::cout << "   Year  " << " Year End Balance" << "  Year End Earned Interest  \n";
	std::cout << std::string(50, '_') << std::endl;
	report.GenerateReportWithDeposit(account);
}