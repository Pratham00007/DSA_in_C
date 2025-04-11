#include<iostream>
using namespace std;
int main(){

    /*
       *
      * *
     *   *
    *     *
     *   * 
      * *
       * 
       * 
     */

// working for 4
     int a=4;
     
     
    //  odd no ko i ke relate kar ke banan hai
    for (int i=0;i<a;i++){
    for (int j=0;j<a-i-1;j++){
    // spaces
    cout<<" ";
    }
    cout<<"*";
    if (i!=0){
        for(int j=0;j<2*i-1;j++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
}

// bottom

for(int i=0;i<a-1;i++){
    //spaces
    for (int j=0;j<i+1;j++){
    cout<<" ";
    }

cout<<"*";
if(i!=a-2){
    // spaces
    for (int j=0;j<2*(a-i)-(a+1);j++){
        cout<<" ";
    }
    cout<<"*";
}
cout<<endl;
}
}
