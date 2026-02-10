#include <stdio.h>

int main()
{
    int h=0, m=0, s;
    printf("Enter the seconds\t:");
    scanf("%d", &s);

    if(s>=3600){
        h = s/3600;
        s = s%3600;
    }
    
    if (s>=60){
        m = s/60;
        s = s%60;
    }
    
    printf("H:M:S- %d:%d:%d", h, m, s);
}