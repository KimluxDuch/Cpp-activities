#include<iostream>
using namespace std ;


int main (){
   int A=0, B=0, C=0, D=0, F=0, score;
   cout <<" Enter Exam Scores: ";
   for ( int i=0;;i++){
       cin>> score;
       if (score<0){
           break;
       } else if (score >=0 && score <= 59) {
           F+=1;
       } else if ( score >=60 && score <= 69){
           D+=1;
       } else if ( score >=70 && score <= 79){
           C+=1;
       } else if ( score >=80 && score <=89){
           B+=1;
       } else if ( score >=90 && score <= 100){
           A+=1;
       } else if ( score > 100 or !score){
           cout<< " Invalid input, please try again "<<endl;
       }
   }
   cout<< "Number of A's: " << A << endl;
   cout<< "Number of B's: " << B << endl;
   cout<< "Number of C's: " << C << endl;
   cout<< "Number of D's: " << D << endl;
   cout<< "Number of F's: " << F << endl;
  return 0;

}