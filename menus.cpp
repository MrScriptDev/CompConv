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

    cout << "\nVersion: v4.2.0";

    cout << "\n\nNotes about this version:";
    cout << "\n- Code is all cleaned up!";
    cout << "\n- CompConv is now more organized for viewers on GitHub";
    cout << "\n- Easier Menu Navigation is here!";
    cout << "\n- More Conversions in the future. Conversion Recomendations are accepted!";
    cout << "\n- Make sure to keep up-to-date on this GitHub repository to get the latest versions!";
    cout << "\n- PLEASE report any other bugs that are found";

    cout << "\n\nChangelog:";
    cout << "\n- Easier Menu Navigation has been added.";
    cout << "\n- Code has been organized much better. GitHub users can now see that CompConv is split up into";
    cout << "\nmultiple files instead of having a huge \"functions\" file.";
    cout << "\n- Code Cleanup isn't over! We're still experimenting with different organization methods.";
    

    cout << "\n\n\nOnly personal and educational use permitted";
    
    cout << "\n\nMrScriptDev 2024";

    cout << "\n\n------------------------------\n";

    //Updated last on 12/12/2024
    
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

//Property of MrScriptDev, 2024