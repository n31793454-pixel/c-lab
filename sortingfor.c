#include <stdio.h>

int main() {
    int n, i, j;
    char order;
    int arr[100]; 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Sort in ascending (A) or descending (D) order? ");
    scanf(" %c", &order);  

    for (i = 0; i < n - 1; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            if ((order == 'A' || order == 'a') && arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } else if ((order == 'D' || order == 'd') && arr[j] < arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
} 
