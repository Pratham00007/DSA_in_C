#include<iostream>
using namespace std;
int main(){
/*
1111
 222
  33
   4
*/

// m-1 (myself)
int a;
cout<<"Enter no";
cin>>a;
for (int i=1;i<=a;i++){
   for(int k=1;k<i;k++){
    cout<<"  ";
   }
   for(int l=a;l>i-1;l--){
    cout<<i<<" ";
   }
   cout<<endl;
    }   

   // m-2
   for (int j=0;j<a;j++){
      for (int k=0;k<j;k++){
         cout<<"  ";
      }
      for(int l=0;l<a-j;l++){ // try to relate with j an a ie o by user and outermost loop
         cout<<j+1<<" ";
      }
      cout<<endl;
   }
}