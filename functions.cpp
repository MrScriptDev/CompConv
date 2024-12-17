//Included Libraries
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
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




//Extras Panel Functions
void pull_version() {

    cout << "\n------------------------------\n";

    cout << "\nVersion: v4.1.0";

    cout << "\n\nNotes about this version:";
    cout << "\n- ALL conversions are now here";
    cout << "\n- Introducing Octal conversions!";
    cout << "\n- Easier Menu Navigation is here!";
    cout << "\n- More Conversions in the future. Conversion Recomendations are accepted!";
    cout << "\n- Make sure to keep up-to-date on this GitHub repository to get the latest versions!";
    cout << "\n- PLEASE report any other bugs that are found";
    cout << "\n- This version may be buggy. It will be refined over time.";

    cout << "\n\nChangelog:";
    cout << "\n- Easier Menu Navigation has been added.";
    cout << "\n- Code Cleanup has begun! CompConv will be more organized to look at in the GitHub Repository.";
    

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

//Conversion Function

//This function contains EVERY conversion that is in CompConv

string convert(int conversion, string input, int ComputerStorageUnit, int ComputerStorageTo) {

    //Variables
    string product;
    
    int value;
    int powerof;
    int value_length = input.length();
    int octalCount;

    string hexing_product;
    string hex_group;
    string hex_end;
    string decode;

    stringstream breaking(input);

    double CS_amount;
    string toConvert;
    
    

    switch(conversion) {
        
        //Decimal to Binary
        case 1:
            
            
            powerof = 0;
            
            value = stoi(input);


            cout << endl << "How to find:\n\n";

            cout << "To find the binary number of any number, you must first\n";
            cout << "find the largest value possible from powers of 2 that can be\n";
            cout << "subtracted from your number. Then, you subtract that large\n";
            cout << "number from your original number. Write \"1\" as your first\n";
            cout << "binary conversion number. Then you move to the next power of 2\n";
            cout << "(down a value). You see if that number can be subtracted from\n";
            cout << "your current value without going into the negatives. If it can,\n";
            cout << "Then write a \"1\". If it can't, then write a \"0\". Repeat this\n";
            cout << "until you get to 2^0. (Stop after doing 2^0)";

            cout << "\n\nFor example, here is how you convert " << value << " to binary code:\n\n";

            while (value >= pow(2, powerof)) {
                powerof++;
            }
            
            powerof--;

            while (value > 0) {

                cout << "2^" << powerof << " = " << pow(2, powerof) << endl;
                if (value >= pow(2, powerof)) {
                    product += "1";
                    cout << "|__   " << value << " - " << pow(2, powerof);
                    value -= pow(2, powerof);
                    cout << " = " <<  value << endl;
                    
                } else {
                    product += "0";
                }
                powerof--;
            }
            while (powerof > 0 - 1) {
                product += "0";
                powerof--;
            }
            
            cout << endl << endl;

            break;
        



        //Binary to Decimal
        case 2:

            
            value = 0;
            powerof = 0;
            
            cout << "\nHow to solve:\n\n";

            cout << "To find the decimal number of any binary number, you must\n";
            cout << "multiply the binary number by it's corresponding power of 2 product.\n";
            cout << "\nTo make it easier, you should have all your powers of 2 that make up\n";
            cout << "your binary number laid out. Every time you see a \"1\", write down\n";
            cout << "the power of 2 that corresponds with that 1. Ignore all \"0\"s. Now add\n";
            cout << "all the values together that you wrote down. That is your decimal number.";

            cout << "\n\nFor example, here is how you convert " << input << " to decimal:\n\n";

            for (int i = value_length - 1; i >= 0; i--) {
                char C_number = input[i];
                
    
                cout << C_number << ":     2^" << powerof << " = " << pow(2, powerof) << endl;

                if (C_number == '1') {
                    cout << "|__    " << value << " + " << pow(2, powerof) << " = ";
                    value += pow(2, powerof);

                    cout << value << endl;
                }
                

                powerof++;

                


            }
            
            cout << endl << endl;

            product = to_string(value);
            



            break;
        
        //Decimal to Hexadecimal
        case 3:
            powerof = 0;
            
            value = stoi(input);

            product = "";


            cout << endl << "How to find:\n\n";

            cout << "To find the Hexadecimal number of any number, you have to\n";
            cout << "first find the binary value of the number.\n\n";

            cout << "To find the binary number of any number, you must first\n";
            cout << "find the largest value possible from powers of 2 that can be\n";
            cout << "subtracted from your number. Then, you subtract that large\n";
            cout << "number from your original number. Write \"1\" as your first\n";
            cout << "binary conversion number. Then you move to the next power of 2\n";
            cout << "(down a value). You see if that number can be subtracted from\n";
            cout << "your current value without going into the negatives. If it can,\n";
            cout << "Then write a \"1\". If it can't, then write a \"0\". Repeat this\n";
            cout << "until you get to 2^0. (Stop after doing 2^0)";

            cout << "\n\nFor example, here is how you convert " << value << " to binary code:\n\n";

            while (value >= pow(2, powerof)) {
                powerof++;
            }
            
            powerof--;

            while (value > 0) {

                cout << "2^" << powerof << " = " << pow(2, powerof) << endl;
                if (value >= pow(2, powerof)) {
                    hexing_product += "1";
                    cout << "|__   " << value << " - " << pow(2, powerof);
                    value -= pow(2, powerof);
                    cout << " = " <<  value << endl;
                    
                } else {
                    hexing_product += "0";
                }
                powerof--;
            }
            while (powerof > 0 - 1) {
                hexing_product += "0";
                powerof--;
            }
            
            cout << endl << endl;

            cout << input <<  " in binary code is " << hexing_product << endl;
            
            cout << "\nAfter you do this, you need to split up the binary numbers\n";
            cout << "into groups of 4, starting from the right and going to the left.\n";
            cout << "Then, you take your first group and starting from 2^0, convert\n";
            cout << "them back into decimal. Do this for the remaining groups (each\n";
            cout << "time starting from 2^0). Now, change every number that is greater\n";
            cout << "than 9 and label them A-F. You will never get a number bigger than\n";
            cout << "15. Here are the letters you should right for each number:\n\n";
            
            cout << "10 = A\n";
            cout << "11 = B\n";
            cout << "12 = C\n";
            cout << "13 = D\n";
            cout << "14 = E\n";
            cout << "15 = F\n";
            
            cout << "\nNow, write each number/letter result from your groups in order\n";
            cout << "from left to right. This is your hexadecimal number.";

            cout << "\n\nFor example, here is how you convert " << hexing_product << " (the\n";
            cout << "binary value of " << input << ") to hexadecimal:\n";

            
            while (hexing_product.length() % 4 != 0) {
                hexing_product = "0" + hexing_product;    
            }


            

            for (int i = 0; i <= hexing_product.length() -1; i++) {
                

                powerof = 0;
                value = 0;

                hex_group += hexing_product[i];

                

                if (hex_group.length() == 4) {
                    hex_end = "|" + hex_group + "|" + hex_end;
                    cout << "|" + hex_group + "|" << " = ";

                    for (int i = hex_group.length() - 1; i >= 0; i--) {
                        if (hex_group[i] == '1'){
                            value += pow(2, powerof);
                        }
                        powerof++;
                    }

                    if (value > 9){
                        switch(value) {
                            case 10:
                                product += "A";
                                cout << "A" << endl;
                                break;
                            case 11:
                                product += "B";
                                cout << "B" << endl;
                                break;
                            case 12:
                                product += "C";
                                cout << "C" << endl;
                                break;
                            case 13:
                                product += "D";
                                cout << "D" << endl;
                                break;
                            case 14:
                                product += "E";
                                cout << "E" << endl;
                                break;
                            case 15:
                                product += "F";
                                cout << "F" << endl;
                                break;
                        }
                    }
                    else {
                        product += to_string(value);
                        cout << value << endl;
                    }
                    

                    hex_group = "";

                }
            }

            cout << endl << hex_end << endl << endl;


            break;

        //Hexadecimal to Decimal
        case 4:

            powerof = 0;
            value = 0;
            hexing_product = "";


            cout << "\n\nTo find the decimal number of any hexadecimal number, you must first\n";
            cout << "find the binary number of each digit in your hexadecimal number. Here are\n";
            cout << "the numbers you should make the letters in your hex number to: \n\n";

            cout << "10 = A\n";
            cout << "11 = B\n";
            cout << "12 = C\n";
            cout << "13 = D\n";
            cout << "14 = E\n";
            cout << "15 = F\n";

            cout << "\nFor example, here is how you convert "<< input << " to binary:\n\n";

            for (int i = 0; i <= input.length() - 1; i++) {

                hex_end = "";

                if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C' || input[i] == 'D' || input[i] == 'E' || input[i] == 'F') {
                    switch (input[i]) {
                        case 'A':
                            cout << endl << "A = 10" << endl;
                            value = 10;
                            break;
                        case 'B':
                            cout << endl << "B = 11" << endl;
                            value = 11;
                            break;
                        case 'C':
                            cout << endl << "C = 12" << endl;
                            value = 12;
                            break;
                        case 'D':
                            cout << endl << "D = 13" << endl;
                            value = 13;
                            break;
                        case 'E':
                            cout << endl << "E = 14" << endl;
                            value = 14;
                            break;
                        case 'F':
                            cout << endl << "F = 15" << endl;
                            value = 15;
                            break;
                    }
                }
                else {
                    value = input[i] - '0';
                    
                    }

                    cout << endl << value << endl;

                    while (value > pow(2, powerof)) {
                        powerof++;
                    }
                    
                    if (pow(2, powerof) > value) {
                        powerof--;
                    }
                    

                    do {

                        cout << "2^" << powerof << " = " << pow(2, powerof) << endl;
                        if (value >= pow(2, powerof)) {
                            hex_end += "1";
                            cout << "|__   " << value << " - " << pow(2, powerof);
                            value -= pow(2, powerof);
                            cout << " = " <<  value << endl;
                            
                        } else {
                            hex_end += "0";
                        }
                        powerof--;
                    }
                    while (value > 0);


                    while (powerof > 0 - 1) {
                        hex_end += "0";
                        powerof--;
                    }
                    
                    while (hex_end.length() % 4 != 0) {
                        hex_end = "0" + hex_end;
                    }
                    
                    product += hex_end;

                    cout << endl << endl << product << endl;

                }

                cout << "\nThis is your hexadecimal number in binary form. See\n";
                cout << "how it is squished together starting from the binary number\n";
                cout << "of your first hexadecimal number? That is important, because\n";
                cout << "you now have to take that full binary number and convert it back\n";
                cout << "to decimal as you normally would, starting from the right with 2^0\n";
                cout << "to the left, increasing your exponent on the 2.\n";

                cout << "\nFor example, here is how you convert " << product << " to decimal:\n";

                value_length = product.length();
                value = 0;
                powerof = 0;

                for (int i = value_length - 1; i >= 0; i--) {
                    char C_number = product[i];
                    
        
                    cout << C_number << ":     2^" << powerof << " = " << pow(2, powerof) << endl;

                    if (C_number == '1') {
                        cout << "|__    " << value << " + " << pow(2, powerof) << " = ";
                        value += pow(2, powerof);

                        cout << value << endl;
                    }
                    

                    powerof++;

                


                }


                product = to_string(value);

                
                cout << endl << endl << product << endl << endl;

                break;
            

        //Decimal to Octal
        case 5:

            value = stoi(input);

            powerof = 0;

            cout << endl << "How to find:\n\n";

            cout << "To find the Octal number of any number, you must first\n";
            cout << "find the largest value possible from powers of 8 that can be\n";
            cout << "subtracted from your number. Then, you subtract that large\n";
            cout << "number from your original number. You may be able to subtract\n";
            cout << "that number multiple times out of your number before it can't fit\n";
            cout << "anymore. Now, find out how many times you subtracted that number\n";
            cout << "from your number to get the first digit of your octal number.\n";
            cout << "Now, repeat this process until you've subtracted your original number\n";
            cout << "down to 0. Make sure that you have written your octal digits with the first\n";
            cout << "one starting on the left and then continuing right. Whatever your set of Octal\n";
            cout << "digits is by the time that your original number is 0 is the octal\n";
            cout << "number of your number";

            cout << "\n\nFor example, here is how you convert " << value << " into it's octal number:\n\n";

            while (value >= pow(8, powerof)) {
                powerof++;
            }
            
            powerof--;

            while (powerof >= 0) {
                
                octalCount = 0;

                while (value >= pow(8, powerof)) {
                    cout << endl << value;
                    value -= pow(8, powerof);
                    octalCount++;
                    cout << " - " << pow(8, powerof) << " = " << value;
                }
                
                cout << "\n\nNo more " << pow(8, powerof) << "s can fit into " << value;

                cout << "\n\nNow count up how many " << pow(8, powerof) << "s were subtracted";

                cout << endl << endl << endl << octalCount << " is a digit of the octal number\n";

                powerof--;
                product += to_string(octalCount);
               
            }

            break;

        //Octal to Decimal
        case 6:
            value = 0;
            powerof = 0;

            cout << endl << "How to find:\n\n";

            cout << "To find the decimal number of any Octal number, you must first\n";
            cout << "take the end digit (the digit farthest to the right) and starting\n";
            cout << "from 8^0, multiply the digit of the octal number by 8 to the power\n";
            cout << "of an increasing number. This means that the first digit (the one all\n";
            cout << "the way to the right) of the octal number is multiplied by 8^0. Then the\n";
            cout << "next digit of the octal number (going from right to left) is multiplied\n";
            cout << "by 8^1. The next one is multiplied by 8^2 and so on and so forth until you\n";
            cout << "reach the end of the octal number (the left most digit). Now add all the\n";
            cout << "products together that you got while doing that process.\n";
            cout << "This is your decimal number.";

            cout << "\n\nFor example, here is how you convert " << input << " into it's decimal number:\n\n";

            for (int i = input.length()-1; i >= 0; i--) {

                cout << endl << input[i] << " is a digit of the octal number";
                cout << endl << "8^" << powerof << " = " << pow(8, powerof) << endl;

                cout << endl << input[i] << " * " << pow(8, powerof) << " = " << (input[i] - '0') * pow(8, powerof);
                cout << endl << value;

                value += (input[i] - '0') * pow(8, powerof);
                powerof++;
                
                cout << " + " << (input[i] - '0') * pow(8, powerof - 1) << " = " << value << endl;
            }

            cout << endl;

            product = to_string(value);

            break;
        
        //Text to ASCII
        case 7:

            cout << endl;
            cout << "To convert text into the American Standard Code for Information Interchange\n";
            cout << "(ASCII), you can search the Internet for a chart. There is no complex math\n";
            cout << "involved, you just need to look on this chart and see which number\n";
            cout << "corresponds with the character you are looking to convert.\n\n";

            product = "";

            for (int i = 0; i < input.length(); i++) {
                cout << input[i] << " in ASCII is " << int(input[i]) << endl;
                product += to_string(int(input[i])) + " ";
            }

            cout << endl;

            break;
        
        //ASCII to Text
        case 8:

            cout << endl;
            cout << "To convert American Standard Code for Information Interchange (ASCII)\n";
            cout << "into text, you can search the Internet for a chart. There is no complex math\n";
            cout << "involved, you just need to look on this chart and see which number\n";
            cout << "corresponds with the character you are looking to convert.\n\n";

            

            while (getline(breaking, decode, ' ')) {
                
                product += char(stoi(decode));

                cout << decode << " in text is " << char(stoi(decode)) << endl;

                decode = "";
            }


            cout << endl;

            break;

        //Computer Storage Conversions
        case 9:

            toConvert = "1";
            value = 0;
            CS_amount = stoi(input);

            if (ComputerStorageUnit < ComputerStorageTo) {
                
                cout << CS_amount << endl << endl;
                for (int i = 0; i < ComputerStorageTo - ComputerStorageUnit; i++) {
                    cout << CS_amount << " / 1024 = ";
                    CS_amount = CS_amount / 1024;
                    product = to_string(CS_amount);
                    cout << product << endl;
                }
                
            }
            else if (ComputerStorageUnit > ComputerStorageTo) {
                
                cout << CS_amount << endl << endl;
                for (int i = 0; i < ComputerStorageUnit - ComputerStorageTo; i++) {
                    cout << CS_amount << " * 1024 = ";
                    CS_amount = CS_amount * 1024;
                    product = to_string(CS_amount);
                    cout << product << endl;
                }
                
            }
            
            product = to_string(CS_amount);

            break;
        
    }

    //The product is updated at the end of each of these cases. The product when it is returned always contains the conversion.
    return product;
}

    
//Property of MrScriptDev, 2024