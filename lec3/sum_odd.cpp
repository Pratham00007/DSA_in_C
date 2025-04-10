#include <iostream>
using namespace std;
int main(){
    int a,sum=0;
    cout<<"enter no: ";
    cin>>a;
    for (int i=0;i<=a;i++){
        if (i%2!=0){
            sum+=i;
        }        
    }
    cout<<sum<<endl;
    // using while 
    int k=0;
    int s=0;
    while(k<=a){
        if(k%2!=0){
        s+=k;
        }
        k++;
    }
    cout<<s;
}