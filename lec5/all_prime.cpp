#include<iostream>
using namespace  std;
int  AllPrime(int n){
    for (int j=2;j<=n;j++){
        bool isPrime=true;
        for (int i=2;i*i<=j;i++){
            if (j%i==0){
                isPrime=false;
                break;
            } 
            
        }
        if (isPrime==true){
            cout<<j<<endl;
        }
        
    }
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    AllPrime(n);

}
