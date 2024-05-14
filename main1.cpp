#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //create a program to add 2 numbers
    int a = 10;
    int b = 10;
    int sum = a+b;
    cout<<sum<<endl;

    int num1;
    int num2;
    cout<<"Enter 2 numbers "<<endl;
    cin>>num1;
    cin>>num2;
    int finalans = num1+num2;
    cout<<finalans<<endl;

    //loops 
    //Print srinidhi 100 times
    cout<<"srininhi"<<endl;
    cout<<"srininhi"<<endl;
    for(int i=0;i<=100;i++){
        cout<<"srinidhi"<<endl;
    } 
    void 


    //class creation 
    class BDAStudents{
        //3 - public, private 
        private:
            string regno;
            string name;
            int rollno;
        public:
            void getregno(string rg){
                regno = rg;
            }
            void getname(string n){
                name = n;
            }
            void getrollno(int rn){
                rollno = rn;
            }

             BDAStudents(string rg , string n , int rn){
                regno = rg;
                name = n;
                rollno = rn;
             }
             BDAStudents(){
                regno = " ";
                name =  " ";
                rollno = 0;
             }

             





    };



    


}