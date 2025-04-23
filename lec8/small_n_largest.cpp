#include<iostream>
using namespace std;

int main(){

int arr[5]={9,2,15,4,7};    
int small=arr[0];
int large=arr[0];

for (int i=0;i<5;i++){
    if (small>arr[i]){
        small=arr[i];
    }
    if(large<arr[i]){
        large=arr[i];
    }
}

cout<<small<<endl;
cout<<large;

}