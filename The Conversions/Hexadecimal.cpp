//HEXADECIMAL FILE

//Included Libraries
#include <iostream>
#include <string>
#include <conio.h>

//Included Files
#include "../header.hpp"

//Namespace
using namespace std;

//Hexadecimal Menu
void hexadecimal() {
    //Variables    
    char option;


    //Menu
    cout << "\n\n\nHEXADECIMAL CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Decimal to Hexadecimal";
    cout << "\n2. Convert Hexadecimal to Decimal";
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
        decimal_hex();
    }
    else if (option == '2') {
        hex_decimal();
    }
    else if (option == '3') {
        menu();
    }
}

//Hexadecimal Functions
void decimal_hex() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "DECIMAL --> HEXADECIMAL";
    cout << "\nProgram will close if characters other than numbers are entered.";
    cout << "\n\nPlease enter the number you would like to convert to Hexadecimal: ";

    getline(cin, input);

    result = convert(3, input);


    cout << input << " in Hexadecimal is: " << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    hexadecimal();
}

void hex_decimal() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "HEXADECIMAL --> DECIMAL";
    cout << "\nProgram will give wrong conversions if characters other than \n1, 2, 3, 4, 5, 6, 7, 8, 9, 0, A, B , C, D, E, and F are entered.";
    cout << "\n\nPlease enter the number you would like to convert to Decimal: ";

    getline(cin, input);

    result = convert(4, input);


    cout << input << " in decimal is: " << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    hexadecimal();
}

//Property of MrScriptDev, 2025