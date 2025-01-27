//OCTAL FILE

//Included Libraries
#include <iostream>
#include <string>
#include <conio.h>

//Included Files
#include "../header.hpp"

//Namespace
using namespace std;

//Octal Menu
void octal() {
    //Variables    
    char option;


    //Menu
    cout << "\n\n\nOCTAL CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Decimal to Octal";
    cout << "\n2. Convert Octal to Decimal";
    cout << "\n3. Menu";

    //Response Processing

    cout << "\n\nPRESS OPTION NUMBER ON KEYBOARD";

    option = getch();

    while (option != '1' && option != '2' && option != '3') {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nPRESS OPTION NUMBER ON KEYBOARD";

        option = getch();

    }

    if (option == '1') {
        decimal_oct();
    }
    else if (option == '2') {
        oct_decimal();
    }
    else if (option == '3') {
        menu();
    }
}

//Octal Functions
void decimal_oct() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "DECIMAL --> OCTAL";
    cout << "\nProgram will close if characters other than numbers are entered.";
    cout << "\n\nPlease enter the number you would like to convert to Octal: ";

    getline(cin, input);

    result = convert(5, input);


    cout << input << " in Octal is: " << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    octal();
}

void oct_decimal() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "OCTAL --> DECIMAL";
    cout << "\nProgram will close if characters other than numbers are entered.";
    cout << "\n\nPlease enter the number you would like to convert to Decimal: ";

    getline(cin, input);

    result = convert(6, input);


    cout << input << " in decimal is: " << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    octal();
}

//Property of MrScriptDev, 2025