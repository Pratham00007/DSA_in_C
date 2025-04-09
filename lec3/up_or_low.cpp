#include <iostream>
using namespace std;
int main(){
   char chracter;
   cout<<"Enter Chracter";
   cin>>chracter;
   int ascii= (int)chracter;
//    no need to do converion on comparing like 'a'>65wll implicit type conversion done by compliler
// also you can use char > 'a' instead to ascii
   if (ascii>=65 and ascii<=90){
    cout<<"UpperCase";
   }else if(ascii>=97 && ascii<=122){
    cout<<"LowerCase";
   }else{
    cout<<"Other";
   }
}