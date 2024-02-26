//Topics covered 
/*
-Basic datatypes
-Creating and initialising variables 
-Declaring multiple variables 
-Identifiers in C++
-Constants in C++
-User input using cin
-Details of each datatype
    -number datatype
    -boolean datatype
    -Character datatype
    -String datatype
-Operators in C++
    -Arithematic operators 
    -Assignment operators
    -Comparision operator
    -Logical operator 
    -Bitwise operator
*/






//datatypes in C++ 
/*
1. int 
2. float & double
3. char
4. strings 
5. boolean

*/
//declaring and initialising a variable 
#include <iostream>
#include <string>
using namespace std;
int main(){
    int x; //declaring 
    x = 10; //initialising

    int y = 100;    //both declaring and initialsing
    cout << y << endl;  //output the variable 

    int z = x+y;
    cout << z << endl;

    //declare many variables
    int a = 10 , b = 13, c = 23, d = 78;
    cout << a+b+c+d <<endl;

    //one value to multiple variables 
    int num1,num2,num3,num4;
    num1 = num2 = num3 = num4 = 100;
    cout<<num1+num2+num3+num4<<endl;

    //C++ identifiers - All C++ variables are identified by unique names , these are called identifiers - here num1 , num2 , x , y , z , a , b  etc are called identifiers .

    //If we want any variable which is readonly and unmutable then it is called as constants - once declared its value cant be changed 
    const int password = 23987;
    //password = 12345; - gives error as value assigned to const variable 
    const float PI = 3.14;
    //note that both declaration and initialisation of a const variable should happen at the same time . YOu cant declare it and leave without initalising . below code snippet gives error 
    //const int weight ;
    //weight = 98;


    //User input using cin
    //it is a predefined variable that reads data from the keyboard using extraction operator (>>)
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    int birthyear = 2024-age;
    cout << "Your birthyear is " << birthyear <<endl;

    //Build a calculator 
    int numa,numb,sum;
    cout<<"Enter the 1st number"<<endl;
    cin>>numa;
    cout<<"Enter the 2nd number"<<endl;
    cin>>numb;
    sum = numa + numb;
    cout << "The sum is " << sum <<endl;

    //DATA TYPES IN C++


    // Data Type	Size	        Description
    // boolean	    1 byte	        Stores true or false values
    // char	        1 byte	        Stores a single character/letter/number, or ASCII values
    // int	        2 or 4 bytes	Stores whole numbers, without decimals
    // float	    4 bytes	        Stores fractional numbers, containing one or more decimals(6-7 decimal digits)
    // double	    8 bytes	        Stores fractional numbers, containing one or more decimals(15 decimal digits)


    //numeric datatype
    int integer = 100;
    float decimal1 = 12.78;
    double decimal2 = 23.89;
    // float vs double

    // The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.

    cout<<"for scientific calculations we use e/E to idicate the power of 10"<<endl;
    float f1 = 35e3;
    double d1 = 12E4;
    cout<<f1<<endl<<d1<<endl;

    //Boolean datatype - value is true or false - a true case has a value 1 and false case has a value 0 - mostly used in conditional testing
    bool isCodingFun = true;
    bool isSnacksGood = false;
    cout<<isCodingFun<<endl;    //output is 1 
    cout<<isSnacksGood<<endl;   //output is 0

    //Character datatype
    //This datatype is used to store single character and is surrounded by quotes - only single quotes ' '
    char letter1 = 'A';
    cout<<letter1<<endl;
    //We can also assign the ascii value of the letter to char variable and get the character it maps 
    char A = 65;
    cout<<A<<endl;
    char B = 66;
    cout<<B<<endl;

    //String datatype
    //It is  type that helps to store sequence of characters , it is not a builtin datatype but it behaves as a basic usage in C++ . It is always surrounded by double quotes " ". 
    //To use strings in your code you should include an additional headerfile called #include <string>

    string sentence = "Hello I am learning C++";
    cout<<sentence<<endl;



    //OPERATORS IN C++

    //1.ARITHEMATIC OPERATORS

    // Operator	Name	    Description	                                    Example
    // +	Addition	    Adds together two values	                    x + y	
    // -	Subtraction	    Subtracts one value from another	            x - y	
    // *	Multiplication	Multiplies two values	                        x * y	
    // /	Division	    Divides one value by another	                x / y	
    // %	Modulus	        Returns the division remainder	                x % y	
    // ++	Increment	    Increases the value of a variable by 1	        ++x	
    // --	Decrement	    Decreases the value of a variable by 1	        --x

    int number1 , number2; 
    cout<<"enter number 1"<<endl;
    cin>>number1;
    cout<<"enter number 2"<<endl;
    cin>>number2;

    cout<<number1+number2<<endl;    //addition
    cout<<number1-number2<<endl;    //substraction
    cout<<number1*number2<<endl;    //multiplication
    cout<<number1/number2<<endl;    //division
    cout<<number1%number2<<endl;    //modulus
    cout<<++number1<<endl;          //pre increment - outputs a number greater
    cout<<--number1<<endl;          //pre decrement - outputs a number lesser 
    cout<<number1++<<endl;          //post increment - outputs same number,only in loops where its called next it increases
    cout<<number1--<<endl;          //post decrement - outputs same number,only in loops where its called next it decreases


    //2.ASSIGNMENT OPERATORS
    // Operator 	Example	        Same As	
    // =	        x = 5	        x = 5	
    // +=	        x += 3	        x = x + 3	
    // -=	        x -= 3	        x = x - 3	
    // *=	        x *= 3	        x = x * 3	
    // /=	        x /= 3	        x = x / 3	
    // %=	        x %= 3	        x = x % 3	
    // &=	        x &= 3	        x = x & 3	
    // |=	        x |= 3	        x = x | 3	
    // ^=	        x ^= 3	        x = x ^ 3	
    // >>=	        x >>= 3	        x = x >> 3	
    // <<=	        x <<= 3	        x = x << 3



    //3.COMPARISION OPERATORS
    // Operator	Name	                    Example	
    // ==	Equal to	                    x == y	
    // !=	Not equal	                    x != y	
    // >	Greater than	                x > y	
    // <	Less than	                    x < y	
    // >=	Greater than or equal to	    x >= y	
    // <=	Less than or equal to	        x <= y

    //4.LOGICAL OPERATOR 
    //     Operator	Name	Description	                                                Example	
    // && 	Logical and	    Returns true if both statements are true	                x < 5 &&  x < 10	
    // || 	Logical or	    Returns true if one of the statements is true	            x < 5 || x < 4	
    // !	Logical not	    Reverse the result, returns false if the result is true	    !(x < 5 && x < 10)

}
