//Topics covered
/*
-While loop in C++
-Do while loop
-For loop
-nested loop
-for each loop
-break statement in loops [for and while]
-continue statement in loops [for and while]
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    //Loops can execute a block of code as long as a specified condition is reached.
    //WHILE LOOP

    /* - Syntax
    declare and initialise the variable
    while(condition){
        do the code
        increment/decrement
    }
    */
   cout<<"while loop"<<endl;
    int i=0;
    while(i<10){
        cout<<i<<endl;
        i++;
    }

    //DO-WHILE loop 
    //The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
    /* - Syntax
    declare and initialise the variable
    do{
        do the code
        increment/decrement
    }
    while(condition);
    */
   cout<<"Do while loop"<<endl;
   int y = 3;
   do{
    cout<<y<<endl;
    y--;
   }
   while(y>0);

   cout<<"Do while loop when the condition is false"<<endl;
   int b  = 10;
   do{
    cout<<b<<endl;
    i++;
   }
   while(b>10);

    //FOR_LOOP
    //When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
    //The for loop has 3 statements - initialisation , consition , incrementation 
    //initialisation runs only once when the loop begins , the consition is checked at each iteration and the increment of the initialsised variable happens at each iteration
    int sum = 0;
    for(int i=0;i<=10;i++){
        sum += i;
    }
    cout<<sum<<endl;

    //for loop to print even numbers from 1 to 10
    for(int i=0;i<=10;i=i+2){
        cout<<i<<endl;
    }
    //nested loops - for each iteration of the outer loop the inner loop runs completely 
    for(int i=0;i<2;i++){
        cout<<i<<endl;
        for(int j=10;j<=50;j=j+10){
            cout<<j<<endl;
        }
    }

    //FOR_EACH LOOP
    //There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array (or other data sets):
    /*
    SYNTAX
        for (type variableName : arrayName) {
            // code block to be executed
        }
    */
   string arr[] = {"name","place","age","duty"};
   for(string i: arr){
    cout<<i<<endl;
   }

   //break statement 
   //We have seen in switch statements that break is used to jump out of a switch statement when a condition is meant. Thos avoids unwanted processing which saves time 

   //similarly we can also break out of a loop
   //This example jumps out of a loop when i == 4
   for(int i = 0;i<=10;i++){
    if(i==4){
        break;  //from 4 no number will print and it breaks the loop
    }
    cout<<i<<endl;
   }

   //continue statement 
   //break statements completely breaks out of a loop or switch statement but continue will only break a particular iteration when a particular condition is met
   for(int i=0;i<=10;i++){
    if(i==4){
        continue;   //only 4 will skip 
    }
    cout<<i<<endl;
   }

    //Break and continue in while loops
    int number = 0;
    while(number<=10){
        if(number==4){
            break;
        } 
        cout<<number<<endl;
        number++; 
         
    }

    int num2 = 0;
    while(num2<=10){
        if(num2==4){
            num2++;
            continue;
        }
        cout<<num2<<endl;
        num2++;
        
    }

}