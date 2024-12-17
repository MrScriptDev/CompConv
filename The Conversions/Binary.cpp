//BINARY FILE

//Included Libraries
#include <iostream>
#include <string>
#include <conio.h>

//Included Files
#include "../header.hpp"

//Namespace
using namespace std;

//Binary Menu
void binary() {

    //Variables    
    char option;


    //Menu
    cout << "\n\n\nBINARY CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Decimal to Binary";
    cout << "\n2. Convert Binary to Decimal";
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
        decimal_binary();
    }
    else if (option == '2') {
        binary_decimal();
    }
    else if (option == '3') {
        menu();
    }
    

}

//Binary Functions
void decimal_binary() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "DECIMAL --> BINARY";
    cout << "\nProgram will close if characters other than numbers are entered.";
    cout << "\n\nPlease enter the number you would like to convert to Binary: ";

    getline(cin, input);

    result = convert(1, input);


    cout << input << " in Binary is: " << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    binary();

}

void binary_decimal() {

    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "DECIMAL --> BINARY";
    cout << "\nProgram will return incorrect number if numbers other than 1s and 0s are added.";
    cout << "\n\nPlease enter the Binary Code you would like to convert to Decimal: ";

    getline(cin, input);


    result = convert(2, input);

    cout << input << " in Decimal is: " << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    binary();
    
}

//Property of MrScriptDev, 2024