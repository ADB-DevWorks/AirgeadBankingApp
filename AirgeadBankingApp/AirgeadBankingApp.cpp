

#include "Account.h"
#include "Menu.h"
#include "MenuRenderer.h"

#include <iostream>
#include <string>



int main()
{
    

    Account account;
    MenuRenderer menuRenderer;
    Menu menu;
    int confirmation;

    while (true) {
        menuRenderer.OptionsMenu(account);
        menu.UpdateAccount(account);
        if (account.IsDataCollected()) {
            std::cout << "\n\nAre these amounts correct?\n1 for yes\/2 for no";
            std::cin >> confirmation;
            if (confirmation == 1) {

            }
            else {
                continue;
            }
        }
        
    }
    

}


