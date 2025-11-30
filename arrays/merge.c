#include <stdio.h>

int main() {
    int n1, n2;

    // Taking size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Taking size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging arrays
    int merged[n1 + n2];
    int i, j;

    // Copy arr1 into merged
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2 into merged
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Print merged array
    printf("\nMerged Array:\n");
    for (int k = 0; k < n1 + n2; k++) {
        printf("%d ", merged[k]);
    }

    return 0;
}
