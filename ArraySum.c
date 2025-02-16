#include <stdio.h>

int ArraySum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i]; 
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int ar[n]; // Variable-length array (VLA)

    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    printf("%d", ArraySum(ar, n)); 
    return 0;
}
