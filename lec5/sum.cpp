#include<iostream>
using namespace std;
int sum(int a,int b){ //parameter
    int s=a+b;
    return s;

}
int min(int a, int b){
    if (a>b){
        return b;
    }else{
        return a;
    }
}
int main(){
    cout<<sum(3,4)<<endl; //argument
    cout<<min(7,5)<<endl;
    return 0;

    //parameter are copy of argument while argument are actual value.
    // which remain same as they aree are literals ex 1 will be 1 never change it will also be same in java
    // argument are litterals

}