// onlinegdb.com
// Problem Statement: 
// Write a C program to take an integer number from user and print it on screen.

// Required Knowledge: 
// C Input/Output, C Variables,  C Datatypes

#include <stdio.h>

int main()
{
    int num; // Declaring integer variable 'num' to hold value of number entered by user
    
    printf("Enter an integer number:"); // Displaying guide message to user 
    
    scanf("%d", &num); // Read integer number using '%d'
    
    printf("Entered number is %d", num); // Displaying 'num' on screen

    return 0;
}
