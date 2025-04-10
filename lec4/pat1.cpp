/*
want pattern like 
1234
1234
1234
1234

or

123
123
123


*/

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no";
    cin>>a;
    for (int j=1;j<=a;j++){
        for (int k=1;k<=a;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

/*
ABCD
ABCD
ABCD
ABCD
*/

for (int k=0;k<a;k++){
    char ch ='A';
    for (int l=0;l<a;l++){
        cout<<ch<<" ";
        ch++; //it will do implicit type conversion 1st from char to int then int char again bcs ch is char 
        
    }
    cout<<endl;

}
}