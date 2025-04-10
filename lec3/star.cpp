#include <iostream>
using namespace std;
int main(){
    // 10 star inn sngle line
    int x=10;
    for(int j=0;j<x;j++){
        cout<<"*";
    }
    cout<<endl;

    //  m sars in n line
    int n=5;
    for (int l=0;l<n;l++){
        int m=7;
        for (int o=0;o<m;o++){
            cout<<"*";
        }
        cout<<endl;
    }

    // outside loop deciding no of lines
    //  what is done in each line is decided by inner loop
}