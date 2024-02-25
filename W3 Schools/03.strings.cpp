//Topics covered 
/*
-Strings in C++
-String concatenation
    - using + operator 
    - using append function
-Strings and numbers in C++
-Length of string in C++
    -using length()
    -using size()
-Access String characters 
-Change String Characters
-Instering special character in the string
-Getting strings as user input in C++
-ommiting namespace std

*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    //A string variable is a collection of character surrounded by double quotes 
    string name = "Indresh"; //creating and assigning a string variable
    cout<<name<<endl;

    //String concatination 
    //A string can be concatenated using the + operator & using single '' or double " " quotes to add space
    string a = "My name is";
    string fullSentence = a+name;   //joins without adding space btw the 2 sentence
    cout<<fullSentence<<endl;
    fullSentence = a + ' ' + name;  //using the quotes to seperate space 
    cout<<fullSentence<<endl;

    //Using append function
    string john = "John and ";
    string joe = "Joe";
    fullSentence = john.append(joe);  //we can also use the append function to cocnatenate 2 strings 
    cout<<fullSentence<<endl;

    //C++ numbers and strings 
    //C++ uses + operator for both numbers and strings - it adds numbers and concatenates strings

    //add 2 numbers and it gives a number 
    int x = 10;
    int y = 20;
    int sum = x + y;
    cout<<sum<<endl;

    //add 2 strings and it will concatenate them and give a string
    string str1 = "10";
    string str2 = "20";
    string concat = str1+str2;
    cout<<concat<<endl;

    //If you try to add a string and a number you will get a error 
    //string error = x+str1;  cant add different datatype

    //Length of a string in C++
    //We can find the length of a string either by using the length() function or size() function. Its upto you
    int lengthOfa = a.length();
    cout<<lengthOfa<<endl;
    int sizeOfName = name.size();
    cout<<"The length of the string name is "<<sizeOfName<<endl;
    cout<<"The length of the string str1 is "<<str1.length()<<endl;

    //Accessing the characters of a string 
    //You can access the characters in a string by referring to its index number inside square brackets []
    string myBroName = "rohan";
    char firstLetter = myBroName[0];    //indexing starts from 0
    cout<<firstLetter<<endl;
    string myMomName = "Suganthi";
    cout<<"The last letter of my Mom's name is "<<myMomName[myMomName.length()-1]<<endl;

    //Changing specific characters in a string 
    //To change the value of a specific character in a string, refer to the index number, and use single quotes

    string college = "SRK";
    college[2] = 'M';
    cout<<college<<endl;
    string place = "Chennei";
    place[(place.length()-1)-1] = 'a';
    cout<<place<<endl;


    //Special character in C++
    //Sometimes we want to have a string that outputs [I am the "immortal" being] and here we see that a word in the string has quotes around it which may be problematic to code. To solve this we use the below rules 




    //We se the [backslash escape] character to turn special characters into string character
    // Escape character	    Result	       Description
    //      \'	              '	            Single quote
    //      \"	              "	            Double quote
    //      \\	              \	            Backslash
    //      \n             linebreak        newline
    //      \t             tabspace         tabspace


    //if out escape character is double quotes the we use \" around the text immortal
    cout<<"I am the \"immortal\" being"<<endl;
    cout<<"I am the \'immortal\' being"<<endl;
    cout<<"I am the immortal\\indistructable being"<<endl;
    cout<<"I am the \"immortal\" being\nI am death , The destroyer of the world"<<endl;
    cout<<"I am death \t the destroyer of the world"<<endl;


    //How can we get the strings as user input in C++
    //Using cin to store a input string
     string fullname;
     cout<<"Enter your full name"<<endl;
     cin>>fullname;
     cout<<fullname<<endl;
    //In the above example if we give user input as "Indresh Trident" then we recieve the output as "Indresh" only. This is because cin considers space(whitespace,tabs) as terminating character, so it can store only a single word even if you type many 


    //Solution to this - Using getline() function
    //That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
    string yourName;
    cout<<"Enter your name"<<endl;
    getline(cin,yourName);
    cout<<yourName<<endl;
    


    //The issue you're encountering is due to how the cin extraction operator (>>) works in C++. It reads input until it encounters whitespace (spaces, tabs, newlines), which means that if you input "Indresh Trident", only "Indresh" will be stored in fullname, and "Trident" will be left in the input buffer.

    //When you subsequently call getline(cin, yourName), it reads the remaining input in the buffer, which is " Trident" (including the leading space), resulting in an unexpected output.

    //To fix this issue, you need to clear the input buffer after using cin >> fullname to remove the remaining newline character. You can do this using the cin.ignore() function. 
    


    //OMMITING namespace std
    //The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects
    std::cout<<"just ommit namespace std"<<endl;


}