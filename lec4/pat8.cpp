#include <iostream>
using namespace std;
int main(){

    /*
       1
      121
     12321
    1234321
    */
    int a;
    cout<<"Enter no";
    cin>>a;

    // m-1
    int c=1;
    for (int j=0;j<a;j++){
        int b=1;
        
        for (int k=a-c;k>0;k--){
            cout<<" ";
        }
        for (int l=0;l<j+1;l++){
            cout<<b+l;
        }
        for (int m=3;m>3-j;m--){
            cout<<m-3+j;
        }
        cout<<endl;
        c++;
        
    }

    // m-2
    for (int i=0;i<a;i++){
        // spaces a-i-1
        for (int k=0;k<a-i-1;k++){
            cout<<" ";
        }

        // nums i+1
        for (int j=1;j<=i+1;j++){
            cout<<j;
        }
        // nums2
        for (int k=i;k>0;k--){
            cout<<k;
        }
        cout<<endl;

    }
}