/* TOPICS COVERED
        1.if-else statements
        2.Find absolute value of an integer
        3.multiple conditions using && and || operator
        4.Questions and working of multiple conditions by the compiler
        5.check weather  character is a alphabet or not
        6.nested if-else and else-if and questions.
        7.How conditional statements works , revision questions 
        8.Terenary operators
        9.Switch statements
*/

//======================================== LECTURE - 01 ======================================

#include <iostream>
using namespace std;
int main(){

    //QUESTION - Get a number from user and check if it is even or odd
    int user_num;
    cout<<"Enter a number : ";
    cin>>user_num;
    if(user_num%2 == 0){
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }

    //QUESTION - Take a positive number as input and check if it is divisible by 5 or not
    int positive_num;
    cout<<"Enter a positive number : ";
    cin>>positive_num;
    if(positive_num%5 == 0){
        cout<<"The number is divisible by 5"<<endl;
    }
    else{
        cout<<"The number is not divisible by 5"<<endl;
    }

//======================================== LECTURE - 02 ======================================
    //QUESTION - Given an integer print the absolute value of the integer
    //The absolute value of an integer is the numerical value of the integer without considering its sign. 
    int integer_value;
    cout<<"Enter a number : ";
    cin>>integer_value;
    if(integer_value > 0){
        cout<<"The absolute value of "<<integer_value<< " is "<<integer_value<<endl;
    }
    else{
        int absolute_val = -(integer_value);
        cout<<"The absolute value of "<<integer_value<< " is "<<absolute_val<<endl;
    }


//======================================== LECTURE - 03 ======================================
    //Take a 3 positive integer as input and check if it is a 3 digit number or not
    int a;
    cout<<"Enter a number to check if it is 3 digits or not : ";
    cin>>a;
    if(a >= 100 && a<= 999){
        cout<<"The number has 3 digits"<<endl;
    }
    else{
        cout<<"The number doesnt have 3 digits"<<endl;
    }

//======================================== LECTURE - 04 ======================================
    //QUESTION - Take a positive number as input and check if it is divisible by 5 and 3
    int b;
    cout<<"Enter a number to check if it is divisible by 3 and 5 : ";
    cin>>b;
    if(b%3==0 && b%5==0){
        cout<<"The number is divisible by 3 and 5"<<endl;
    }
    else{
        cout<<"The number is not divisible by 3 and 5"<<endl;
    }
    //we can also solve the question in a different approach . Find the smallest number that is a factor of both 3 and 5 and use it to check the divisiblity . In this case 15 is the smallest factor for 3 and 5 so
    if(b%15==0){
        cout<<"The number is divisible by 3 and 5"<<endl;
    }

    //QUESTION - Take a positive number as input and check if it is divisible by 5 or 3 or both
    int c;
    cout<<"Enter a number to check if it is divisible by 3 or 5 : ";
    cin>>c;
    if(c%3==0 && c%5==0){
        cout<<"The number is divisible by both 3 and 5"<<endl;
    }
    else if(c%3==0 || c%5==0){
        cout<<"The number is divisible by either 3 or 5"<<endl;
    }
    else{
        cout<<"The number is not divisible by either 3 or 5"<<endl;
    }

    //HOW MULTIPLE CONDITIONS ARE WORKING INSIDE THE COMPILER 
    /* 
     *          If we use the logical and operator && . Then we write as 
                    if(condition1 && condition2){ 
                        then do this 
                    } 
                In this case the compiler first check if the first condition is true. If it is false , it exits the code block and doesnt check for condition 2 at-all
                Reason -> in && operator even if one condition is false the code ant be executed.




                If we use the logical or operator || . Then we write as 
                    if(condition1 || condition2){ 
                        then do this 
                    } 
                In this case the compiler first check if the first condition is true. If it is true , it executes the code block and doesnt check for condition 2 at-all. 
                Reason -> in || operator even if one condition is true execute the code.
     */

    //Take 3 positive integer as input and check the greatest among them
    int num1,num2,num3;
    cout<<"Enter 3 numbers : ";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" is greatest"<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" is greatest"<<endl;
    }
    else{
        cout<<num3<<" is greatest"<<endl;
    }

//======================================== LECTURE - 05 ======================================
    //write a program to check weather  character is a alphabet or not
    //Algo - get char as input . type-caste to int and u will get ascii value. If ascii value matches 65 to 90 or 97 to 112 , then it  is an alphabet
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=65 && ascii<=90)|| (ascii>=97 && ascii<=122)){
        cout<<"The character is an alphabet"<<endl;
    }
    else{
        cout<<"the character is not an aphabet"<<endl;
    }

//======================================== LECTURE - 06 ======================================
    //QUESTION - take positive integer as input and tell if it is divisible by 5 or 3 but not divisible by 15
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%3==0 || num%5==0){
        if(num%15!=0){
            cout<<"Number is divisible either 3 or 5 but not by 15"<<endl;
        }
        else{
            cout<<"Number is divisible either 3 or 5 and also by 15"<<endl;
        }
        }
    else{
        cout<<"Number is not divisible by 3 or 5"<<endl;
    }

    //QUESTION - take the percentage as input from the user and print the grade based on marks 
    /* 
                        91-100  -   O
                        81-90   -   A+
                        71-80   -   A
                        61-70   -   B+
                        51-60   -   B
                        41-50   -   fail 
     */
    float percent;
    cout<<"Enter your percentage : ";
    cin>>percent;
    if(percent>90){
        cout<<"O grade"<<endl;
    }
    else if(percent>80){
        cout<<"A+ grade"<<endl;
    }
    else if(percent>70){
        cout<<"A grade"<<endl;
    }
    else if(percent>60){
        cout<<"B+ grade"<<endl;
    }
    else if(percent>50){
        cout<<"B grade"<<endl;
    }
    else {
        cout<<"fail"<<endl;
    }

    //QUESTION - Write a program to check if the given character is vowel or consonant
    char alphabet;
    cout<<"Enter an alphabet : ";
    cin>>alphabet;
    if(alphabet == 'a' || alphabet == 'A'){
        cout<<"The character is a vowel"<<endl;
    }
    else if(alphabet == 'e' || alphabet == 'E'){
        cout<<"The character is a vowel"<<endl;
    }
    else if(alphabet == 'i' || alphabet == 'I'){
        cout<<"The character is a vowel"<<endl;
    }
    else if(alphabet == 'o' || alphabet == 'O'){
        cout<<"The character is a vowel"<<endl;
    }
    else if(alphabet == 'u' || alphabet == 'U'){
        cout<<"The character is a vowel"<<endl;
    }
    else{
        cout<<"The character is a consonant"<<endl;;
    }
    
    //QUESTION - Take 3 numbers as input and tell if they can be the sides of a triangle.
    //Concept - sum of 2 sides is greater than the 3rd side always.
    int s1,s2,s3;
    cout<<"Enter 3 sides of a triangle : ";
    cin>>s1>>s2>>s3;
    if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2){
        cout<<"Yes they can be the sides of a triangle"<<endl;
    }
    else{
        cout<<"No they cant be the sides of a triangle"<<endl;
    }
    
    //QUESTION - Predict the output 
    int x = 3, y, z;
    y = x =10;          //y = 10 and x reassigned to x = 10
    z = x<10;           //x<10 is false - so output is 0 . z = 0
    cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;  //x=10,y=10,z=0

    //QUESTION - Predict the output 
    int k = 35;
    cout<<(k==35)<<endl<<(k==50)<<endl<<(k>40)<<endl;
    //k==35 - true => 1
    //k==50 - false => 0
    //k>40  - false => 0

    //QUESTION - Predict the output
    int p = 65;
    char q = 'A';
    if(p==q){                       //char compared with int - char is promoted to int and ascii avalue of A is 65.
        cout<<"Indresh"<<endl;      //code executed
    }
    else{
        cout<<"Rohan"<<endl;
    }


//======================================== LECTURE - 07 =========================================
    //How conditional statements work
    /* 
                    we have seen the syntax of consitional statements as 
                    if(condition){
                        do this 
                    }
                    what happens is that when we write the consition in if-else , it converts to a boolean value of true or false. If true only then the code block is executed.

                    So in place of condition we can also use expressions like numbers , these expressions are converted to boolean and then based on if its true or false its executed.
                    NOTE - We have already seen that any non-zero number , positive or negative is considered as true in boolean and only 0 is considered as false 
     */
    int number;
    if(3+2%5){            //using modulo case (if a<b then a%b = a) = 2%5 = 2,3+2 = 5. if(5) = true. executes
        cout<<"this works"<<endl;
    }
    if((number = 10)){   //assignment (=) operator moves from right to left . first number stores 10 and number is checked. if(10) is true. executes
        cout<<"Even thsi works"<<endl;
    }
    if(-9){    //if(-9) is true. executes 
        cout<<"Surprisingly this works too"<<endl;
    }
    if(0){     //if(0) is false . exits the code block
        cout<<"Doesnt work"<<endl;
    }

    ////QUESTION - Predict the output -Very imp****
    int number1 = 10 , number2 = 20;
    if(x==y)
    ;   
    //if statement is false and ended by ; so the belw code block executes, the space is for confusing..
        cout<<number1<<" "<<number2<<" "<<endl;
        //output = 10  20


    ///QUESTION - Predict the output -Very imp****
    int number3 = 3,number4 = 5;
    if(number3==3)    //if statement is true and it executes , but the else statement is finished by ; so the below block executes and the space is for confusing ....
        cout<<number3<<endl;
    else;
        cout<<number4<<endl;
    //output = 3 
    //         5

//======================================== LECTURE - 07 =========================================

//Get the marks of the student and print fail if its less than 33 else pass using terenary operator
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    (marks>33)?cout<<"Pass"<<endl:cout<<"fail"<<endl;

//get the day.no of the week and print the corresponding day using switch
    int day;
    cout<<"Enter the day number of the week ( 1 to 7) : ";
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid number"<<endl;
    }
    //Design a calculator using switch statement
    int input1,input2;
    char operand;
    cout<<"Enter the operation : ";
    cin>>input1>>operand>>input2;
    switch(operand){
        case '+':
            cout<<input1+input2<<endl;
            break;
        case '-':
            cout<<input1-input2<<endl;
            break;
        case '*':
            cout<<input1*input2<<endl;
            break;
        case '/':
            cout<<input1/input2<<endl;
            break;

    }
    
    
}












