#include <stdio.h>

int main(){
    int a = 1, b = 2;
    int t = ++a+b++;
    printf("%d", t);
    return 0;
}