//------------------------------------------------------------------------
// Number.cpp - Prompts the user to enter an integer and then reports some
//      properties of the number.
//  Daria Pacheco - Saint Leo University - 8 February 2021
//------------------------------------------------------------------------
#include <iostream>
using namespace std;


int main() {
    int userInput;
    int digitalRoot;
    
    // Part 1. Get an Integer from the user
    
    cout<< "Please enter an whole number ?>";
    cin>> userInput;
    cout<< "You enterd " << userInput << endl;
    
    // Part 2. Zero, negative or positive
    
    if (userInput == 0) {
        cout << "The value is zero." << endl;
    } else {
        if (userInput <0 ) {
            cout << "The value is negative." << endl;
        } else {
            cout << " The value is positve." << endl; 
        }
    }
    
    //Part 3. Even or Odd
    
    if ( (userInput%2)==0 ) {
            cout << " The value is even." << endl; 
    } else {
            cout << " The value is odd." << endl; 
    }
    
    // Part 4. Cmpute the Digital Root
    
    digitalRoot = userInput;
    
    if ( digitalRoot < 0) digitalRoot = digitalRoot * -1;
    
    digitalRoot = digitalRoot % 9;
    
    if (digitalRoot ==0) digitalRoot = 9;
    
    cout << " The Digital Root of the value is " << digitalRoot << endl;
    
       return 0; }