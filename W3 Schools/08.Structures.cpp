//Topics covered 
/*
-What are structures
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    //Structures / structs is a way to group several related variables in one place
    //Each variable in a structure is called the member if that structure
    //unlike arrays , a stucture can have variables of different datatype in same struct 


    //structure declaration syntax
    /*
    use the struct keyword and then open a curly braces , then declare the varibles , close the curly braces and then end the struct by giving the name for the structand semicolon
    */
   struct{
    int num;
    bool isPresent;
    float PI;
   }myFirstStructure;

   //Accessing structure members - use the structurename.variable syntax
   myFirstStructure.num = 10;
   myFirstStructure.isPresent = true;
   myFirstStructure.PI = 3.14;

   //Printing member function
   cout<<myFirstStructure.num<<endl;
   cout<<myFirstStructure.isPresent<<endl;
   cout<<myFirstStructure.PI<<endl;


   //One structure with multiple structure variables 
   struct{
    string carbrand;
    string model;
    int yearsUsed;
   }car1,car2,car3;
   
    car1.carbrand = "Maruthi Suzuki";
    car1.model = "Ignis";
    car1.yearsUsed = 10;

    car2.carbrand = "BMW";
    car2.model = "Series 7";
    car2.yearsUsed = 10;

    car3.carbrand = "Rolls Royce";
    car3.model = "Phantom";
    car3.yearsUsed = 50;

    cout<<car1.carbrand<<' '<<car1.model<<" used for "<<car1.yearsUsed<<" years"<<endl;
    cout<<car2.carbrand<<' '<<car2.model<<" used for"<<car2.yearsUsed<<" years"<<endl;
    cout<<car3.carbrand<<' '<<car3.model<<" used for "<<car3.yearsUsed<<" years"<<endl;




}



