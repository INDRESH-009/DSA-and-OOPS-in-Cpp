//Topics covered 
/*
-What is a pointer
-syntax to create a pointer 
-3 ways to create a pointer and the preffered way
-Derefrencing a pointer  and understanding refrencing and derefrencing operator
-Modifying pointers 
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    //We know that we can get the address of a variable using the & operator 
    int age = 19;
    cout<<age<<" is stored in the memory address : "<<&age<<endl; 
    // &age gives the memory address of the age variable

    //What is a pointer ? 
    // - A pointer is a variable that stores the memory adress as its value 
    //A pointer variable has the same datatype as the variable whose memory address it stores and it is created using the * operator 
    string food = "pizza";
    string* ptr = &food;    //SYNTAX => datatype* pointer_variable = &variable_name;
    cout<<food<<endl;
    cout<<&food<<endl;  //shows the memeory address of the variable food
    cout<<ptr<<endl;    //shows the memory address of the variable food

    //Three ways to create a pointer
    //string* mystring; // Preferred
    //string *mystring;
    //string * mystring;

    //DEREFRENCING A POINTER
    //we used the pointer variable to get the the memory address of a variable by refrencing operator - & 
    string name = "Indresh";
    //using refrencing operator to create a pointer variable
    string* ptr1 = &name;
    cout<<ptr1<<endl;
    //using derefrencing operator we can get the value of the data stored in that address - "Indresh"
    cout<<*ptr1<<endl;




    //Note that the * sign can be confusing here, as it does two different things in our code:

    //When used in declaration (string* ptr), it creates a pointer variable.
    //When not used in declaration, it act as a dereference operator.
    //refrencing operator - &
    //defrefrencing operator - * (when not used in ptr declaration)


    //MODIFYING POINTERS
    //We can change the pointers value but this will also change the value of the variable refering to that memory address 
    string wealth = "Millionaire";
    string* ptr2 = &wealth;
    cout<<wealth<<endl; //print the value in wealth
    cout<<&wealth<<endl; // get the adddress of the variable wealth
    cout<<ptr2<<endl;   //print the memory address of weath using the ptr2
    cout<<*ptr2<<endl;  //access the memory address of wealth and outpt its value
    *ptr2 = "Billionaire";  //derefrence the ptr2 variable and change its value to "Billionaire"
    cout<<ptr2<<endl;   //though value changed , memory address remains same bcz we are mutaing the value in the memeory address and not the memeory address itsellf 
    cout<<*ptr2<<endl;//access the memory address of wealth and outpt its value
    cout<<wealth<<endl;//print the value in wealth viz also changed into "Billionaire"
     















}