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

//Personal STOI() function. The built in one wasn't cutting it because once the string exeeded a certain length, the stoi() function would close the program
int string_int(std::string input) {

    int int_input = 0;

    //Check if string contains characters other than numbers. If it does, it returns a 0 to not interrupt the rest of the program's processes.
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != '0' && input[i] != '1' && input[i] != '2' && input[i] != '3' && input[i] != '4' && input[i] != '5' && input[i] != '6' && input[i] != '7' && input[i] != '8' && input[i] != '9' && input[i] != '-') {
            std::cout << "\n\nCan't convert. String contains characters other than numbers\n";
            return 0;
        }
    }

    //Convert string to int
    int x = 0;
    for (int i = input.length() - 1; i >= 0; i--) {
        //Check if negative symbol
        if (input[i] == '-') {
            //If it is, then change the number to a negative number
            int_input = -int_input;
        }
        else {
            //If it isn't a negative symbol
            //Take variable the next digit in the input and turn it into an int, then multiply it by the place it's in
            int_input += (input[i] - '0') * pow(10, x);
            x++;
        }
    }

    return int_input;
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
            
            value = string_int(input);


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
            
            value = string_int(input);

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

            value = string_int(input);

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
                
                product += char(string_int(decode));

                cout << decode << " in text is " << char(string_int(decode)) << endl;

                decode = "";
            }


            cout << endl;

            break;

        //Computer Storage Conversions
        case 9:

            toConvert = "1";
            value = 0;
            CS_amount = string_int(input);

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

    
//Property of MrScriptDev, 2025