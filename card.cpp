#include <stdio.h>

int main() {
    int n = 5;
    int card[5];

    printf("====================================\n");
    printf("    CARD SORTING GAME (Insertion Sort) \n");
    printf("====================================\n\n");

    // Get player’s cards
    printf("Enter %d cards to your hand:\n", n);
    for (int i = 0; i < n; i++) {
        printf("  Card %d: ", i + 1);
        scanf("%d", &card[i]);
    }

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = card[i];
        int j = i - 1;

        while (j >= 0 && card[j] > key) {
            card[j + 1] = card[j];
            j--;
        }
        card[j + 1] = key;
    }

    // Display final sorted hand
    printf("\n Your sorted hand of cards is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", card[i]);
    }
    printf("\n");

    return 0;
}
