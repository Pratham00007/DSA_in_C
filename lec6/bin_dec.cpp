#include<iostream>
#include <cmath>
using namespace std;

int bin_to_dec(int n){
    
    int dec=0;
    int digit;
    int pow=1;
    while (n>0){
        digit=n%10;
        dec+=digit*pow;
        pow*=2;
        n/= 10;
    }
    cout<<dec;

    }

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    bin_to_dec(n);

}
