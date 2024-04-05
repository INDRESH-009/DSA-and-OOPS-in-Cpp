/*
        Topics covered  

        1.For loops
        2.AP , GP using loops
        3.While and do-while loop
        4.Break and continue
        5.Infinite loops
        6.Questions using operators
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

    //Check if a number is composite or not.
    int num;
    cout<<"Enter a number :";
    cin>>num;
    //for composite number it should have factor other than 1 and itself. So we take i from 2 to (num-1)
    for(int i=2;i<=(num-1);i++){
        if(num%i==0){
            cout<<"The number is composite.";
            //if a number has many factors then fr each factor the below statement prints. To avoid that we use break which says if the condition is satisfied atleast once th print as composite and break out of the loop.
            break;
        }
    }
   //Check if the number is prime or composite 
   //In the above program we are giving the prompt in the loop so if it is a composite it will break out of the loop but if it is prime there is no indiction. To solve this we use the below method .
    int checknum;
    cout<<"Enter a number :";
    cin>>checknum;
    bool prime=true;
    for(int i=2;i<=checknum-1;i++){
        if(checknum%i==0){
            prime=false;    
        }
    }
    if(checknum==1) cout<<"1 is neither prime nor composite"<<endl;
    else if(prime) cout<<"The number is prime"<<endl;
    if(!prime) cout<<"The number is composite"<<endl;

    //Continue - if a condition is hit in a loop and we want to elt go / ignore that itegration , we use continue statement,.
    //Print odd numbers form 1 to 20 . In this case we want to reject all the even itegrations.
    for(int i=0;i<=20;i++){
        if(i%2==0)  continue;   //if i is ven skip the further iteration and move on to next.
        cout<<i<<endl;  //cout is not a part of if statements bcz it doesnt have parenthesis.
    }

//======================================== LECTURE - 05 =========================================
/* 
        This entire section is based on infinite loops and how it occurs . So we write it in comments 

        //Question - Predict the output 

                while('a'<'b'){
                    cout<<"hello world"<<endl;
                }

            output - hello world => infinite times 
            Reason - 'a' and 'b' are converted to ASCII values so it means the condition is while(97<98). There is no increment/decrement. Thus the loop after completeting one iteration keeps on executing it infinite times.

        //Question - Predict the output

                int i;
                while (i=10){
                    cout<<i<<endl;
                    i++
                }

            output - 10 => infinite times 
            Reason - first variable i is declared. Then the value of i is initialised in while loop. So the condition inside while loop is just assign i a value of 10,and all non-zero number is true in boolean. Therefore the loop runs, 10 is printed and then incremented to 11, but then again in while loop the value of i is reassigned to 10 and 10 is printed again.So this keeps on hapenning in a loop.

        //Question - Predict the output

                int x=4,y=0,z;
                while(x>=0){
                    x--;
                    y++;
                    if(x==y) continue;
                    else cout<<"x : "<<x<<" y : "<<y<<endl;
                }

            Output - DryRun =>
                x:3    y:1
                x:1    y:3
                x:0    y:4
                x:-1   y:5

        //Question - Predict the output

                int x=4,y=0,z;
                while(x>=0){
                    if(x==y) break;
                    else{
                        cout<<"x : "<<x<<" y : "<<y<<endl;
                        x--;
                        y++;
                    }
                }
            
            Output - DryRun =>
                x:4 y:0
                x:3 y:1

 */
        //Question - Predict the output
        int t = 10;
        while(t/=2) cout<<"hello"<<endl;

        /* DRY RUN 
         *          1st iteration => t=10/2 = 5 
                                     while(5) => true 
                                     print hello 
                    2nd iteration => t=5/2 = 2 
                                     while(2) => true 
                                     print hello 
                    3rd iteration => t=2/2 = 1
                                     while(1) => true 
                                     print hello 
                    4th iteration => t=1/2 = 0
                                     while(0) => false 
                                     loop exits.
         */

//======================================== LECTURE - 06 =========================================
    //Write a program to predict the digits in a number.
    //Concept - divide the number by 10,100,1000 etc, wen we get int=0 then it means no.of zeros that divided it equals no.of digits

    int digitscheck,checker;
    cout<<"Enter a number : ";
    cin>>digitscheck;
    checker = digitscheck;
    int counter = 0;
    while(digitscheck > 0){
        digitscheck /= 10;
        counter ++;  
    }
    cout<<"The number of digits in "<<checker<< " is "<<counter<<endl;


    //Write a program to print the sum of the digits of a given number
    int inputnum,storeinput;
    cout<<"Enter the number whose digits you want to add : ";
    cin>>inputnum;
    storeinput = inputnum;  //we are storing it to use in cout bcz inputnum after loop will become 0
    int sum = 0;
    while(inputnum>0){
        int digit = inputnum%10;
        sum += digit;
        inputnum /= 10;
    }
    cout<<"The sum of the digits in the number "<<storeinput<<" is "<<sum<<endl;



    //write a program to print the reverse of a given number
    int givennum,reverseNum;
    cout<<"Enter the number which you want to reverse : ";
    cin>>givennum;
    while(givennum!=0){
        int eachdigit = givennum%10;
        reverseNum *= 10;
        reverseNum += eachdigit;
        givennum /= 10;
    }
    cout<<"The reversed number is "<<reverseNum<<endl;

    //Print the sum of the series : 1-2+3-4+5-....n;
    int nth_term,summ;
    summ = 0;
    cout<<"Enter the nth term : ";
    cin>>nth_term;
    for(int i=1;i<=nth_term;i++){
        if(i%2==0){
            summ -= i;
        }
        else{
            summ += i;
        }
    }
    cout<<summ<<endl;

    //But this a very inefficient method because each time the loop has to run n times. Thus if we analyse the problem we understand that for the sequence 
    //CASE 01 - If n is even => then each term can be paired up => (1-2)+(3-4)+(5-6)+...((n-1)-n);
    //upon solving each pair we get the value as -1. Thus n terms are grouped as n/2 pairs and the value of each pair is -1. Therefore the final solution is (n/2)*(-1) = -n/2
    //CASE 02 - If n is odd => then each term can be paired up leaving the last term => (1-2)+(3-4)+(5-6)+7;
    //upon solving each pair we get the value as -1,except n. Thus (n-1) terms are grouped into (n-1)/2 pairs and the value of each pair is -1. Therefore the final solution is -1*(n-1)/2 + n;

    int nth,final_sum;
    final_sum=0;
    cout<<"Enter the nth term : ";
    cin>>nth;
    if(nth%2==0){
        final_sum = -(nth/2);
    }
    else{
        final_sum = -(nth-1)/2 + nth;
    }
    cout<<final_sum<<endl;

    //Find the factorial of a number
    int find_factorial,solution;
    cout<<"Enter the number you want to find factorial : ";
    cin>>find_factorial;
    solution = 1;
    for(int i=1;i<=find_factorial;i++){
        solution *= i;
    }
    cout<<"The factorial of the number is "<<solution<<endl;
    

    //Print all the factorial from 1 to h where h is the input
    int h,prod;
    cout<<"Enter the value of h : ";
    cin>>h;
    prod = 1;
    for(int i=1;i<=h;i++){
        prod *= i;
        cout<<i<<"! = "<<prod<<endl;
    }

    //Print the fibonnaci series
    //It is a series where the 1st 2 numbers are 1 and the subsequent digits is equal to the sum of the precceding 2 numbers.
    int fibo,firstterm,secondterm,nextterm;
    cout<<"enter the nth term of the fibonacci series : ";
    cin>>fibo;
    firstterm = 1;
    secondterm = 1;
    cout<<firstterm<<" "<<secondterm<<" ";
    for(int i=3;i<=fibo;i++){   //i=3 becz the 1sr and 2nd term are already printed as 1,1
        nextterm = firstterm + secondterm;
        firstterm = secondterm;
        secondterm = nextterm;
        cout<<nextterm<<" ";
    }
    //Print the nth fibonnaci number
    //to get the nth fibonacci number from the series , instead of printing the series completely we can allow it to run till it reaches nth term and finally print the term
    int fibon,first__term,second__term,next_term;
    cout<<"enter the nth term of the fibonacci series : ";
    cin>>fibon;
    first__term = 1;
    second__term = 1;
    for(int i=3;i<=fibon;i++){   //i=3 becz the 1sr and 2nd term are already printed as 1,1
        next_term = first__term + second__term;
        first__term = second__term;
        second__term = next_term;
    }
    cout<<next_term<<" ";


    //calculate f raised to power g where f and g are user inputs 
    //base and power > 0 
    //base <0 but power > 0
    //power<0   => 2^-3 = 1/2^3.
    float f,g,exponent;
    exponent = 1;
    cout<<"Enter the base : ";
    cin>>f;
    cout<<"Enter the exponent : ";
    cin>>g;
    bool g_negative = false;
    if(g<0){
        g_negative = true;
        g  = -g;
    }
    for(int i=1;i<=g;i++){
        exponent *= f;
    }
    float g_neg;
    if(f==0 && g==0){
        cout<<"not defined"<<endl;
    }
    if(g_negative){
        g_neg = 1/exponent;
        cout<<g_neg<<endl;
    }
    else{
        cout<<exponent<<endl;
    }
}