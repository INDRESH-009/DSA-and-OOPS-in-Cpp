/* how to define a class 
 * data,members and member fn
 3 types of access specifiers 
How to create a object
How to give values for each pobject
 */



#include <iostream>
#include <string.h>
using namespace std;
//define class 
class Car{
   //datamembers and member functions 
   //3 access specifiers - private , public and protected 
   public:
   //parameterised constructor 
   Car(string bn , int y){
    brandname = bn;
    year = y;
   }
   //copy constructor 
   Car(const Car &a){
    brandname = a.brandname;
    year = a.year;
   }
    string brandname;
    int year;
    void printdetails(){
        cout<<"The car brand is "<<brandname<<" and it is manufactured in "<<year;
    }
};
int main(){
    Car IndreshCar("BMW",2022);
    Car Mouryacar("Ferrari",2024);
    //copy constructor 
    Car Charancar(IndreshCar);
    IndreshCar.printdetails();
    Mouryacar.printdetails();
    Charancar.printdetails();

}