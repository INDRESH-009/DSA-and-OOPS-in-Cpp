/* TOPICS COVERED
        1.Output statements and escape sequence
        2.Variables and how they are updated/mutated
        3.Arithematic operations , floats , increment decrement and modulo operator , boolean datatype
        4.Find area of circle
        5.Variable naming rules
        6.Calculate Simple intrest
        7.User input - cin 
        8.Relational operators , assignment operators 
        9.char datatype , ASCII values , typecasting

 */

#include <iostream>
#include <math.h>
using namespace std;
int main(){

//======================================== LECTURE - 01 =========================================
//Output statements - use cout
    cout<<"hello";
    cout<<10;
    cout<<13+4;
    cout<<"10*10";
//To print on next line - line break commands (endl , \n)
    cout<<"hello"<<endl;
    cout<<10<<endl;
    cout<<"use backslash n \n";
    cout<<13+4<<endl;
    cout<<"10*10 \n";
    //predict the output
    cout<<"nn\n\nnn\n";
    cout<<"nn/n/nnn/n";
        //predicted output
        /* 
                nn

                nn
                nn/n/nnn/n
         */

//======================================== LECTURE - 02 =============================
//variables - storage units created in memory to store a specific value 
    int x;                  //declaration
    x = 10;                 //initialisation
    cout<<x<<endl;
    int y = 2;              //declaration & initialisation in same line

//Mutating or updating variables 

    //each time you reinitialise a variable , the previous value is erased and the new value is stored in the memory location. So in the order of the latest value above cout is printed in each case. 
    x = 12;
    cout<<x<<endl;      //12
    x = 15;
    cout<<x<<endl;      //15
    x = 20;
    x = 0;
    x = 100;
    cout<<x<<endl;      //100
    //Mutating wrt the old value
    x = x + 10;
    cout<<x<<endl;      //100 + 10 = 110
    x = x * 2;
    cout<<x<<endl;      //110 * 2 = 220
    x = x - 20;
    cout<<x<<endl;      //220 - 20 = 200
    x = x / 2;
    cout<<x<<endl;      //200 / 2 = 100
    //shorthand for mutating wrt old value
    x += 10;
    cout<<x<<endl;      //100 + 10 = 110
    x *= 2;
    cout<<x<<endl;      //110 * 2 = 220
    x -= 20;
    cout<<x<<endl;      //220 - 20 = 200
    x /= 2;
    cout<<x<<endl;      //200 / 2 = 100

//======================================== LECTURE - 03 ======================================

//arithematic operation on int datatype
    int num1 = 2;
    int num2 = 3;
    cout<<num1 + num2<<endl;    //2 + 3 = 5 
    cout<<num1 - num2<<endl;    //2 - 3 = -1
    cout<<num1 * num2<<endl;    //2 * 3 = 6
    cout<<num1 / num2<<endl;    //2 / 3 = 0.666 but gives 0 because internally an operation btw 2 int always gives int and not float, this is happening internally but if you also store the value of 2/3 in a integer variable explicitly then it gives you 0 as the ans no matter if it is a int or float variable becz operation btw 2 int is always a int.
    int div = num1 / num2;
    cout<<div<<endl;            //div = 2/3 = 0.666 = 0
    float ans = num1 / num2;
    cout<<ans<<endl;            //ans = 2/3 = 0.666 = 0
    float newans = 10 / 3;
    cout<<newans<<endl;         //newans = 10/3 = 3.333 = 3 (reason - operands are integers so result is int)

    //if any operand is int and the 2nd one is float the the result is float becz the int is promoter to float before the operation.
    //It is common in many languages to promote an integer to a floating point before doing an operation with another floating point value. If it didn't work this way, there would be many accidental loss-of-precision (or loss-of-information) bugs  (Source : stack-overflow)
    
    newans = 10/3.0;
    cout<<newans<<endl;     //3.33
    newans = 10.0/3;
    cout<<newans<<endl;     //3.33
    newans = 10.0/3.0;
    cout<<newans<<endl;     //3.33


//increment operator 
    x = 10;     
    x = x + 1;      //type 01   -   normal method   -   x = 10+1 = 11
    cout<<x<<endl;
    x += 1;         //type 02   -   shorthand       -   x = 11+1 = 12
    cout<<x<<endl;
    x++;            //type 03   -   post increment  -   12, 12+1 = 13
    cout<<x<<endl;
    ++x;            //type 04   -   pre increment   -   13+1 = 14
    cout<<x<<endl;

//decrement operator
    x = 10;
    x = x - 1;      //type 01   -   normal method   -   x = 10-1 = 9
    cout<<x<<endl;
    x -= 1;         //type 02   -   shorthand       -   x = 9-1 = 8
    cout<<x<<endl;
    x--;            //type 03   -   post decrement  -   8, 8-1 = 7
    cout<<x<<endl;
    --x;            //type 04   -   pre decrement   -   7-1 = 6
    cout<<x<<endl;


//Working of increment decrement operators

    x = 100;
    //POST INCREMENT - current value of x is 100. in post increment operator x++ first the operation occurs with the current value of x and then after the operation is completed the value increases by 1. so first it prints 100 then the value of x becomes 101. 
    cout<<x++<<endl; 
    //PRE INCREMENT - current value of x is 101. in pre increment operator ++x first the value of x is incresed by 1 and the value become 102 . then the current operation of printing x occurs.
    cout<<++x<<endl;
 
    x = 100;
    //POST DECREMENT - current value of x is 100. in post decrement operator x-- first the operation occurs with the current value of x and then after the operation is completed the value decreases by 1. so first it prints 100 then the value of x becomes 99.
    cout<<x--<<endl;
    //PRE DECREMENT - current value of x is 99. in pre decrement operator --x first the value of x is decresed by 1 and the value become 98 . then the current operation of printing x occurs.
    cout<<--x<<endl;

//Modulo operator
    /* creation of modulo operator */
    int a,b;
    a = 10;
    b = 3;
    int q = a/b;
    int r = a-(q*b);
    cout<<"The remainder is "<<r<<endl;

    //using modulo operator
    cout<<a%b<<endl;    //gives reminder when a is divided by b when a > b
    //CASE - 01 = when a>b the a%b gives remainder of a/b 
    cout<<20%7<<endl;   //20/7 - quotient = 2 , remainder = 6
    //CASE - 02 = when a<b the a%b gives "a" as the remainder since it cant divide it 
    cout<<7%20<<endl;         //7/20 - cant divide without decimal = remainder => a => 7
    cout<<4%200<<endl;        //4/200 - cant divide without decimal = reminder => a => 4
    //CASE - 03 = when b is negative the there is no effect on the output
    cout<<10%(-3)<<endl;     //10/3 - r = 1
    cout<<20%(-7)<<endl;     //20/7 - r = 6
    //CASE - 04 = when a is negative then the output also become negative
    cout<<(-10)%3<<endl;     //10/3 - r = 1 output is -1
    cout<<(-20)%7<<endl;     //20/7 - r = 6 output is -6
    //CASE - 05 = when both a and b is negative then by applying case 3 and case 4 output will be negative
    cout<<(-10)%(-3)<<endl;
    cout<<(-20)%(-7)<<endl;

    //Calculate the percentage obtained in 5 subjects
    float x1 = 90;
    float x2 = 91;
    float x3 = 98;
    float x4 = 89;
    float x5 = 100;
    float percent = (x1+x2+x3+x4+x5)/5;
    cout<<"The percentage obtained is "<<percent<<"%"<<endl;

    //Boolean datatype
    bool flag = true;
    cout<<flag;     //1
    flag = false;
    cout<<flag;     //0
    //flag = any non zero number - output is 1
    flag = 10;
    cout<<flag;     //1
    flag = 28;
    cout<<flag;     //1
    //flag = 0 only then it gives 0
    cout<<(10>3)<<endl;     //true - output=1
    cout<<(1>3)<<endl;      //false - output=0
    cout<<(10>=3)<<endl;    //true - output=1
    cout<<(10>=10)<<endl;   //true - output=1
    cout<<(7!=10)<<endl;    //true - output=1
    


//======================================== LECTURE - 04 ======================================
    //calculate area of circle
    float pi = 3.14;
    float radius = 10;
    //area of circle is πr². to use the exponents we have to include the math.h library and use 
    //pow(base,exponent) function. you can also simply use r*r for r².
    float area = pi*pow(radius,2);  //using pow() function
    area = pi*radius*radius;        //normal methos
    cout<<area<<" is the area of the circle"<<endl;

//======================================== LECTURE - 05 ======================================
/* 
 *      1.Variables can start from  alphabet or underscore _ or dollar sign $
        2.No special characters except _,$ are allowed 
        3.reserverd words or keywords are not allowed 
        4.Commas or blanks are not allowed 
 */

//======================================== LECTURE - 06 ======================================
    float principal,rate,time;
    principal = 1000;
    rate = 12;
    time = 2;
    float si = (principal*rate*time)/100;
    cout<<si<<endl;

//======================================== LECTURE - 07 ======================================

    //Getting input from user - cin 
    //Calculate sum of 2 numbers 
    int number1 , number2;
    cout<<"Enter 1st number : ";
    cin>>number1;
    cout<<"Enter 2nd number : ";
    cin>>number2;
    int sum = number1 + number2;
    cout<<"The sum is : "<<sum<<endl;
    //find the square of a number 
    int sqno;
    cout<<"Enter the number you want to square : ";
    cin>>sqno;
    int sq = sqno*sqno;
    cout<<sq<<" is the squre of "<<sqno<<endl;

//======================================== LECTURE - 08 ======================================
    
    /* 

            //Relational operators
 
            1.Equality operator                 ==
            2.Not equal to operator             !=
            3.greater than operator             >
            4.less than operator                <
            5.greater than/equal to             >=
            6.less than/equal to                <=

            //Assignment operator 
            
            1.Assignment operator               =
            2.Addition                          +=
            3.Substraction                      -=
            4.Divide                            /=
            5.multiply                          *=
            6.modulo                            %=
     */

    //Find the result of the code snippet
    bool i = false;
    bool j = false;
    bool k = true;
    cout<<(i==j==k)<<endl;    //i==j -> true , true==k -> true , output is true viz 1
    cout<<(i==(j==k))<<endl;    //j==k -> false, false ==i ->true, output is true viz 1

    //find result
    x=3;
    cout<<(x=7)<<endl;    //x is reassigned from 3 to 7 . so value of x becomes 7 and then 7 is printed

    //find result
    x=3;
    cout<<(x==7)<<endl;   //x is 3 but equated to 7 viz false so output is 0

//======================================== LECTURE - 09 ======================================    
    //char datatype - helps to store any character (num - (0 to 9),symbol,letter(a-z,A-Z)) 
    char ch1 = 'a';
    char ch2 = 'A';
    char ch3 = '#';
    char ch4 = '0';
    cout<<ch1<<endl;
    cout<<ch3<<endl;
    //ASCII values - each character is assigned an integer value called the ascii value 
    //To check the ascii value of any character , convert the type of the character to int and print it
    //This is called type-casting by using [  (datatype-to-convert)variable_to_convert  ]

    //store the ascii value after typecasting ch1 and print it
    int ch1_ascii = (int)ch1;
    cout<<ch1_ascii<<endl;
    //directly typecaste and print the ascii value of ch2 and ch4
    cout<<(int)ch2<<endl;
    cout<<(int)ch4<<endl;
    //
    /* 
           Remember the ascii values of  
            1.'a' = 97
            2.'A' = 65
            3. 0 = 48
     */
    //typecaste boolean to int - we have already observed that when we try to print bool values we get integer (0 for false and 1 for true) . So already internal typecasting between bool to int is occuring and this is how it happens
    bool b1 = true;
    int b1_ascii = (int)b1;
    cout<<b1<<endl;

    cout<<b1+100<<endl; //1+100=101
    cout<<int(ch1)+100<<endl; //97+100=197

    //QUESTION - Get the input of any capital letter from the user and tell him at which position it is present in the alphabet
    char letter;
    cout<<"Enter any capital letter : ";
    cin>>letter;
    //ASCII value of 'A'=65, so any letter-64 = position.
    int position = int(letter)-64;
    cout<<"The position of the letter is : "<<position<<endl;

    //QUESTION - Get integer as input and print exactly half of that number
    int given_num;
    cout<<"Enter any number : ";
    cin>>given_num;
    float half = float(given_num)/2;
    cout<<"The half of the given number is : "<<half<<endl;










}
