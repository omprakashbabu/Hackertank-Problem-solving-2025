#include <stdio.h>

void PlusMinus(int n, float arr[], float result[]) {
    int positive = 0, negative = 0, zero = 0;

    // Count positive, negative, and zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    // Convert to float division
    result[0] = (float)positive / n;
    result[1] = (float)negative / n;
    result[2] = (float)zero / n;
}

int main() {
    int n;
    scanf("%d", &n);

    float arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float result[3]; // Store results in an array
    PlusMinus(n, arr, result);

    // Print the results with 6 decimal places
    printf("%.6f\n%.6f\n%.6f\n", result[0], result[1], result[2]);

    return 0;
}
