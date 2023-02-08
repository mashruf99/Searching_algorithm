#include <stdio.h>

void sentinelSearch(int arr[], int n, int key) {
    int last = arr[n-1];
    arr[n-1] = key;
    int i = 0;
    while (arr[i] != key)
        i++;
    arr[n - 1] = last;
    if ((i < n-1) || (arr[n-1] == key))
        printf("%d is present at index %d\n", key, i);
    else
        printf("Element not found\n");
}

int main() {
    int n,i;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    for(i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the element we want to search : ");
    scanf("%d",&key);
    sentinelSearch(arr, n, key);
    return 0;
}
