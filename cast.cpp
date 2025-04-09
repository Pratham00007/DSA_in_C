//  conversion -> implicit-> done by compiler itself or is easy 
//  like float to double storing
// small datatype to big size data type
 
#include <iostream>
using namespace std;
int main(){

    //  its coversion 
    char name='A';
    int val = name;
    cout << val << endl ;

    // is casting
    // explict-> we as a proggrammer do this, big datatype to small datatype

    double price=100.99;
    int newprice=(int)price;
    // its not round off its will only take before  decimal value
    cout << newprice << endl;
    return 0;
}