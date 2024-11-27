//Included Libraries
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

//Included Files
#include "header.hpp"

//Namespace
using namespace std;


//Menu Functions
void menu() {

    //Variables
    string option;

    //Menu Display & options
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Binary Conversions";
    cout << "\n2. Hexadecimal Conversions";
    cout << "\n3. Octal Conversions (NEW CONCEPT to CompConv! Coming Soon...)";
    cout << "\n4. ASCII Conversions";
    cout << "\n5. Computer Storage Conversions";
    cout << "\n6. EXTRAS/Quit Program";

    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";

    getline(cin, option);

    while (option != "1" && option != "2" && option != "3" && option != "4" && option != "5" && option != "6") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }

    if (option == "1") {
        binary();
    }
    else if (option == "2") {
        hexadecimal();
    }
    else if (option == "3") {
        cout << "\n\nCurrent Version does not contain these conversions\n\n";
        menu();
        octal();
    }
    else if (option == "4") {
        ASCII();
    }
    else if (option == "5") {
        CompStore();
    }
    else if (option == "6") {
        extras();
    }

}
    

void binary() {

    //Variables    
    string option;


    //Menu
    cout << "\n\n\nBINARY CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Decimal to Binary";
    cout << "\n2. Convert Binary to Decimal";
    cout << "\n3. Menu";

    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";

    getline(cin, option);

    while (option != "1" && option != "2" && option != "3") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }

    if (option == "1") {
        decimal_binary();
    }
    else if (option == "2") {
        binary_decimal();
    }
    else if (option == "3") {
        menu();
    }
    

}

void hexadecimal() {
    //Variables    
    string option;


    //Menu
    cout << "\n\n\nHEXADECIMAL CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Decimal to Hexadecimal";
    cout << "\n2. Convert Hexadecimal to Decimal";
    cout << "\n3. Menu";

    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";

    getline(cin, option);

    while (option != "1" && option != "2" && option != "3") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }

    if (option == "1") {
        decimal_hex();
    }
    else if (option == "2") {
        hex_decimal();
    }
    else if (option == "3") {
        menu();
    }
}

void octal() {
        //Variables    
    string option;


    //Menu
    cout << "\n\n\nOCTAL CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Decimal to Hexadecimal";
    cout << "\n2. Convert Hexadecimal to Decimal";
    cout << "\n3. Menu";

    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";

    getline(cin, option);

    while (option != "1" && option != "2" && option != "3") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }

    if (option == "1") {
        decimal_hex();
    }
    else if (option == "2") {
        hex_decimal();
    }
    else if (option == "3") {
        menu();
    }
}

void ASCII() {
    //Variables    
    string option;


    //Menu
    cout << "\n\n\nASCII CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Text to ASCII";
    cout << "\n2. Convert ASCII to TEXT";
    cout << "\n3. Menu";

    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";
    
    getline(cin, option);

    while (option != "1" && option != "2" && option != "3") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }

    if (option == "1") {
        text_ASCII();
    }
    else if (option == "2") {
        ASCII_text();
    }
    else if (option == "3") {
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

    string product = convert(7, amount, Storage_num, convert_to_num);

    cout << endl << endl << amount << " " << Storage_unit << "(s) is " << product << " " << convert_to << "(s)";

    cout << "\n\nPress ENTER to proceed";

    getline(cin, option);

    menu();

}

void extras() {
    //Variables    
    string option;


    //Menu
    cout << "\n\n\nEXTRAS PANEL";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Show current version details";
    cout << "\n2. Exit Program";
    cout << "\n3. Menu";

    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";
    
    getline(cin, option);

    while (option != "1" && option != "2" && option != "3") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }

    if (option == "1") {
        pull_version();
        extras();
    }
    else if (option == "2") {
        exit_program();
    }
    else if (option == "3") {
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

    result = convert(5, input);


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

    result = convert(6, input);


    cout << "Each individual character is above. Here is " << input << " in text:\n\n" << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    ASCII();
}




//Extras Panel Functions
void pull_version() {

    cout << "\n------------------------------\n";

    cout << "\nVersion: v3.0.0";

    cout << "\n\nNotes about this version:";
    cout << "\n- Current Version contains alk conversions other than octal";
    cout << "\n- More necessary computer conversions coming in the future";
    cout << "\n- Octal Conversions in development soon";
    cout << "\n- Make sure to keep up-to-date on this GitHub repository to get the latest versions!";
    cout << "\n- PLEASE report any other bugs that are found";
    cout << "\n- This version may be buggy. It will be refined over time.";

    cout << "\n\nChangelog:";
    cout << "\n- Computer Storage Conversions are out now!";
    

    cout << "\n\n\nOnly personal and educational use permitted";
    
    cout << "\n\nMrScriptDev 2024";

    cout << "\n\n------------------------------\n";

    
}

void exit_program() {
    
    //Variables
    string option;


    //Exit Dialogue
    cout << "\n\nAre you sure you would like to exit CompConv?" << "\n1. Yes" << "\n2. No";
    cout << "\n\nENTER OPTION NUMBER: ";

    getline(cin, option);

    while (option != "1" && option != "2") {
        cout << "\n\nInvalid option. Please enter a possible option.";
        cout << "\n\nENTER OPTION NUMBER: ";
        getline(cin, option);
    }

    if (option == "1") {
        exit(0);
    }
    else {
        extras();
    }


}

//Conversion Function

string convert(int conversion, string input, int ComputerStorageUnit, int ComputerStorageTo) {

    //Variables
    string product;
    
    int value;
    int powerof;
    int value_length = input.length();

    string hexing_product;
    string hex_group;
    string hex_end;
    string decode;

    stringstream breaking(input);

    double CS_amount;
    string toConvert;
    
    

    switch(conversion) {

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
            


        case 5:

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
        
        case 6:

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

        case 7:

            toConvert = "1";
            value = 0;
            CS_amount = stoi(input);

            if (ComputerStorageUnit < ComputerStorageTo) {
                cout << "\n\nprocessing\n\n";
                for (int i = 0; i < ComputerStorageTo - ComputerStorageUnit; i++) {
                    cout << CS_amount << endl;
                    CS_amount = CS_amount / 1024;
                    product = to_string(CS_amount);
                    cout << "Product: " << product << endl;
                }
                
            }
            else if (ComputerStorageUnit > ComputerStorageTo) {
                cout << "\n\nprocessing\n\n";
                for (int i = 0; i < ComputerStorageUnit - ComputerStorageTo; i++) {
                    cout << CS_amount << endl;
                    CS_amount = CS_amount * 1024;
                    product = to_string(CS_amount);
                    cout << "Product: " << product << endl;
                }
                
            }
            
            product = to_string(CS_amount);

            break;
        
    }

    return product;
}

    



//Property of MrScriptDev, 2024