#include <stdio.h>

int main() {
    int arr[10] = {5, 2, 9, 1, 7, 6, 4, 3, 8, 10};
    int i, j, temp;

    printf("Arreglo original: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar arr[j] y arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nArreglo ordenado: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}