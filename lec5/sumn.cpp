#include<iostream>
using namespace std;
int sumn(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    cout<<sumn(n);
    return 0;

}