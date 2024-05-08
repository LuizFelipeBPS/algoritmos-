#include <stdio.h>

void bubbleSort(int *v, int n)
{
    if (n <= 1) // Condição de parada da recursão
        return;

    int houveTroca = 0;
    int trocas = 0; // Variável para contar as trocas

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            // Troca os elementos se estiverem fora de ordem
            int temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
            houveTroca = 1;
            trocas++; // Incrementa o contador de trocas
        }
    }

    if (houveTroca)
    {
        // Se houve troca, chama recursivamente o bubbleSort
        bubbleSort(v, n - 1);
    }

    printf("Quantidade de trocas feitas: %d\n", trocas); // Imprime a quantidade de trocas
}

int main()
{
    int vector[5] = {4, 3, 1, 2, 0};
    int n = sizeof(vector) / sizeof(vector[0]);
    
    bubbleSort(vector, n);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}
