#include<bits/stdc++.h>
// #include <stdio.h>
// #include <stdlib.h>
void indexedSequentialSearch(int arr[], int n, int k) {
    int GN = 3; // Group size for indexing
    int elements[GN], indices[GN], i, set = 0;
    int j = 0, ind = 0, start, end;

    // Create index
    for (i = 0; i < n; i += GN) {
        elements[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }

    // Check if the key is less than the first element
    if (k < elements[0]) {
        printf("Not found\n");
        exit(0);
    } else {
        // Find the block where the key may reside
        for (i = 1; i <= ind; i++) {
            if (k <= elements[i]) {
                start = indices[i - 1];
                end = indices[i];
                set = 1;
                break;
            }
        }
    }

    // If the key is greater than the last indexed element
    if (set == 0) {
        start = indices[ind - 1];
        end = n;
    }

    // Search within the block
    for (i = start; i < end; i++) {
        if (k == arr[i]) {
            printf("Found at index %d\n", i);
            return;
        }
    }
    printf("Not found\n");
}

int main() {
    int arr[] = {6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8; 
    indexedSequentialSearch(arr, n, k);
    return 0;
}