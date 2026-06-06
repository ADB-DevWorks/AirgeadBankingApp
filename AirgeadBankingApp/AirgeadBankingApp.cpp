

#include "Account.h"
#include "Menu.h"
#include "MenuRenderer.h"

#include <iostream>



int main()
{
    

    Account account;
    MenuRenderer menuRenderer;
    Menu menu;

    while (true) {
        menuRenderer.OptionsMenu(account);
        menu.UpdateAccount(account);
        if (account.IsDataCollected()) {
            break;
        }
    }
    

}


