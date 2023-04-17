/************************************************************
#
# Program Name: inputGreeting.cpp
#
# Description: Prompts user to enter name then greets user
#
# Language: C++
#
# Date: 11/16/2022 
#
# Author: Joshua Farias
#
************************************************************/

#include <iostream> //input/output stream library
#include <string>   //string library

int main() { // define main function
    std::string name; //declare a variable to store the user's name
    std::cout << "Enter your name: "; //prompt user to enter their name
    std::cin >> name; //read the user's input and store it in name variable
    std::cout << "Hello, " << name << "!\n"; //greet user
    return 0; //end of program
}
