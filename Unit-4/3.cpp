#include <iostream>
using namespace std;
template <class A>
class multiply{
    private:
        A num1;
        A num2;
    public:
        multiply(A num1 , A num2){
            this->num1 = num1;
            this->num2 = num2;
        };
        void finalSol(){
            cout<<num1*num2<<endl;
        }
    };
        int main(){
            multiply<int>obj1(10,16);
            multiply<float>obj2(1.5,2.3);
            obj1.finalSol();
            obj2.finalSol();

        }
