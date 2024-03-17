/*
        Topics covered  

        1.For loops
        2.AP , GP using loops
        3.While and do-while loop
        4.Break and continue
        5.
        6.
        7. 
        8.
        9.
*/
//======================================== LECTURE - 01 =========================================
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    
    //For loop
    //Syntax - for(initialise ; condition ; increment/decrement)
    for(int i = 0; i<= 5;i++){
        cout<<"Good morning"<<endl;
    }
    /* 
     *          Working
                    -first the variable i is declared and initialised . this step runs only once 
                    -   Steps that runs in a loop
                            - condition checks 
                            - loops runs if condition satisfied
                            - increment/decrement occurs 
                            - Repeat
     */

    //QUESTION - Take n as input from user and print hello world n times 
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<"Hello World"<<endl;
    }
    //The variable i is only scoped inside the for loop if it is declared inside it . If we declare the variable outside the loop and only initialsie it in the loop then also it works fine.
    int i;
    for(i=1;i<=3;i++){
        cout<<"hello"<<endl;
    }
    cout<<i<<endl;  //we see that value of i after exiting the loop is 4 because 4 is greater than 3 so the loop breaks.

    //Print numbers from 1 to 100
    for(int i=1;i<=100;i++){
        cout<<i<<endl;
    }
    //Print all even numbers from 1 to 20
    for(int i=0;i<=100;i++){
        if(i%2==0) cout<<i<<endl;
    }
    //Another method for the same question
    for(int i=0;i<=20;i=i+2){
        cout<<i<<endl;
    }
    //Print the table of 19;
    for(int i=1;i<=10;i++){
        cout<<"19 x "<<i<<" = "<<19*i<<endl;
    }
    //Another method to solve the same question - to print upto 19*10 = 190. So i = 19 initially and i = 190 finally . So if any number that is perfectly divisible by 19 in this range are its multiples . So
    for(int i=19;i<=190;i++){
        if(i%19==0) cout<<i<<endl;
    }
    //But this is not a efficient way bec our loop is running 171 times. So the last method is the best way.

//======================================== LECTURE - 02 =========================================

    //Ap - 1,3,5,7 ... n
    //Formula - AP nth term = a+(n-1)d   -    a = 1st term , n = no.of.terms , d = common difference.
    int a,no_of_terms,d;
    cout<<"Enter the 1st term a : ";
    cin>>a;
    cout<<"Enter the no.of terms n : ";
    cin>>no_of_terms;
    cout<<"Enter the common-difference d : ";
    cin>>d;
    
    for(int i=a;i<=a+(no_of_terms-1)*d;i=i+d){
        cout<<i<<endl;
    }

    //Gp - 2,4,8,16,32,64
    //Formula - Gp nth term = a*r^(n-1)   -    a = 1st term , n = no.of.terms , r = common ratio.
    int first_term,no_terms,r;
    cout<<"Enter the 1st term a : ";
    cin>>first_term;
    cout<<"Enter the no.of terms n : ";
    cin>>no_terms;
    cout<<"Enter the common-ratio r : ";
    cin>>r;
    
    for(int i=first_term;i<=a*pow(r,(no_terms-1));i=i*r){
        cout<<i<<endl;
    }
    //Display the following AP - 100,97,94...upto all terms are positive.
    for(int i=100;i>=0;i=i-3){
        cout<<i<<endl;
    }

//======================================== LECTURE - 03 =========================================
    //while loop
    int p = 0;
    while(p<=5){
        cout<<p<<endl;
        p++;
    }

    //do-while loop
    int q = 10;
    do{
        cout<<q<<endl;
        q--;
    }
    while(q>=0);

    //QUESTION- Print all alphabets uppercase with their ASCII values.
    for(int i=65;i<=90;i++){
        char ch = (char)i;
        cout<<i<<" - "<<ch<<endl;
    }
    for(char ch = 'A';ch<='Z';ch++){
        int i = (int)ch;
        cout<<ch<<" - "<<i<<endl;

    }
//======================================== LECTURE - 04 =========================================

    //check if the number is prime or composite
    // int num;
    // cout<<"Enter a number : "<<endl;
    // cin>>num;
    // for(int i=2;i<=num-1;i++){
    //     if(num%i==0){
    //         cout<<"It is a composite number";
    //         break;
    //     }
    // }
    
    // cout<<"It is a prime number"
   
    

    
    
}
