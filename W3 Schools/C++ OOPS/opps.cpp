//OOPS is a programming paradigm and it is better tha procedural programming because :
// Its faster , clear structure is present , helps to keep our code DRY,makes it possible to create full reusable applications with less code and shorter development time.

//Classes and objects 
/* Classes - obj exapmles -> fruits => mango , banana , apple , orange
                             cars => volvo , bmw , benz , audi , rollsroyce
In these case fruits and cars are class and the members are objects 
-So , a class is a template for objects and objects are instance of a class
-When an individual object is created they inheret all the variables and functions from the class 
-C++ is an object oriented programming language and everything is based on classes ad objects 
-Here a car is an object - it has atrributes like weight,color,model etc and it has methods like drive , park , break .
- So in a class we have attributes called variables and methods called functions - These variables and functions within a class are reffered as class members 
-Therefore a class is a user defined datatype that acts as a object constructor / blueprint to create objects 

*/

//CREATE A CLASS AND CREATE OBJECTS WITH IT 
#include <iostream>
#include <string>
using namespace std;

//Defining a class 
class myClass{          //The class
   public:              //Access specifier 
    int myNum;          //Attribute(int variable)
    string myString;    //Attribute(string variable)
};

//Defining a class to create multiple objects 
class car{
    public:
    string brand;
    string model;
    int year;
};
int main(){
    //We have created a class , now we can create a object using the class as a blueprint and access its variables members using . syntax
    myClass obj1;           //object created 
    //Giving value to variables if this object 
    obj1.myNum = 123;
    obj1.myString = "My first class-object in C++";
    //printing the object 
    cout<<obj1.myNum<<endl;
    cout<<obj1.myString<<endl;


    //CREATING MULTIPLE OBJECTS OF THE CAR CLASS
    car car1;
    car1.brand = "Suzuki";
    car1.model = "Ignis";
    car1.year = 2020;

    car car2;
    car2.brand = "BMW";
    car2.model = "7 series";
    car2.year = 2030;

    car car3;
    car3.brand = "Rolls Royce";
    car3.model = "Ghost";
    car3.year = 2040;

    cout<<car1.brand<<car1.model<<car1.year<<endl;

}