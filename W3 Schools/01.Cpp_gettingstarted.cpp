#include <iostream> //headerfile that has I/O objects like cin and cout
using namespace std; //means that we can use names for objects and variables from the standard library.
int main(){ //main function
    cout<<"hello world";    //command to print output 
    cout<<"hello world 2"; 
    cout<<"hello world 3\n";    //line break
    cout<<"hello world 4\n\n";  //new line
    cout<<"hello world 5"<< endl; //line break using endl mainpulator
    return 0;   //ends the main fn

    //if you ommit the namespace std in the header you can compensate by using [ std::cout<<"hello world"; ] as the syntax for some objects 
}

//to make newline use \n viz the escape sequence or a endl manipulator - see line 5 to 8 
//to create a blank line use 2 \n 