//Program to print a sentence on a screen 
//Feb 16th 2024 - 1:32pm - library

#include <iostream>
using namespace std;
int main(){
    cout << "Learning OOPs in C++ \a";
    
}


//---------------------------------DECODING main() function ------------------------------------------ 

//In this program we dont have a class , the entire program is in a standalone function called the main() function 
//The use of parenthesis after the word main in the main function is the defining feature of a function , else the compiler thinks that it is a variable amd these parenthesis is used to hold the function arguments whenever we call them . 
// the word int before the main() function indicates that the return type of this function when called is an integer 
//The curly barckets after the function name is the delimiter or scope of the function -> it tells where the function starts and where the function ends . All the statements to be executed when we call that function is present inside the scope or curly braces 

//---------------------------------SPECIALITY OF MAIN FUNCTION -----------------------------------------

//Always the c++ program starts with executing the main function because by default the compiler or te operating system is designed to call the main function by default . While running the program the control reaches the main function and its absence shows an error
//The main function have the capablity to call any other standalone function or member functions of any objects 

//---------------------------------PROGRAM STATEMENTS -----------------------------------------

//statements are the fundamental units of cpp and they instruct the computer to do something 
//Our program has 2 statements , one is the cout statement and the other is the return statement 
//Each statement is terminated using a semmicolon ;
//The return 0 statement tells the main fnction to return the value 0 to whoever called it , in this case the compiler or operating system . 

//---------------------------------ELIMINATING THE RETURN STATEMENT -------------------------------------

//In C we have declared the main function as void to indicate thatwe ae not returning anything from this function but in c it is not valid.
//The main function is the entry point of a C++ program, and it must return an integer value to indicate the exit status of the program to the operating system. Using void main() violates this requirement because it does not return any value.

//---------------------------------WHITESPACES IN C++ -------------------------------------

//In c++ the compiler ignores all whitespaces and thus , that is the reason we are giving a semicolon after each statement to indicate that it is the end of the statement . 
// But there are exceptions to this rule 
//     1.The preprocesser directive must always be written in single line
//     2. stringconstants,suchas“Every age has a language of its own”,can- not be broken into separate  lines. (If you need a long string constant, you can insert a back- slash (\) at the line break or divide the string into two separate strings, each surrounded by quotes.)


//---------------------------------OUTPUT USING cout ------------------------------------------ 

//The identifier cout is actually an predefined object in c++ that corresponds to standard output stream
// A stream is an abstraction concept that refers to the flow of data
// cout or standard output stream normally flows to the display screen / can be redirected to other output dispay devices.

//---------------------------------INSERTION OPERATOR AND OVERLOADING-------------------------------------

// The operator << is called the insertion or put to operator. It directs the contents of the variable on its right to the object on its left
//In the statement --- cout << "hello"; ---- the insertion operator sends the variable constant "hello" to the cout object which streams the data on the screen

// In C, you’ll recognize << as the left-shift bit-wise operator and wonder how it can also be used to direct output. In C++, operators can be overloaded. That is, they can perform different activities, depending on the context.This is called operator overloading 






