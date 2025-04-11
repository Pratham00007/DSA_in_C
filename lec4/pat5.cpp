#include<iostream>
using namespace std;
int main(){
   /*
   1
   21
   321
   4321
   */
  int a;
  cout<<"Enter no.";
  cin>>a;

  for (int i=0;i<a;i++){
    for (int k=i+1;k!=0;k--){
        cout<<k<<" ";

    }
    cout<<endl;
  }

}