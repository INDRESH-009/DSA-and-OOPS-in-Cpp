#include <iostream>
using namespace std;
int fn2();
int main(){
    int j,sum = 0;

    for(j=0;j<=100;j++){
        sum += j;
    }
    cout << sum << endl;
    cout << fn2();
    return 0;
}

int fn2(){
    cout << "This is my 2nd program in C++ \n ";
    return 0;
}
