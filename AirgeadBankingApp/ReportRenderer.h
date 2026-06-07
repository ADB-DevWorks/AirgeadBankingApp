#ifndef REPORTRENDERER_H
#define REPORTRENDERER_H

#include "Account.h"
#include "ReportGenerator.h"

class ReportRenderer
{

public:
	void RenderWithoutDeposit(Account account, ReportGenerator report);

	void RenderWithDeposit(Account account, ReportGenerator report);
	
};

#endif // !REPORTRENDERER_H
