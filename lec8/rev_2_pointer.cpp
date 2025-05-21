#include <iostream>
using namespace std;
//  2 pointer approach ie in this 2 pointers are ther
// 1 goes forward other backward

void rev_arr(int arr[],int size){
    for (int i=0;i<size/2;i++){
        swap(arr[i],arr[size-1-i]);
    }
    for (int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    rev_arr(arr,arr_size);
    return 0;
}