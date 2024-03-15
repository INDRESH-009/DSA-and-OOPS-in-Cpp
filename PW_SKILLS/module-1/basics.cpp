#include <iostream>
using namespace std;
int main(){
    /* Arithematic operators */



    /* creation of modulo operator */
    int a,b;
    cout<<"Enter the value of a and b where a>b"<<endl;
    cin>>a;
    cin>>b;
    int q = a/b;
    int r = a-(q*b);
    cout<<"The remainder is "<<r<<endl;
    //using modulo operator
    cout<<a%b<<endl;
}
