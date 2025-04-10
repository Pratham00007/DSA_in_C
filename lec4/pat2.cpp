#include <iostream>
using namespace std;
int main(){

    /*
    123
    456
    789
    */
   int a;
   cout<<"Enter no";
   cin>> a;
   int l=1;
   for (int i=0;i<a;i++){
    for (int j=0;j<a;j++){
        cout<<l<<" ";
        l++;
    }
    cout<<endl;
   }

   /*
   ABC
   DEF
   GHI
   */
   char ch='A';
   for (int p=0;p<a;p++){
    for (int q=0;q<a;q++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
   }
}