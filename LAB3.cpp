//CAP to accept age and name. If age is even, print name 10 times. If odd, print 5 times.
#include<iostream> //Directive for input and output stream
using namespace std; //using standard namespace


int main () //Main function
{

    string name; //declare value name
    int age; //declare age

    cout<<"Enter Your age :"; //asking user to enter age
    cin>>age; //accept value and store age
    cout<<"Enter Your name :"; //asking user to enter name
    cin>>name; //accept name

   if(age%2==0) //formula condition for even number
   {
       for(int x=0;x<10;x++) //print name 10times
       {
           cout<<name<<endl;
       }
   }
   else //if the same condition false
   {
       for (int x=0 ;x<5;x++) //print name 5times
       {
           cout<<name<<endl;
       }
   }
   return 0;
}// close function
