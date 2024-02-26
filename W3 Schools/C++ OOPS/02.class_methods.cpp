//methods are functions that belong to a class 
/*
There are 2 ways to define a function that belongs to a class 
1. Inside the class definition
2. Outside the class definintion
-In the following example, we define a function inside the class, and we name it "myMethod".
-we can access the functions the same way we accessed variables , create an object and use the dot syntax


To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:


*/
#include <iostream>
#include <string>
using namespace std;
class myClass{
    public:
    void myMethod(){    //definig the method inside the function
        cout<<"hello"<<endl;
    }
    void myMethod2();   //function declared but defined outside the class
    string present(string student);
};
//Function definition outside the class 
void myClass::myMethod2(){  
    cout<<"defined outside the class"<<endl;
}
string myClass::present(string student){
    string str = cout<<student<<"are present"<<endl;
    return str;
}

//Function with parameters 

int main(){
    myClass obj1;   //object created 
    obj1.myMethod();    //function called 
    obj1.myMethod2();    //function called 
    obj1.present("20");   //function called and parameter passed
    return 0;
}