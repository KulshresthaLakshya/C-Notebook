// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n+1]; // extra space for new element
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int i;
    // Find position to insert
    for (i = n - 1; i >= 0 && arr[i] > key; i--) {
        arr[i+1] = arr[i]; // shift elements to right
    }

    arr[i+1] = key; // insert the key
    n++; // increase array size

    // Print updated array
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
