#ifndef SELECTION-MENU_H_INCLUDED
#define SELECTION-MENU_H_INCLUDED
#include <iostream>
#include <stdlib.h>

using namespace std;

// global variable
char choice;

 void selectionMenu()
{
    cout << "Main Menu" << "\n\n";

    cout << "Please Select From The Options Below (Please only select the operator, not the name.)" << "\n";
    cout << "   Add +" << "\n";
    cout << "   Subtract -" << "\n";
    cout << "   Multiply *" << "\n";
    cout << "   Divide /" << "\n\n";
    // select from menu
    cout << "Selection: ";
    // store the entered value
    cin >> choice;

    // check if the selection = any of the operators if its true it will clear the main menu
    // change CLS to clear if you're on Linux
    if (choice == '+')
    {
        system("cls");
    }
    else if (choice == '-')
    {
        system("cls");
    }
    else if (choice == '*')
    {
        system("cls");
    }

    else if (choice == '/')
    {
        system("cls");
    }
}

#endif // SELECTION-MENU_H_INCLUDED
