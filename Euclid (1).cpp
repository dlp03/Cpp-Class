//-------------------------------------------------------------------
// Euclid.cpp -- the greatest common divisor of two
//	integers.
// 		Daria Pacheco - Saint Leo University - 08 March 2021
//-------------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

//-------------------------------------------------------------------
// int Euclid(int Dividend, int Divisor) -- computes the greatest
// 		common divisor (gcd) using Euclid's Algorithm
//-------------------------------------------------------------------
int Euclid(int Dividend, int Divisor) {
	int remainder;
	if (Dividend < Divisor) {
		return Euclid(Divisor, Dividend);
	}
	remainder = Dividend % Divisor;
	if (remainder==0) {
		return Divisor;
	} else {
		return Euclid(Divisor, remainder);
	}
	return -1;
}
//-------------------------------------------------------------------
//
//-------------------------------------------------------------------
int main(){
	int testValue[] = {12, 17, 42, 49, 72, 97, 102, 255, 315, 1023};
	int i,j;
	
	// Part1. Print the heading
	
	cout << setw(10) << "i" << setw(10) << "j" << setw(10) << "GCD(i,j)" << endl;
	
	cout << setw(10) << left << setfill('=')
		<< " " << setw(10) << left << setfill('=') << " "
		<< setw(10) << left << setfill('=') << " " << endl;
	cout << setfill(' ');
	
	// Part 2. Loop over TestValue[] and compute GCDs
	
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			if (i!=j) {
				cout << setw(10) << right << testValue[i]
					<< setw(10) << right << testValue[j]
					<< setw(10) << right
					<< Euclid(testValue[i], testValue[j]) << endl;
			}
		}
	}
	
	// Part 3. Print a footer for the table
	cout << setw(10) << left << setfill('-')
		<< " " << setw(10) << left << setfill('-') << " " 
		<< setw(10) << left << setfill('-') << " " << endl;
	cout << setfill(' ');
	
	return 0;
}
