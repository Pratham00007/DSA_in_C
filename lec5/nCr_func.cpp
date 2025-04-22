#include<iostream>
using namespace  std;
// real implementation of function
int fact(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n,int r){
    int n_fact=fact(n);
    int r_fact=fact(r);
    int n_minus_r_fact=fact(n-r);

     return (n_fact/(r_fact*n_minus_r_fact));
}

int main(){
    int n,r;
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter r";
    cin>>r;
    
    cout<< nCr(n,r);   

}
