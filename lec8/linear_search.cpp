#include<iostream>
using namespace std;
// maam method: return -1 if not present and index if it exist
int linear_search(int arr[],int size,int ele){
    int temp=0;
    for (int i=0;i<size;i++){
        if (arr[i]==ele){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    
    cout<<linear_search(arr,5,6);
    return 0;
}

// time complaxity O(n)