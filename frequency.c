#include <stdio.h>

void countFrequency(int arr[], int n) {
    int a[n];

    for (int i = 0; i < n; i++) {
        if (a[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                a[j] = 1;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }

    printf("\nFrequency of elements:\n");
    countFrequency(arr, n);

    return 0;
}
