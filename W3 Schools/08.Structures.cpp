//Topics covered 
/*
-What are structures
-structure declaration syntax
-Accessing structure members 
-Printing member functions
-Simple structure with many variables 
-Named structures
*/
#include <iostream>
#include <string>
using namespace std;

//ignore and comback when you reach named structure topic
 struct Namedstructure{
        int myNum;
        string myString;
    };
 struct newcar{
    string carbrand;
    string model;
    int yearsUsed;
 };
int main(){
    //Structures / structs is a way to group several related variables in one place
    //Each variable in a structure is called the member of that structure
    //unlike arrays , a stucture can have variables of different datatype in same struct 


    //structure declaration syntax
    /*
    use the struct keyword and then open a curly braces , then declare the varibles , close the curly braces and then end the struct by giving the name for the struct and semicolon
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
   }car1,car2,car3; //structure with multiple structure variable
   

   //giving values for each structure variable
    car1.carbrand = "Maruthi Suzuki";
    car1.model = "Ignis";
    car1.yearsUsed = 10;

    car2.carbrand = "BMW";
    car2.model = "Series 7";
    car2.yearsUsed = 10;

    car3.carbrand = "Rolls Royce";
    car3.model = "Phantom";
    car3.yearsUsed = 50;

    //printing the values of each strct vatriable
    cout<<car1.carbrand<<' '<<car1.model<<" used for "<<car1.yearsUsed<<" years"<<endl;
    cout<<car2.carbrand<<' '<<car2.model<<" used for "<<car2.yearsUsed<<" years"<<endl;
    cout<<car3.carbrand<<' '<<car3.model<<" used for "<<car3.yearsUsed<<" years"<<endl;

    //Named structure
    //If you have the strucure name right after the struct keyword then it is a named structure 
    //Each named structure can be considered as a own datatype. This means you can create variables in this structure throughout the program and is always placed before the main function 

    //To declare a variable that uses the structure , use the name of the strcture as the datatype of the variable 
    Namedstructure num1;
    num1.myNum = 10;
    num1.myString = "Ten";
    cout<<num1.myNum<<" - "<<num1.myString<<endl;

    //Use one structure to represent two cars:
    //We have declared newcar structure and now we are going to create variables under the newcar datatype
    newcar carA;
    carA.carbrand = "Suzuki";
    carA.model = "Alto";
    carA.yearsUsed = 10;

    newcar carB;
    carB.carbrand = "Benz";
    carB.model = "S class";
    carB.yearsUsed = 10;

    cout<<carA.carbrand<<' '<<carA.model<<" used for "<<carA.yearsUsed<<" years"<<endl;
    cout<<carB.carbrand<<' '<<carB.model<<" used for "<<carB.yearsUsed<<" years"<<endl;






}



