#include <iostream>
using namespace std;
int main(){

    /*

    *
    * *
    * * *
    * * * *

    */
    int a;
    cout<<"Enter no: ";
    cin>>a;
    for(int j=1;j<=a;j++){
        for (int k=0;k<j;k++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
}