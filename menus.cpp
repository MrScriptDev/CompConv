//EXTRAS & MENU FILE

//Included Libraries
#include <iostream>
#include <string>
#include <conio.h>

//Included Files
#include "header.hpp"

//Namespace
using namespace std;

//Menu Functions
void menu() {

    //Variables
    char option;

    //Menu Display & options
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Binary Conversions";
    cout << "\n2. Hexadecimal Conversions";
    cout << "\n3. Octal Conversions";
    cout << "\n4. ASCII Conversions";
    cout << "\n5. Computer Storage Conversions";
    cout << "\n6. EXTRAS/Quit Program";

    //Response Processing

    cout << "\n\nPRESS OPTION NUMBER ON KEYBOARD";

    option = getch();

    while (option != '1' && option != '2' && option != '3' && option != '4' && option != '5' && option != '6') {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nPRESS OPTION NUMBER ON KEYBOARD";

        option = getch();

    }

    switch (option) {
        case '1':
            binary();
            break;
        case '2':
            hexadecimal();
            break;
        case '3':
            octal();
            break;
        case '4':
            ASCII();
            break;
        case '5':
            CompStore();
            break;
        case '6':
            extras();
            break;
    }

}



//Extras Menu
void extras() {
    //Variables    
    char option;


    //Menu
    cout << "\n\n\nEXTRAS PANEL";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Show current version details";
    cout << "\n2. Exit Program";
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
        pull_version();
        extras();
    }
    else if (option == '2') {
        exit_program();
    }
    else if (option == '3') {
        menu();
    }
}

//Extras Panel Functions
void pull_version() {

    cout << "\n------------------------------\n";

    cout << "\nVersion: v4.2.1";

    cout << "\n\nNotes about this version:";
    cout << "\n- Happy New Year!";
    cout << "\n- Credentials Updated";

    cout << "\n\nChangelog:";
    cout << "\n- Changed Credential Comments to 2025";
    

    cout << "\n\n\nOnly personal and educational use permitted";
    
    cout << "\n\nMrScriptDev 2025";

    cout << "\n\n------------------------------\n";

    //Updated last on 1/27/2025
    
}

void exit_program() {
    
    //Variables
    char option;


    //Exit Dialogue
    cout << "\n\nAre you sure you would like to exit CompConv?" << "\n1. Yes" << "\n2. No";
    cout << "\n\nPRESS OPTION NUMBER ON KEYBOARD";

    option = getch();

    while (option != '1' && option != '2') {
        cout << "\n\nInvalid option. Please enter a possible option.";
        cout << "\n\nPRESS OPTION NUMBER ON KEYBOARD";
        option = getch();
    }

    if (option == '1') {
        exit(0);
    }
    else {
        extras();
    }


}

//Property of MrScriptDev, 2025