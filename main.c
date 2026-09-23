// Author: Sean Donatien
//Date: 9/22/2026
// Description: 2.4 write a statment to accomplish each of the following 

//include stdio header
#include <stdio.h>

// start the main function
int main(void)


{
//2.4 Write a statement (or comment) to accomplish each of the following:

    //State that a program will calculate the product of three integers.
    puts("The program will calculate the product of three intergers.");

    //Prompt the user to enter three integers.
    puts("Please enter three integers: ");
    
    //Define the variable x to be of type int and initialize it to 0.
    // [data type] [variable name] = [value];
    int x = 0;
    
    //Define the variable y to be of type int and initialize it to 0.
    int y = 0;
    
    //Define the variable z to be of type int and initialize it to 0.
    int z = 0;
    
    //Read three integers from the keyboard and store them in variables x, y and z.
    scanf("%d", &x); // don't forget the & to acess the memory location
    scanf("%d", &y);
    scanf("%d", &z);
    
    // test x
    //printf("this is x: %d", x);
    
    //Define the variable result,
    // [data type] [variable name] = [value];
    int result = 0; //don't forget the semicolon
    
    //compute the product of the integers in the variables x, y and z, 
    //and use that product to initialize the variable result.
    result = x * y * z;
    
    //Display "The product is" followed by the value of the int variable result.
    printf("The product is %d", result);

    // return a succesfull interger
}