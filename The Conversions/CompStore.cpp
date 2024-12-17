//COMPUTER STORAGE FILE

//Included Libraries
#include <iostream>
#include <string>
#include <conio.h>

//Included Files
#include "../header.hpp"

//Namespace
using namespace std;

//CompStore Menu & Functions

void CompStore() {
    //Variables
    string Storage_unit;
    int Storage_num;
    int convert_to_num;
    string amount;
    string convert_to;
    string option;


    //Menu
    cout << "\n\n\nComputer Storage CONVERSIONS";
    cout << "\n\nSelect the computer storage unit (You will enter the amount after this step):";
    cout << "\n1. Byte(s)";
    cout << "\n2. Kilobyte(s)";
    cout << "\n3. Megabyte(s)";
    cout << "\n4. Gigabyte(s)";
    cout << "\n5. Terabyte(s)";
    cout << "\n6. Petabyte(s)";


    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";
    
    getline(cin, option);

    while (option != "1" && option != "2" && option != "3" && option != "4" && option != "5" && option != "6" && option != "7") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }


    switch (stoi(option))
    {
        case 1:
            Storage_unit = "Byte";
            Storage_num = 1;
            break;
        
        case 2:
            Storage_unit = "Kilobyte";
            Storage_num = 2;
            break;
        
        case 3:
            Storage_unit = "Megabyte";
            Storage_num = 3;
            break;
        
        case 4:
            Storage_unit = "Gigabyte";
            Storage_num = 4;
            break;
        
        case 5:
            Storage_unit = "Terabyte";
            Storage_num = 5;
            break;
        
        case 6:
            Storage_unit = "Petabyte";
            Storage_num = 6;
            break;
        
    
    }

    cout << "\n\n---" << Storage_unit << "(s)---\n\n";

    cout << "Please enter the amount of " << Storage_unit << "(s): ";
    
    getline(cin, amount);

    cout << "\n\n---" << amount << " " << Storage_unit << "(s)---\n\n";

    cout << "Select the computer storage unit you would like to convert to";
    cout << "\n1. Byte(s)";
    cout << "\n2. Kilobyte(s)";
    cout << "\n3. Megabyte(s)";
    cout << "\n4. Gigabyte(s)";
    cout << "\n5. Terabyte(s)";
    cout << "\n6. Petabyte(s)";


    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";
    
    getline(cin, option);

    while (option != "1" && option != "2" && option != "3" && option != "4" && option != "5" && option != "6" && option != "7") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }

    switch (stoi(option))
    {
        case 1:
            convert_to = "Byte";
            convert_to_num = 1;
            break;
        
        case 2:
            convert_to = "Kilobyte";
            convert_to_num = 2;
            break;
        
        case 3:
            convert_to = "Megabyte";
            convert_to_num = 3;
            break;
        
        case 4:
            convert_to = "Gigabyte";
            convert_to_num = 4;
            break;
        
        case 5:
            convert_to = "Terabyte";
            convert_to_num = 5;
            break;
        
        case 6:
            convert_to = "Petabyte";
            convert_to_num = 6;
            break;
        
    
    }


    cout << "\n\n---" << amount << " " << Storage_unit << "(s) --> " << convert_to << "(s)---\n\n";

    cout << "\n Converting " << amount << " " << Storage_unit << "(s) into " << convert_to << "(s)...\n\n";

    string product = convert(9, amount, Storage_num, convert_to_num);

    cout << endl << endl << amount << " " << Storage_unit << "(s) is " << product << " " << convert_to << "(s)";

    cout << "\n\nPress ENTER to proceed";

    getline(cin, option);

    menu();

}

//Property of MrScriptDev, 2024