//Topics covered
/*
-How to reference a variable 
-How to get the Memory address 
*/
#include <iostream>
#include <string>
using namespace std;
int main(){

    //A refrence variable is a refrence to a existing variable which is created using the & operator . Syntax is below
    int num = 10;
    int &ref_num = num; //here we refered ref_num to the variable num 
    cout<<num<<endl;    //Both cout prints the same num -> 10
    cout<<ref_num<<endl;

    string food = "Pizza";
    string &meal = food;
    cout<<food<<endl;
    cout<<meal<<endl;

    //the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

    //When a varibable is created in C++ a memory address is assigned to that variable , then when a value is assigned to that variable it gets stored in that emory address
    cout<< &food <<endl;
    cout<< &meal <<endl;
}