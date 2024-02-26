//TOPICS COVERED 
/*
-What is an array
-How to declare and initialsie an array
-Printing the memory address of the 1st element of the array
-accessing individual members of the array
-Change an array element
-Looping through an array
-Using for-each loop to loop through an array
-Get the size of the array
-Multidimensional arrays

*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    //Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    //To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
    //This creates / declares our array . To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:

    int arrOfNum[5] ={10,20,30,40,50};
    cout<<arrOfNum<<endl;
    //if we want to declare an array and initialise its value seperately like a variable then we cant use the {} to give values instead we have assign the value to each index of an array 
    int numbers[3];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    cout<<numbers<<endl;

    //When you print arrOfNum and numbers directly using cout, you are actually printing the memory address of the first element of each array, not the contents of the arrays themselves. This is because arrays decay into pointers to their first elements when passed to cout without specific indexing.

    //If you want to print the contents of the arrays, you need to loop through the elements and print each one individually, or use some other method to print the array contents.



    //ACCESSING ELEMENTS OF AN ARRAY
    //You access an array element by referring to the index number inside square brackets [].

    //We can omit the array size mentioning , compiler is smart enough to determine it bases on no.of elements
    string cars[] = {"volvo","BMW","benz","rolls royce"};
    cout<<cars[3]<<endl;
    string myfav = cars[1];
    cout<<"My favorite car is "<<myfav<<endl;

    //CHANGE AN ARRAY ELEMENT
    //first access the array elemnt and then assign a new value to that index 
    //i want to replace benz with audi the
    cars[2] = "audi";
    cout<<cars[2]<<endl;


    //Looping through an array ( mainly using the for loop)
    //printing the elements of the cars array by looping through it
    for(int i=0;i<4;i++){
        cout<<cars[i]<<endl;
    } 
    //peinting the index : car name of the cars array using for loop
    for(int i=0;i<4;i++){
        cout<<i<<":"<<cars[i]<<endl;
    }
    //looping throug an array of numbers 
    int arr1[] = {100,200,300,400,500};
    for(int i=0;i<5;i++){
      cout<<arr1[i]<<endl;
    }


    //USING FOR_EACH loop to loop through an array
    int arr[] = {2,4,6,8,10};
    for(int i:arr){
        cout<<i<<endl;
    }

    //HOW TO GET THE SIZE OF an array
    // we cant get the size of an array directly like other languages which have .length function . 
    //You can use the sizeof operator to determine the size of the array in bytes, and then divide it by the size of a single element to get the number of elements. However, this only works if the array is declared in the same scope where you are trying to determine its size, and it doesn't work for arrays passed to functions.

    int numarr[] = {1,2,3,4,5};
    cout<<sizeof(numarr)<<endl;
    //Here we get output as 20 but we have only 5 numbers , Why? -> because the sizeof operator gives the size of the array in bits , so here we have 5 elements and the datatype int occupies 4 bits , so 5x4=20 bits . therefore if we want to find the number of elements in a array divide the total no.of bits by the size of the datatype of the array

    int lengthOfArr = sizeof(numarr)/sizeof(int);
    cout<<lengthOfArr<<" is the length of the array"<<endl;
    //we can also use the for-each loop to loop through an array without knowing its size as the compiler knows it


    //MULTIDIMENTIONAL ARRAYS
    






}

