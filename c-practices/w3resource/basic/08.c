#include <stdio.h>

int main(){
    int d, w, m, y;
    printf("Enter th number of dayes\t: ");
    scanf("%d", &d);
    printf("Number of days :%d\n", d);
    y = (int)(d/365);
    printf("Years : %d\n", y);
    d = d%365;
    w = (int)(d/7);
     printf("Weeks : %d\n", w);
     d = d%7;
     printf("dayes : %d\n", d);

    return 0;
}



// #include <stdio.h>

// int main()
// {
//     int days, years, weeks;

//     days = 1329; // Total number of days

//     // Converts days to years, weeks and days
//     years = days/365; // Calculate years
//     weeks = (days % 365)/7; // Calculate weeks
//     days = days - ((years*365) + (weeks*7)); // Calculate remaining days

//     // Print the results
//     printf("Years: %d\n", years);
//     printf("Weeks: %d\n", weeks);
//     printf("Days: %d \n", days);

//     return 0;
// }
