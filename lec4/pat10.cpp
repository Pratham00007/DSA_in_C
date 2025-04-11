#include<iostream>
using namespace std;
int main(){
    /*

    *   *
    ** **
    *****
    *****
    ** **
    *   *
     
    
    */
    int a=4;
    for (int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for (int k=(a*2)-(2*i)-2;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
    }
    cout<<endl;
}
for(int i=0;i<a;i++){
    for(int j=a-i;j>0;j--){
        cout<<"*";
    }
    for(int k=0;k<i*2;k++){
        cout<<" ";
    }
    for(int l=a-i;l>0;l--){
        cout<<"*";
    }
cout<<endl;
}
}
