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
// every function is stored in stack 
// in the form of stack frame
// the function which we are curren tly using 
// it is in the the top of stack 
// other func return the value to main then again get out for stack
// return is last line of any func anything after that cant be executed
//  you can return inside a loop 