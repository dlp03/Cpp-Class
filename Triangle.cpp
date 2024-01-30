//===============================================================
//Triangle.cpp -- This program computes the area of a triangle
//      Daria Pacheco - Saint Leo University - 25 January 2021
//===============================================================

#include <iostream>
using namespace std;

int main (int argc, char** argv) {
    
    // Variable Declarations
    
    double Base;            //Base of Triangle
    double Height;          //Height of Triangle
    double Area;            //Area of Triangle
    
    //Input Data
    
    cout<<"Please enter the base of the triangle?"<<endl;
    cin>>Base;
    cout<<"Please enter height of the triangle?"<<endl;
    cin>>Height;
    
    //Compute Area
    
    Area = Base * Height / 2.0 ;
    
    // Output Results
    
    cout<<"The area of the triangle is "<<Area<<endl;
    return 0;
}