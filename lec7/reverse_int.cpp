#include<iostream>
#include <cmath>
using namespace std;

int reverse(int n){
    int rev=0;
    int pow=1;
    while (n>0){
        rev = (n%10)+(rev*pow);
        pow=pow*10;
        n=n/10;
    }
    cout<<rev;
}

//not working

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    reverse(n);

}
