#include<iostream>
using namespace  std;
int main(){
    int n,r;
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter r";
    cin>>r;
    int temp_n=n;
    int n_fact=1;
    while (temp_n>0){
        n_fact*=temp_n;
        temp_n-=1;
    }

    int n_minus_r= n-r ;
    int nr_fact=1;
    while (n_minus_r >0)
    {
        nr_fact*=n_minus_r;
        n_minus_r-=1;

    }
    int temp_r=r;
    int r_fact=1;
    while (temp_r>0){
        r_fact*=temp_r;
        temp_r-=1;
    }
    cout<<(n_fact/(nr_fact * r_fact))<<endl;
    
    
// method 2

    int temp_n2=n;
    int ncr=1;
    while(temp_n2>n-r){
        ncr*=temp_n2;
        temp_n2-=1;
    }
    cout<<(ncr/r_fact);

}
