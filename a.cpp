#include <iostream>
#include <string.h>
using namespace std;
class A{
    public:
        int num1;
        void getnum1(){
            cin>>num1;
        }
};
class B : public A{
     public:
        int num1;
        void getnum1(){
            cin>>num1;
        }
}
class C : public B {
    public:
        int num1;
        void getnum1(){
            cin>>num1;
        }
}