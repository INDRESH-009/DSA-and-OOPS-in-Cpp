#include <iostream>
using namespace std;
class A{
        
    public:
        int num1;
        void input1(){
            cout<<"Enter number : "<<endl;
            cin>>num1;
        }
};
class B{  
    public:
        int num2;
        void input2(){
            cout<<"Enter number : "<<endl;
            cin>>num2;
        }
};
class C : public A, public B{  
    public: 
        void sum(){
            cout<<"Sum is "<< num1+num2<<endl;
        }
};
int main(){
    C demo;
    demo.input1();
    demo.input2();
    demo.sum();
}