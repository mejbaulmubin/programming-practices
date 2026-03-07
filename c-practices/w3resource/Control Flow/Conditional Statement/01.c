/*
1. Equality Check

Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal
*/

#include <stdio.h>
int main(){
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter Second number: ");
    scanf("%d", &y);

    if(x == y){
        printf("Number1 and Number2 are equal");
    } else {
        printf("Number1 and Number2 are not equal");
    }

    
    return 0;
}