//in this one base class has a derived class and this derived class acs as a basse class for anoher derived class 
#include <iostream>
using namespace std;
class A{
    public:
        int land = 100;
};
class B : public A{
    public:
        int land2 = 50;
        void landlost(){
            cout<<"land lost is "<<land-land2<<endl;
        }
};
class C : public B{
    public:
        int land3 = 20;
        void landlost(){
            cout<<"lad lost is "<<land2-land3<<endl;
        }

};
int main(){
    
}