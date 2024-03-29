/*
Joshua Farias
COMSC230
Professor Morales
Assignment #3
accumulativeSumJF.py
Description: 
Calculates the power of 2 accumulative
summation of a given number
*/

#include <iostream> 
#include <math.h>
using namespace std; 

int recursiveSum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum +=pow(n, i); //accumulative sum
    return sum;
} 
int main() { 
    int n; //creates user number variable
    //prompts user to enter a number
    cout << "Enter a non-negative number: " << endl;
    cin>> n;
    //if entry is less than zero prompts the user to enter a valid number
    while (n < 0) {
        cout<< "Invalid Entry! Please try again.";
        cout<< "\nEnter a non-negative number: " << endl;
        cin >> n;
    }
	cout<<"The power of 2 accumulative summation of "<< n <<" is "<< recursiveSum(n); 
	return 0; 
}