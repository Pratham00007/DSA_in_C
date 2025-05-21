#include <iostream>
using namespace std;
// my method
void rev_arr(int arr[], int size){     
    for (int i=0;i<size/2;i++){
         int temp=arr[i];
         int n1=arr[i];
         int n2=arr[size-1-i];
        arr[i]=n2;
        arr[size-i-1]=temp;
    }  
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int arr[]={1,2,4,5,6,7};
    int si=sizeof(arr)/sizeof(arr[0]);
    rev_arr(arr,si);
}