#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
    public:
        Account(); // Constructor with no perameters
        // Modifiers
        void SetInitialInvestment(double t_initialInvestment);
        void SetMonthlyDeposit(double t_monthlyDeposit);
        void SetAnnualInterest(double t_annualInterest);
        void SetNumberYears(int t_numberYears);

        // Accessors
        double GetInitialInvestment() const;
        double GetMonthlyDeposit() const;
        double GetAnnualInterest() const;
        int GetNumberYears() const;

        bool IsDataCollected() const;

        // Members to hold account data
    private:
        double m_initialInvestment;
        double m_monthlyDeposit;
        double m_annualInterest;
        int m_numberYears;

};


#endif // !ACCOUNT_H