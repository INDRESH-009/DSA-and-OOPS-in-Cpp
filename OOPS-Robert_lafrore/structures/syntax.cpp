/* Defining a simple structure to store student details*/
#include <iostream>
#include <string.h>
using namespace std;
struct studentDetails{  //Struct definition - no memory is allocated 
    string name;
    int rollNo;
    int year;
    float cgpa;
};
int main(){
    studentDetails indresh; //variable initiated in the studentDetails datatype(user-defined) , now memory is allocated.
    indresh.name = "Indresh";   //using the dot/member access operator to acces the members of the dataype & gove value.
    indresh.rollNo = 22;
    indresh.year = 1;
    indresh.cgpa = 9.87;

    studentDetails mourya = {"Mourya",23,1,9.0};    //simple way of giving value to the members of a struct

    //accessing the value of the members in the struct
    cout<<"The student name is "<<indresh.name<<" He is a "<<indresh.year<<"st year student with a cgpa of "<<indresh.cgpa<<" . His roll number is "<<indresh.rollNo;
}