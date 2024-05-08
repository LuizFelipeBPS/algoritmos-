#include <stdio.h> 


void troca(int *v1, int *v2) {
    int temp = *v2;
    *v2 = *v1;
    *v1 = temp;
}

int posicao_menor (int* v, int n, int k) {
    int menor = v[k]; 
    int posicao_menor = -1; 

    for (int i = 0 + k; i < n; i++) { 
        if (v[i] < menor) { 
            menor = v[i]; 
        }
    }

    for (int i = 0; i < n; i++) { 
        posicao_menor++; 
        if (v[i] == menor) i = n; // encerra o loop apos chegar no limite
    }   

    return posicao_menor; 
}


void selection_sort(int* v, int n) { 
    for (int i = 0; i < n; i++) { 
        int posicaomenor = posicao_menor(v, n, i); 
            if (posicao_menor != i) { 
                troca(&v[posicaomenor], &v[i]); 
            }
    }
}

void selection_sort_recursivo (int* v, int n, int i) { 
    if (i == n-1) return; 

    int posicaomenor = posicao_menor(v, n, i); 
    if (posicaomenor != i) {
        troca(&v[posicaomenor], &v[i]); 
    }

    selection_sort_recursivo(v, n, i+1); 
}

void printarray (int* v, int n) {
    for (int i = 0; i < n; i++) { 
        printf("%d ", v[i]); 
    }

}

int main () { 
    int v[] = {0, 10, 5, 6, 1}; 
    printarray(v, 5); 
    printf("\n"); 
    selection_sort_recursivo(v, 5, 0);
    printarray(v, 5); 
    return 0; 
}