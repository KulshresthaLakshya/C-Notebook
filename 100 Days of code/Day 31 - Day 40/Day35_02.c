// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n; // handle k > n

    // Rotate using temporary array
    int temp[k];
    // store last k elements
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    // shift remaining elements to right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    // copy k elements to front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
