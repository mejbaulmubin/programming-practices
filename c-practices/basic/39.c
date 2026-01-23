#include <stdio.h>

int main(){
    int x, y, sum=0;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter first number: ");
    scanf("%d", &y);

    if(x>y){
        int temp = y;
        y = x;
        x = temp;
    }

    for(int i=x; i<=y; i++){
        if(i%17==0){
            continue;
        }
        sum = sum+i;
    }

    printf("%d", sum);

}
