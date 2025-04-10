#include<iostream>
using namespace std;
int main(){
    int a,sum=0;
    cout << "Enter n: ";
    cin >> a;
    for (int i=0;i<=a;i++){
        sum+=i ;
    }
    cout<<sum<<endl;

    // using while
    int j=0;
    int s=0;
    while (j<=a){
        s+=j;
        j+=1;
    }
    cout<<s;
    return 0;
}