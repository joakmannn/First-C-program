#include <stdio.h>

int main(){

    // Variable = Allocated space in memory to store a value.
    //            We refer to a variable's name to access the stored value.
    //            That variable now behaves as if it was the value it contains.
    //            BUT we need to declare what type of data we are storing. 

    
    int x; //declaration
    x = 123; //initialisation
    int y = 321; //declaration + initialisation

    int age = 21; //integer %d
    float gpa = 2.05; //floating point number %f
    char grade = 'C'; //single character %c
    char name[] = "Bro"; //array of characters %s

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is : %c\n",grade);
    printf("You gpa is : %f\n",gpa);



    return 0;
}