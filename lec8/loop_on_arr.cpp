#include<iostream>
using namespace std;
int main(){

    int marks[5]={52,8,92,148,6};
    int size=sizeof(marks)/sizeof(int);
    for (int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }
}