/************************************************************
#
# Program Name: cylinderVolume.cpp
#
# Description: Calculates the volume of a cylinder based on
# radius and height inputs from user.
#
# Language: C++
#
# Date: 2/22/2023 
#
# Author: Joshua Farias
#
************************************************************/

//Header files
#include <iostream> //input output
#include <limits> //numeric limits

using namespace std;

int main() {

const double pi = 3.14159265359; //creates and defines pi variable
double radius, height; //defines radius and height variables
double volume; //defines variable for volume

cout << "Calculate the volume of a cylinder" <<endl;

//prompts the user to enter radius and assigns value to variable
do { 
cout << "\nEnter a number for the radius: ";
    cin >> radius;

//verifies if input for radius is positive if not prompts again
    if (cin.fail() || radius <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive integer.\n";
    }
} while (radius <= 0);

//prompts the user to enter height and assigns value to variable
do {
cout << "Enter a number for the height: ";
    cin >> height;

//verifies if input for height is positive if not prompts again
    if (cin.fail() || height <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive integer.\n";
    }
} while (height <= 0); 

//defines volume with formula and numbers obtained from user input
volume = pi * (radius * radius) * height;

//displays volume
cout << "The volume is approximately: "<< volume <<endl;

return 0;

}
