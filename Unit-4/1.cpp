#include <iostream>
using namespace std;
template <typename A>
void displayNum(A num1){
    cout<<"You entered the number "<<num1<<endl;
}
int main(){
    displayNum(10.34323);
}