#include<iostream>
using namespace std;
void sum(int arr[], int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"Sum of elements in array is :"<<sum<<endl;
}

void product(int arr[],int size){
    int prod=1;
    for (int i=0;i<size;i++){
        prod*=arr[i];
    }
    cout<<"Product of elments are :"<<prod<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    sum(arr,size);
    product(arr,size);
}
