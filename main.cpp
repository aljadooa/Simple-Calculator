// Simple calculator to perform basic math operations made by TheXpertCoder aka Hassan.

#include <iostream>
#include "selection-menu.h"

using namespace std;

// global variable
float num1, num2;

void calc()
{
    // check which operation is selected and execute code accordingly
    if (choice == '+')
    {
        cout << "Please add 2 numbers: ";
        cin >> num1 >> num2;
    }
    else if (choice == '-')
    {
         cout << "Please subtract 2 numbers: ";
         cin >> num1 >> num2;
    }
    else if (choice == '*')
    {
         cout << "Please multiply 2 numbers: ";
         cin >> num1 >> num2;
    }

    else if (choice == '/')
    {
         cout << "Please divide 2 numbers: ";
         cin >> num1 >> num2;
    }

    cout << "\n\n";


    // Display answer depending on which operator was selected by the user
    switch(choice)
    {
        case '+':
            cout << "Here's your answer: " << num1+num2;  // adding result
            cout << "\n";
            break;

        case '-':
            cout << "Here's your answer: " << num1-num2; // subtracting result
            cout << "\n";
            break;

        case '/':
            cout << "Here's your answer: " << num1/num2; // division result
            cout << "\n";
            break;

        case '*':
            cout << "Here's your answer: " << num1*num2; // multiplication result
            cout << "\n";
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }
}


int main()
{
    // Include functions into main function
    selectionMenu();
    calc();
    return 0;
}
