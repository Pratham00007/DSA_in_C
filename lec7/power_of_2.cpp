#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;

    // with loop

    int num=1;
    bool ispower=false;
    while (num<=n){
        if (num==n){
            ispower=true;
            break;
        }
        num*=2;
    }
    cout<<ispower<<endl;


    // method 2 without using loop


}
