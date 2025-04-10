#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the no :";
    cin>>a;
    int fact=1;
    for(int j=1;j<=a;j++){
        fact*=j;
    }
    cout<<fact;
}
