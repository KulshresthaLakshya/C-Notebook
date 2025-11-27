// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);  // size of array

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add to sum while reading
    }

    printf("%d", sum);

    return 0;
}
