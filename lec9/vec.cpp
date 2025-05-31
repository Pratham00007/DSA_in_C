#include <iostream>
#include <vector>
using namespace std;


// for import c=vector use
// #include <bitss/c++,h> ye sab import karta 
// or #include<vector> ye bas vector import kata for clean usage

// segmanttion fault means trying to access tha parat of memory that is not allowed

int main(){
    vector<int> vec (5,1); // size , each element
    cout<<vec[0];
}