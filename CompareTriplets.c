#include <stdio.h>

void Points(int alice[], int bob[], int n, int score[]) {
    score[0] = 0; // Alice's score
    score[1] = 0; // Bob's score
    
    for (int i = 0; i < n; i++) {
        if (alice[i] > bob[i]) {
            score[0]++;  // Alice gets a point
        }
        else if (alice[i] < bob[i]) {
            score[1]++;  // Bob gets a point
        }
    }
}

int main() {
    int n = 3;
    int alice[n], bob[n], score[2]; // Score array to store results

    // Input Alice's scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &alice[i]);
    }

    // Input Bob's scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &bob[i]);
    }

    // Call function and pass score array
    Points(alice, bob, n, score);

    // Print Alice's and Bob's scores
    printf("[%d, %d]\n", score[0], score[1]);

    return 0;
}
