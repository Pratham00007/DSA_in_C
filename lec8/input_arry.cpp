#include<iostream>
using namespace std;

int arr(int n){
    int marks[n]={};
    for (int j=0;j<5;j++){
        int k;
        cout<<"enter "<<j<<" no";
        cin>>k;
        marks[j]=k;
    }

    for(int j=0;j<n;j++){
        cout<<marks[j]<<endl;
    }
}



int main(){

arr(5);

}