#include<iostream>
using namespace std;

void changearr(int arr[], int size){
    for (int j=0;j<size;j++){
        arr[j]=2*arr[j];        
    }
}

int  main(){
    int arr[]={1,2,3};
    changearr(arr,3);
    cout << "printing \n";
    for (int k=0;k<3;k++){
        cout<<arr[k]<<" ";
    }
    return 0;

}