#include <stdio.h>

void troca(int *v1, int *v2) {
    int temp = *v2;
    *v2 = *v1;
    *v1 = temp;
}

void insertion_sort(int* v, int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = v[i]; // j, key são watchers no array 

        while (j >= 0 && v[j] > key) {
            troca(&v[j], &v[j + 1]); 
            j--;
        } // trocas elementares
        v[j + 1] = key; // depois das trocas o nosso elemento é inserido 
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    printf("Lista ordenada: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
