//Included Libraries
#include <iostream>
#include <string>
#include <cmath>

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
    cout << "\n2. Hexidecimal Conversions";
    cout << "\n3. ASCII Conversions (Coming Soon)";
    cout << "\n4. Computer Storage Conversions (Coming Later...)";
    cout << "\n5. EXTRAS/Quit Program";

    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";

    getline(cin, option);

    while (option != "1" && option != "2" && option != "3" && option != "4"  && option != "5") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }

    if (option == "1") {
        binary();
    }
    else if (option == "2") {
        hexidecimal();
        //cout << "\n\nCurrent Version does not contain these conversions\n\n";
        //menu();
    }
    else if (option == "3") {
        //ASCII();
        cout << "\n\nCurrent Version does not contain these conversions\n\n";
        menu();
    }
    else if (option == "4") {
        //CompStore();
        cout << "\n\nCurrent Version does not contain these conversions\n\n";
        menu();
    }
    else if (option == "5") {
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

void hexidecimal() {
    //Variables    
    string option;


    //Menu
    cout << "\n\n\nHEXIDECIMAL CONVERSIONS";
    cout << "\n\nSelect the action you would like to perform:";
    cout << "\n1. Convert Decimal to Hexidecimal";
    cout << "\n2. Convert Hexidecimal to Decimal";
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
    string option;


    //Menu
    cout << "\n\n\nComputer Storage CONVERSIONS";
    cout << "\n\nSelect the computer storage unit (You will enter the amount after this step):";
    cout << "\n1. Bit(s)";
    cout << "\n2. Byte(s)";
    cout << "\n3. Kilobyte(s)";
    cout << "\n4. Megabyte(s)";
    cout << "\n5. Gigabyte(s)";
    cout << "\n6. Terabyte(s)";
    cout << "\n7. Petabyte(s)";


    //Response Processing

    cout << "\n\nENTER OPTION NUMBER: ";
    
    getline(cin, option);

    while (option != "1" && option != "2" && option != "3" && option != "4" && option != "5" && option != "6" && option != "7") {
        cout << "\n\nInvalid Option. Please choose an option from above.";

        cout << "\n\nENTER OPTION NUMBER: ";

        getline(cin, option);

    }


    //When the time comes, make this into a switch case
    if (option == "1") {
        Storage_unit = "Bit";
    }
    else if (option == "2") {
        Storage_unit = "Byte";
    }
    else if (option == "3") {
        Storage_unit = "Kilobyte";
    }
    else if (option == "4") {
        Storage_unit = "Megabyte";
    }
    else if (option == "5") {
        Storage_unit = "Gigabyte";
    }
    else if (option == "6") {
        Storage_unit = "Terabyte";
    }
    else if (option == "7") {
        Storage_unit = "Petabyte";
    }


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



//Hexidecimal Functions
void decimal_hex() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "DECIMAL --> HEXIDECIMAL";
    cout << "\nProgram will close if characters other than numbers are entered.";
    cout << "\n\nPlease enter the number you would like to convert to Hexidecimal: ";

    getline(cin, input);

    result = convert(3, input);


    cout << input << " in Hexidecimal is: " << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    hexidecimal();
}

void hex_decimal() {
    //Variables
    string input;
    string result;

    //User Interface & input retrieval
    cout << "\n\n\n\n-----------------------------\n\n";
    cout << "HEXIDECIMAL --> DECIMAL";
    cout << "\nProgram will give wrong conversions if characters other than \n1, 2, 3, 4, 5, 6, 7, 8, 9, 0, A, B , C, D, E, and F are entered.";
    cout << "\n\nPlease enter the number you would like to convert to Hexidecimal: ";

    getline(cin, input);

    result = convert(4, input);


    cout << input << " in decimal is: " << result;

    cout << "\n\nPress ENTER to proceed";

    getline(cin, input);

    hexidecimal();
}



//ASCII Functions
void text_ASCII() {

}

void ASCII_text() {

}




//Extras Panel Functions
void pull_version() {

    cout << "\n------------------------------\n";

    cout << "\nVersion: v1.0.0";

    cout << "\n\nNotes about this version:";
    cout << "\n- Current Version contains only binary and hexidecimal conversions";
    cout << "\n- More necessary computer conversions coming in the future";
    cout << "\n- CompConv is now on GitHub";

    cout << "\n\nChangelog:";
    cout << "\n- HEXIDECIMAL CONVERSIONS are out NOW!";
    cout << "\n- Now posted on GitHub.com, find it on MrScriptDev's CompConv Repository";
    

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

string convert(int conversion, string input, string ComputerStorageUnit) {

    //Variables
    string product;
    
    int value;
    int powerof;
    int value_length = input.length();

    string hexing_product;
    string hex_group;
    string hex_end;


    
    

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

            cout << "To find the Hexidecimal number of any number, you have to\n";
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
            cout << "from left to right. This is your hexidecimal number.";

            cout << "\n\nFor example, here is how you convert " << hexing_product << " (the\n";
            cout << "binary value of " << input << ") to hexidecimal:\n";

            
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


            cout << "\n\nTo find the decimal number of any hexidecimal number, you must first\n";
            cout << "find the binary number of each digit in your hexidecimal number. Here are\n";
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

                    while (value >= pow(2, powerof)) {
                        powerof++;
                    }
                    

                    powerof--;

                    while (value > 0) {

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

                cout << "\nThis is your hexidecimal number in binary form. See\n";
                cout << "how it is squished together starting from the binary number\n";
                cout << "of your first hexidecimal number? That is important, because\n";
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
            }



            

    return product;
}

    



//Property of MrScriptDev, 2024