#include <iostream>
using namespace std;
template <typename A , typename B>
void displayProd(A num1 , B num2){
    cout<<"The product is "<<num1*num2<<endl;
}
int main(){
    displayProd(1.5,3);
}