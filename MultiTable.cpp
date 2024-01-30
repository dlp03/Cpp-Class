//----------------------------------------------------------------------
// MultiTable.cpp - prints a muliplication table
//      Daria Pacheco - Saint Leo University - 22 February 2021
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

const int NUMCOLUMNS = 10;
const int COLWIDTH = 5;
const int NUMDIGITS = 2;


//----------------------------------------------------------------------
// void printLine(char myChar) -- print out a line of the
//      specified character myChar, in groups of COLWIDTH chars,
//      seperated by a '+' sign
//      This is used to print tables
//----------------------------------------------------------------------
void printLine (char myChar) {
    int i,j;  // Loop Counters  
    for (i=0; i<=NUMCOLUMNS; i++) {
    for (j=0;j<COLWIDTH;j++) {
        cout << myChar;
    }
    cout <<"+";
    }
    cout << endl;
}


//-----------------------------------------------
// MAIN PROGRAM
//-----------------------------------------------

int main(int argc, char **argv) {
    int row, col;   // Loop Counters
    
    //
    cout << "Multiplication Table" << endl << endl;
    //
    printLine('=');
    cout << setw(5) << right << "*" << "|" ;
    for (col=1; col<= NUMCOLUMNS; col++ ) {
        cout<< setw(5) << right << col << "|";
    } 
    cout << endl;
    printLine('=');
    
    for (row=1;row<=NUMCOLUMNS; row++) {
        cout << setw(5) << right << row << "|";
        
        // Loop over columns inside row
        for (col=1; col<=NUMCOLUMNS; col++) {
            cout << setw(5) << right << (col*row) << "|";
        }
        
        cout << endl;
        printLine('-');
    }    
        
    
    return 0; }