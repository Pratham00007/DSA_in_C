#include<iostream>
using namespace std;
int main(){
    /*
    1
    12
    123
    1234
    */

    int a;
    cout<<"Enter no";
    cin>>a;
    for (int i=0;i<a;i++){
        int p=1;
        for (int k=0;k<i+1;k++){
            cout<<p<<" ";
            p++;
        }
        cout<<endl;
    }
}