#include<stdio.h>

void greeting(char name[]);

void addition( num1,  num2);


int main(){
    int num1,num2;
    greeting("Indresh");
    greeting("Punit");
    greeting("vamsi");
    addition(10,4);
}

void greeting(char name[]){
    printf("%s hello",name);
}
void addition(num1,num2){
    printf(num1+num2);
}