#include <stdio.h>

void troca(int *v1, int *v2) {
    int temp = *v2;
    *v2 = *v1;
    *v1 = temp;
}


void insertion_sort (int * v, int n) { 
    if (n <= 1) return; 

    insertion_sort(v, n-1); 
    int i = n-1; 
    while (i > 0 && v[i - 1] > v[i])
    {
        troca(&v[i], &v[i -1]); 
        i--; 
    }
    
}

// insertion sort sem recursão 
/*
void insertion_sort(int* v, int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = v[i]; 

        while (j >= 0 && v[j] > key) {
            troca(&v[j], &v[j + 1]); 
            j--;
        } 
        v[j + 1] = key; 
    }
}
*/

int main() {
    int v[] = {4, 0, 3, 2, 1};
    int n = 5; 
    insertion_sort(v, n); 
    printf("%d", v[0]); 
    return 0; 
}
