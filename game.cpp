 
#include <stdio.h>

int main() {
    int n;

    printf("====================================\n");
    printf("       LEVEL-UP SORT GAME        \n");
    printf("====================================\n\n");

    // Ask for number of scores
    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n];
    
    // Input scores
    printf("\nEnter your scores:\n");
    for (int i = 0; i < n; i++) {
        printf("  Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Bubble Sort in ascending order
    printf("\nSorting your scores (Bubble Sort in action)...\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }

        // Show progress after each pass
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", scores[k]);
        }
        printf("\n");
    }

    // Final Output
    printf("\nYour scores are now sorted in ascending order!\n");
    printf("Level-Up Scores: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    printf("\nCONGRATULATIONS! You've leveled up! \n");
    printf("====================================\n");

    return 0;
}




