// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n+1]; // extra space for new element
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, key;
    scanf("%d %d", &pos, &key); // position (1-based) and element

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = key; // insert element at given position
    n++; // increase array size

    // Print updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
