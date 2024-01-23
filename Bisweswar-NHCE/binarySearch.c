#include <stdio.h>

int binarysearch(int a[], int low, int high, int x) {
    if (low > high)
        return -1;
    else {
        int mid = (low + high) / 2;
        if (x == a[mid])
            return mid;
        else if (x > a[mid])
            return binarysearch(a, mid + 1, high, x);
        else
            return binarysearch(a, low, mid - 1, x);
    }
}

int main() {
    int i, n, element, index, a[10];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    index = binarysearch(a, 0, n - 1, element);
    if (index == -1) {
        printf("Element is not found.\n");
    } else {
        printf("Element found at index %d.\n", index);
    }
    return 0;
}
