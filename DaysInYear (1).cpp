//------------------------------------------------------------------
// DaysInYear.cpp - verifies that a date is valid in the Gregorian
//  Calendar and computes how many days it is into the year
//      Daria Pacheco - Saint Leo University - 01 March 2021
//------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

//------------------------------------------------------------------
// bool isValidYear(int myYear) -- return true only if myYear is
//      a valid year number.
//------------------------------------------------------------------
bool isValidYear(int myYear) {
    return (myYear > 0);
}

//------------------------------------------------------------------
// bool isValidMonth(int myMonth) -- return true only if myMonth 
//  specifies a valid month number
//------------------------------------------------------------------
bool isValidMonth(int myMonth) {
    return ((myMonth>=1) && (myMonth<=12));
}

//------------------------------------------------------------------
// bool isLeapYear(int myYear) -- returns true if and only if the
//  year myYear is a Leap year in the Gregorian calendar.
//------------------------------------------------------------------
bool isLeapYear(int myYear){
    bool retVal = false;
    if ((myYear%4)==0){
        retVal = true;
        if (((myYear %100)==0) && (myYear %400)!=0){
            
                retVal = false;
        }
    }
    return retVal;
}

//------------------------------------------------------------------
// int daysInMonth (int myMonth, int myYear) -- returns the days in 
//  the only specified by the given myYear and myMonth.
//------------------------------------------------------------------
int daysInMonth (int myMonth, int myYear){
    int retVal = 31;
    if ((myMonth==9) || (myMonth==4) || (myMonth==6) || (myMonth==11)) {
        retVal =30;
     } else {
         if (myMonth==2) {
             if (isLeapYear(myYear)) {
                 retVal = 29;
             }else{
                 retVal = 28;
             }
         }
     }
    return retVal;
}

//------------------------------------------------------------------
// bool isValidDate(int myYear, int myMonth, int myDay) -- returns
//  true only if the parameters specify a valid date in the 
//  gregorian calendar.
//------------------------------------------------------------------
bool isValidDate(int myYear, int myMonth, int myDay) {
    return ((isValidYear(myYear)) && isValidMonth(myMonth) &&
        (myDay > 0) && (myDay <= daysInMonth(myYear, myMonth)) );
}

//------------------------------------------------------------------
// int daysIntoYear(int myYear,int myMonth, int myDay) --
//  return the number of days into the year the date specified
//  myYear, myMonth, myDay.
//------------------------------------------------------------------
int daysIntoYear(int myYear,int myMonth, int myDay){
    int retVal = myDay;
    int pastMonth;
    for (pastMonth=1; pastMonth<myMonth; pastMonth++){
        retVal = retVal + daysInMonth(myYear, pastMonth);
    }
    return retVal;
}

//------------------------------------------------------------------
// MAIN PROGRAM
//------------------------------------------------------------------

int main() {
   int tDay,tMonth, tYear;
   int currentDayNumber;
   
   //Part 1. Get user to enter date
   cout<<"Please enter the year ?>";
   cin>> tYear;
   cout<<"Please enter the month ?>";
   cin>> tMonth;
   cout<<"Please enter the day ?>";
   cin>> tDay;
   
   // Part2. Report 
   if (isValidDate(tYear,tMonth,tDay)){
       currentDayNumber = daysIntoYear(tYear,tMonth,tDay);
       cout << tYear<<"/"<<tMonth<<"/"<<tDay;
       cout << " is " << currentDayNumber;
       cout<< " days into the year " <<endl;
   } else {
       cout << tYear<<"/"<<tMonth<<"/"<<tDay<< " is not a valid date." << endl;
   }
   
   return 0;
}
