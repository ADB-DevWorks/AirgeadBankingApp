#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
    public:
        void SetInitialInvestment(double t_initialInvestment);
        void SetMonthlyDeposit(double t_monthlyDeposit);
        void SetAnnualInterest(double t_annualInterest);
        void SetNumberYears(int t_numberYears);

        double GetInitialInvestment() const;
        double GetMonthlyDeposit() const;
        double GetAnnualInterest() const;
        int GetNumberYears() const;

    private:
        double m_initialInvestment;
        double m_monthlyDeposit;
        double m_annualInterest;
        double m_numberYears;

};


#endif // !ACCOUNT_H