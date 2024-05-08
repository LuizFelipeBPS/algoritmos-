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

int main() {
    int v[] = {4, 0, 3, 2, 1};
    int n = 5; 
    insertion_sort(v, n); 
    printf("%d", v[0]); 
    return 0; 
}
