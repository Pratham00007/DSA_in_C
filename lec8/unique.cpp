#include <iostream>
using namespace std;

void unique( int arr[],int size){
     for (int i=0;i<size;i++){
        int c=0;
        for (int j=0;j<size;j++){
            if( arr[i]==arr[j]){
                c+=1;
            };
        }
        if (c==1){
            cout<<arr[i]<<" ";
        }
     }
}

int main(){
    int arr[]={1,2,6,8,8,4,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    unique(arr,size);
    return 0;
}