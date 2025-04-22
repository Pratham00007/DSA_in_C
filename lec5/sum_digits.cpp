#include<iostream>
using namespace  std;
int main(){
    int a,sum=0;
    cout<<"Enter number";
    cin>>a;

    while (a>0){
        int last=a%10;
        sum+=last;
        a=a/10;        
    }
    cout<<sum;
}
