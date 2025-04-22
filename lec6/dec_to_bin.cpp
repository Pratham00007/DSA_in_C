#include<iostream>
using namespace std;

int dec_to_bin(int n){
    int bin=0;
    int pow=1;
    while (n>0){
        int num = n/2;
        int rem = n%2;
        bin += rem*pow;
        pow*=10;
        n = num;
    }
    cout<<bin;

}

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    dec_to_bin(n);

}
