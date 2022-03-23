//1.Write a program to accept the radius of a cirlce and print the area, and circumference.
//2. Write a program to accept a temperature in Celsius and convert it to Kelvin and Fahrenheit.
#include<iostream> // directive for input and output streams.
using namespace std; // using standard namspace.

int main () //main function
{ // open main function


   //1. To accept radius of circle and print the area and circumference
   double r, area, circumference, pi=3.14; // Declare Variable
    cout<<"Enter The Radius:" ; // Ask the user to Enter 
    cin>>r; // to accept a number and store in radius
    area= pi*r*r; // area formula of a circle
    circumference= 2*pi*r; // circumference formula of a circle
    cout<<"The Area of the Circle is        : "<< area <<endl; //To display the area of the Circle
    cout<<"The circumference of the Circle is : "<< circumference <<endl; //To display the area of the Circumference


   //2. To accept a temperature in Celsius and convert it to Kelvin and Fahrenheit
    double C,K,F; // Declare Variable
    cout<<"Enter degrees in Celsius: "; // Ask the user to enter
    cin>> C; // to accept number and store in celsius
    K= C+273; // Formula of converting Celsius to Kelvin
    F= C*(9/5)+32; // Formula of converting Celsius to Fahrenheit
    cout<< "The Value of "<<C<<" degrees C in K is: "<<K<<"K "<<endl; //To display the value of degrees celsius in Kelvin
    cout<< "The Value of "<<C<<" degrees C in F is: "<<F<<"F "<<endl; // To display the value of degree celsius in Fahrenheit
    return 0; //return 0 to the OS


} // close main function