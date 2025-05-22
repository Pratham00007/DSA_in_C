#include<iostream>
using namespace std;

void swaper_max_min(int arr[],int size){
    int max_index=0,min_index=0;

    for (int i=0;i<size;i++){
        if (arr[i]>arr[0]){
            max_index=i;
        }
        if (arr[i]<arr[0]){
            min_index=i;
        }
    }
    swap(arr[max_index],arr[min_index]);

    for (int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }   
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    swaper_max_min(arr,size);
}