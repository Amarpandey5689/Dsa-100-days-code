#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter key to search: ");
    scanf("%d", &k);

    int found = -1;
    int comparisons = 0;

    for (int i = 0; i < n; i++) {
        comparisons++;

        if (arr[i] == k) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not Found\n");

    printf("Comparisons = %d", comparisons);

    return 0;
}
