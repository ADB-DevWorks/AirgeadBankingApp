#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Account.h"

class Menu
{
public:
	void SetMenuOption(int t_menuOption);

	int GetMenuOption() const;

	void UpdateAccount(Account& account);

private:
	int m_menuOption;
};

#endif // !MENU_H
