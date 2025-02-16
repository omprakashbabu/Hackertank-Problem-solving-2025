#include <stdio.h>
#include <stdlib.h> // For abs() function

int diagonalDifference(int n, int arr[n][n]) {
    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += arr[i][i];         // Primary diagonal (left to right)
        secondarySum += arr[i][n - 1 - i]; // Secondary diagonal (right to left)
    }

    return abs(primarySum - secondarySum); // Return absolute difference
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the square matrix

    int arr[n][n]; // Declare square matrix

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Call function and print result
    printf("%d\n", diagonalDifference(n, arr));

    return 0;
}
