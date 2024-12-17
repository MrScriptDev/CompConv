//ASCII FILE

//Included Libraries
#include <iostream>
#include <string>
#include <conio.h>

//Included Files
#include "../header.hpp"

//Namespace
using namespace std;

//ASCII Menu
void ASCII() {
    //Variables    
    char option;


    //Menu
    cout << "\n\n\nASCII CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Text to ASCII";
    cout << "\n2. Convert ASCII to TEXT";
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
        text_ASCII();
    }
    else if (option == '2') {
        ASCII_text();
    }
    else if (option == '3') {
        menu();
    }

}

//ASCII Functions
void text_ASCII() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "TEXT --> ASCII";
    cout << "\nYou may enter ANYTHING, even full sentances or paragraphs. It will convert each character.";
    cout << "\n\nPlease enter the text you would like to convert to ASCII: ";

    getline(cin, input);

    result = convert(7, input);


    cout << "Each individual character is above. Here is " << input << " in ASCII code:\n\n" << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    ASCII();
}

void ASCII_text() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "ASCII --> TEXT";
    cout << "\nPlease enter your ASCII code with SPACES seperating each number.";
    cout << "\n\nPlease enter the ASCII you would like to convert to text: ";

    getline(cin, input);

    result = convert(8, input);


    cout << "Each individual character is above. Here is " << input << " in text:\n\n" << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    ASCII();
}

//Property of MrScriptDev, 2024