#include <iostream>
using namespace std;
void printhello(){
    cout<<"Hello";
}
int val(){
    cout<<"Helllo";
    return 3;
}
int main(){ 
    printhello();
    cout<<endl;
    int value=val();
    cout<<value<<endl;
    //or direct print
    cout<<val();
    return 0;
}