//CAP and declare 3 numbers to display the number of sum, average and product
//Written by Kimlux Duch
#include <iostream>
using namespace std;

int main(){
    int x,y,z,sum,average,product;

    cout<<"Enter first number: ";
    cin>>x;

    cout<<"Enter Second number: ";
    cin>>y;

    cout<<"Enter Third number: ";
    cin>>z;

    sum= x+y+z;
    cout<< "The Sum of "<<x<< " , "<<y<< " and " <<z<< " is: " <<sum<< " . "<<endl;

    average= (x+y+z)/3;
    cout<< "The Average of "<<x<< " , "<<y<< " and " <<z<< " is: " <<average<< " . "<<endl;

    product= x*y*z;
    cout<< "The product of "<<x<< " , "<<y<< " and " <<z<< " is: " <<product<< " . "<<endl;

    return 0;
}