

#include "Account.h"
#include "Menu.h"
#include "MenuRenderer.h"
#include "ReportRenderer.h"

#include <iostream>
#include <string>



int main()
{
    

    Account account;
    MenuRenderer menuRenderer;
    Menu menu;
    ReportGenerator reportGenerator;
    ReportRenderer reportRenderer;

    int confirmation;

    while (true) {
        menuRenderer.OptionsMenu(account);
        menu.UpdateAccount(account);
        if (account.IsDataCollected()) {
            while (true) {
                menuRenderer.OptionsMenu(account);
                std::cout << "\n\nAre these amounts correct?\n1) for yes | 2) for no\n";
                std::cin >> confirmation;
                if (confirmation != 1 && confirmation != 2) {
                    std::cout << "Invalid Option\n";
                    continue;
                }
                else if (confirmation == 1) {
                    reportRenderer.RenderWithoutDeposit(account, reportGenerator);
                    reportRenderer.RenderWithDeposit(account, reportGenerator);
                    break;
                }
                else {
                    menuRenderer.OptionsMenu(account);
                    menu.UpdateAccount(account);
                    continue;
                }
            }
            std::cout << "Would you like to run the program again?" << std::endl;
            std::cout << "1) to continue |  2) to exit program\n";
            std::cin >> confirmation;
            if (confirmation == 1) {
                continue;
            }
            else {
                break;
            }
        
        }
        
    }
    
    return 0;
}


