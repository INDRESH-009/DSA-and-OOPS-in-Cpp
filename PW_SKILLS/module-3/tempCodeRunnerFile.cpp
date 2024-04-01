#include <iostream>
using namespace std;
int main(){
    float f,g,exponent;
    exponent = 1;
    cout<<"Enter the base : ";
    cin>>f;
    cout<<"Enter the exponent : ";
    cin>>g;
    bool g_negative = false;
    if(g<0){
        g_negative = true;
        g  = -g;
    }
    for(int i=1;i<=g;i++){
        exponent *= f;
    }
    float g_neg;
    if(g_negative){
        g_neg = 1/exponent;
        cout<<g_neg<<endl;
    }
    else{
        cout<<exponent<<endl;
    }
    
}