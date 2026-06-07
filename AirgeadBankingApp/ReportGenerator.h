#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H

#include "Account.h"

class ReportGenerator
{
public:
	void GenerateNoDepositReport(const Account& account);
	void GenerateReportWithDeposit(const Account& account);

};


#endif // !REPORTGENERATOR_H
