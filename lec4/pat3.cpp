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

    /*
    1
    22
    333
    4444
    */

    for(int k=1;k<=a;k++){
        for (int l=0;l<k;l++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    /*
    A
    BB
    CCC
    DDDD
    */

    char ch='A';
    for (int j=0;j<a;j++){
        for(int k=0;k<j+1;k++){
            cout<< ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}