#include <iostream>
using namespace std;
class A{
    private:
        int a;
    public:
        int num1;
        void input1(){
            cout<<"Enter number : "<<endl;
            cin>>num1;
        }
};
class B : public A{
    public:
        int num2;
        void input2(){
            cout<<"Enter number : "<<endl;
            cin>>num2;
        }
        void sum(){
            cout<<"Sum is "<<num1+num2<<endl;
        }
};
int main(){
    B demo;
    demo.input1();
    demo.input2();
    demo.sum();
}