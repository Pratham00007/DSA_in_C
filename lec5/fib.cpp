#include<iostream>
using namespace  std;
int  Fib(int n){
    int n1=0;
    int n2=1;
    cout << n1<<endl<<n2<<endl;
    for (int j=1;j<=n-2;j++){
        
        int n3=n1+n2;
        cout<<n3<<endl;
        n1=n2;
        n2=n3;
    }
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    Fib(n);

}
