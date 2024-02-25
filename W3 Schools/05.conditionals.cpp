//C++ Booleans
// Very often, in programming, you will need a data type that can only have one of two values, like:

// YES / NO
// ON / OFF
// TRUE / FALSE
// For this, C++ has a bool data type, which can take the values true (1) or false (0).
#include <iostream>
using namespace std;
int main(){
    bool isMale = true;
    bool isGood = false;
    cout<<isMale<<endl<<isGood<<endl;


    //The usage of boolean is more common to return a boolean value by comparing values and variables
    //Boolean expression in C++ -> return 1 for T and 0 for F
    int x = 10;
    int y = 12;
    cout<<(x>y)<<endl;  //outputs 0 to show false
    cout<<(x==10)<<endl;//outputs 1 showing true

    //if-else code block
    //write a C++ code to find if the user is eligible to vote 

    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote"<<endl;
    }
    else{
        cout<<"You are not eligible to vote"<<endl;
    }

    //if-else if-else code block
    //write a program to find if the number is less than 10 , less than 20 or less than 30 if the user can give a number less than 30 only

    int num ;
    cout<<"Enter a number less than 30"<<endl;
    cin>>num;
    if(num<10){
        cout<<"number is less than 10"<<endl;
    }
    else if(num>=10 && num<20){
        cout<<"number is less than 20"<<endl;
    }
    else if(num>=20 && num<30){
        cout<<"number is less than 30"<<endl;
    }
    else{
        cout<<"You have entered a number greater than or equal to 30. Please enter a number less than 30";
    }
    //There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statement
    //NOTE that the terenary operator is an expression and not a statement so we need to make sure that we store its value in a variable to retrive it 

    //let us now replace our voting checker using terenary operator
    int myage;  //declare var to store input
    cout<<"enter your age: "<<endl; 
    cin>>myage;  //store input
    string result = (myage >= 18) ? "you can vote" : "You cant vote";   //store the value of the trenary expression in result
    cout<<result<<endl; //print result

    //SWITCH - we use switch statements in C++ if we want tp execute any one code out of the code block we want to execute
    /*switch(expression) {
        case x:
            // code block
            break;
        case y:
            // code block
            break;
        default:
            // code block
    */
   

   //write a c++ program to get the month number and input the name of the month
   int month;
   cout<<"enter the month number"<<endl;
   cin>>month;
   switch (month){
    case 1:
    cout<<"January"<<endl;
    break;
    case 2:
    cout<<"February"<<endl;
    break;
    case 3:
    cout<<"March"<<endl;
    break;
    case 4:
    cout<<"April"<<endl;
    break;
    case 5:
    cout<<"May"<<endl;
    break;
    case 6:
    cout<<"June"<<endl;
    break;
    case 7:
    cout<<"July"<<endl;
    break;
    case 8:
    cout<<"August"<<endl;
    break;
    case 9:
    cout<<"September"<<endl;
    break;
    case 10:
    cout<<"October"<<endl;
    break;
    case 11:
    cout<<"November"<<endl;
    break;
    case 12:
    cout<<"December"<<endl;
    break;
    default:
    cout<<"wrong month"<<endl;
    }
}