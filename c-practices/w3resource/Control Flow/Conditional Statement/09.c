/*9. Coordinate Quadrant Identification

Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.*/

#include <stdio.h>

int main(){
    int co1, co2;
   
    printf("Enter the coordinates : ");
    scanf("%d %d", &co1, &co2);

    if(co1>0 && co2>0){
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", co1, co2);
    } else if(co1<0 && co2>0){
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", co1, co2);
    } else if(co1<0 && co2<0){
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n", co1, co2);
    } else if(co1>0 && co2<0){
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", co1, co2);
    } else {
        printf("The coordinate point (%d,%d) lies at the origin.\n", co1, co2); 
    }
    return 0;
}