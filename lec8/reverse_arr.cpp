#include <iostream>
using namespace std;
// my method
void rev_arr(int arr[], int size){
    int rev_arr[size]={};
   
    int start=0;
    for (int i=size-1;i>=0;i--){
    
        rev_arr[start]=arr[i];
        start+=1;
    }

    for(int j=0;j<size;j++){
        cout<<rev_arr[j]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    rev_arr(arr,5);
    return 0;
}