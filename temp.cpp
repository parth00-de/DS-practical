//Write a program for Tracking daily temperatures of 3 cities for a week . 
// The program calculates the average temperature for each day and for the week.

#include <stdio.h>

int main() {
    float temperatures[3][7];
    float total, cityAvg, weeklyAvg = 0.0;
    printf("Enter daily temperatures for 3 cities in degree Celcius(7 days each):\n");
    for (int c = 0; c < 3; c++) {
        printf("\nEnter data for City %d:\n", c + 1);
        for (int d = 0; d < 7; d++) {
            printf("Day %d: ", d + 1);
            scanf("%f", &temperatures[c][d]);
        }
    }
    printf("\nTemperature Tracking Report\n");
    printf("\nSr. No.\tCity\tDay1\tDay2\tDay3\tDay4\tDay5\tDay6\tDay7\tAverage\n");
    for (int c = 0; c < 3; c++) {
        total = 0.0;
        cityAvg = 0.0;

        printf("%d\tCity %d", c + 1, c + 1);
        for (int d = 0; d < 7; d++) {
            printf("\t%.2f", temperatures[c][d]);
            total += temperatures[c][d];
        }
        cityAvg = total / 7;
        printf("\t%.2f\n", cityAvg);
        
        weeklyAvg += cityAvg;
    }
    weeklyAvg /= 3;
    printf("\nOverall weekly average temperature for all cities: %.2f\n", weeklyAvg);

    return 0;
}