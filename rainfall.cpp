//Write a program to track rainfall data for 3 cities over 4 months. Using a 2D array,
//  we can store the data, calculate the average rainfall for each city,
//  and display the rainfall data in a tabular format.

#include <stdio.h>

int main() {
    float temps[3][7]; // 3 cities, 7 days
    float daily_avg[7];
    float city_sum[3] = {0}, week_avg[3];
    float day_sum;
    int city, day;

    // Input temperatures
    printf("============================================\n");
    printf("     Temperature Tracking Program\n");
    printf("============================================\n");

    for (city = 0; city < 3; city++) {
        printf("\nEnter temperatures for City %d for 7 days:\n", city + 1);
        for (day = 0; day < 7; day++) {
            printf("  Day %d: ", day + 1);
            scanf("%f", &temps[city][day]);
            city_sum[city] += temps[city][day];
        }
    }

    // Table Header
    printf("\n============================================================\n");
    printf("| Day |   City 1   |   City 2   |   City 3   | Daily Average |\n");
    printf("============================================================\n");

    // Calculate and display daily averages
    for (day = 0; day < 7; day++) {
        day_sum = 0;
        printf("|  %d  |", day + 1);
        for (city = 0; city < 3; city++) {
            printf("   %6.2f  |", temps[city][day]);
            day_sum += temps[city][day];
        }
        daily_avg[day] = day_sum / 3;
        printf("    %6.2f    |\n", daily_avg[day]);
    }
    printf("============================================================\n");

    // Weekly averages
    printf("\nWeekly Average Temperatures:\n");
    printf("--------------------------------------------\n");
    for (city = 0; city < 3; city++) {
        week_avg[city] = city_sum[city] / 7;
        printf("City %d: %.2f °C\n", city + 1, week_avg[city]);
    }
    printf("--------------------------------------------\n");

    // Find city with highest weekly average
    int hottest_city = 0;
    for (city = 1; city < 3; city++) {
        if (week_avg[city] > week_avg[hottest_city]) {
            hottest_city = city;
        }
    }
    printf("\nHottest city of the week: City %d (%.2f °C)\n", hottest_city + 1, week_avg[hottest_city]);
    printf("============================================\n");

    return 0;
}

