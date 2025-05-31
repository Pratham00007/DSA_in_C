#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int size1,int size2){
    for (int i =0;i<size1;i++){
        for (int j=0;j<size2;j++){
            if (arr1[i]==arr2[j]){
                cout<<arr1[i]<<' ';
                break;
            }
        }
    }
}

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={5,1,6,9};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,arr2,size1,size2);
    return 0;

}