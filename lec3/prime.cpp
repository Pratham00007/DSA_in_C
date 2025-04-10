#include <iostream>
using namespace std;
int main(){
    
    int num;
    cout<<"Enter no: ";
    cin>>num;
    // M-1
    int c=0;
    for(int k=2;k<num;k++){
        if (num%k==0){
            c++;
        }
    }
    if (c>0){
        cout<<"Not prime\n";
    }else{
        cout<<"prime\n";
    }

    // m-2

    bool isPrime=true;
    for (int i=2;i<num;i++){
        if (num%i==0){
            isPrime=false;
            break;
        }
    }
    cout<<isPrime;

    // m-3

    // factor of 12
    // 1*12
    // 2*6
    // 3*4
    // 4*3 <- started repeat
    // 6*2
    // 12*1

    // it wil start repeat after root n 
    //  and biggest after is root n * root n =n 
    // at root n factor start  repeating 

    // ex factor of 25
    // 1*25
    // 5*5 <-hihst factor
    // 25*1

    //  so chihech till root n
    

    // so in checking wite i*i<num 

    bool isPrime=true;
    for (int i=2;i*i<=num;i++){ //see i*i<=num
        if (num%i==0){
            isPrime=false;
            break;
        }
    }
    cout<<isPrime;
}