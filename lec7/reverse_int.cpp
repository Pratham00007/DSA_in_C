#include<iostream>
#include <cmath>
using namespace std;

int reverse(int n){
    int rev=0;
    int pow=10;
    while (n>0){
        rev =(rev*pow)+ (n%10);              
        n=n/10;        
    }
    cout<<rev;
}

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    reverse(n);
}
