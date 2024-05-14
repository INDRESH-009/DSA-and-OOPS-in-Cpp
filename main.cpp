//book store inventory 
#include <iostream>
#include <string.h>
using namespace std;
class Book{
    private:
        string name;
        string autor;
        int price;
    public:
        //default constructor 
        Book(){
            name = " ";
            autor = " ";
            price = 0;
        }
        //parameterised constructor
        Book(string n,string a, int p){
            name = n;
            autor = a;
            price = p;
        }
        //Copy constructor 
        Book(const Book &other){
            name = other.name;
            autor = other.autor;
            price = other.price;
        }
        void Display(){
            cout<<"The Book name is "<<name <<" and its written by "<<autor<<" . he price of the book is $"<<price<<endl;
        }
};
int main(){
    //obj1 uses default constructor 
    Book book1;
    book1.Display();
    //obj2 uses parameterised constructor 
    Book book2("5am Club", "Robin Sharma" , 130);
    book2.Display();
    //obj3 uses copy constructor 
    Book book3(book2);
    book3.Display();
}

