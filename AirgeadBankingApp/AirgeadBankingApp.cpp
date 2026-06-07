

#include "Account.h"
#include "Menu.h"
#include "MenuRenderer.h"
#include "ReportRenderer.h"

#include <iostream>


int main()
{
    
    // Initilize classes
    Account account;
    MenuRenderer menuRenderer;
    Menu menu;
    ReportGenerator reportGenerator;
    ReportRenderer reportRenderer;

    int confirmation; // For validation input

    // Main program loop runs until hitting break
    while (true) {
        menuRenderer.OptionsMenu(account); // Displays menu
        menu.UpdateAccount(account); // Input options for menu
        if (account.IsDataCollected()) { // Check to ensure all fields for the account are entered
            // loop for input validation
            while (true) {
                menuRenderer.OptionsMenu(account); // Shows menu with all the users entries
                std::cout << "\n\nAre these amounts correct?\n1) for yes | 2) for no\n";
                std::cin >> confirmation;
                if (confirmation != 1 && confirmation != 2) { // Validates correct input
                    std::cout << "Invalid Option\n";
                    continue;
                }
                else if (confirmation == 1) { // Displays reports then exits loop
                    reportRenderer.RenderWithoutDeposit(account, reportGenerator);
                    reportRenderer.RenderWithDeposit(account, reportGenerator);
                    break;
                }
                else { // displays menu and restarts loop
                    menuRenderer.OptionsMenu(account);
                    menu.UpdateAccount(account);
                    continue;
                }
            }
            // Allows user to exit or try new account options
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


