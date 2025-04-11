#include<iostream>
using namespace std;
int main(){
    /*
   1
   23
   456
   78910
    */

    int a;
    cout<<"Enter no";
    cin>>a;
    int n=1;
    for (int i=0;i<a;i++){       
        for (int k=0;k<i+1;k++){
           cout<<n<<" ";
           n++;
        }
        cout<<endl;
    }
}