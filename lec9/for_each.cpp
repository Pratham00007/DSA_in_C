#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec (5,1);
    // for each loop variable will store vector vale instead off index
//  if vector int then i int 
    for(int i : vec){
        cout<<i<<" ";

    }

    vector <char> vec2 ={'a','b','c','d'};
    for(char j : vec2){
        cout<<j<<" ";
    }
    return 0;
}