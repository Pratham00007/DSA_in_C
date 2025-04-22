#include<iostream>
using namespace  std;
int  isPrimeNum(int n){
    bool isPrime=true;
        for (int i=2;i*i<=n;i++){
            if (n%i==0){
                isPrime=false;
                break;
            }
        }
        cout<<isPrime;
    }
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
   isPrimeNum(n);

}
