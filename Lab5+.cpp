#include<iostream>
using namespace std;
int main(){
    int n, nd;
    cout<< "Enter a number: ";
    cin>> n;
    for (int i=1; i<=n; i++){
        if(n% i==0){
            nd++;
        }
    } 
    
    if (nd == 2) {
        cout<< "This is a prime number.";
    } else if (nd > 2) {
        cout<<n<< " is a composite number." <<endl;
        cout <<"The factor of "<< n <<" is: ";
        for (int x=2; x <= n; x++){
            if (n %x==0){
                cout<<x<< " ";
            }
        }
    }
    else   {
    cout << "This is not a prime nor composited number.";
    }
    return 0;

}
