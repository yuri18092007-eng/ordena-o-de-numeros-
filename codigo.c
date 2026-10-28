#include <stdio.h>

// Bubble Sort
void bubbleSort(int v[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

// Selection Sort
void selectionSort(int v[], int n) {
    int i, j, menor, temp;

    for (i = 0; i < n - 1; i++) {
        menor = i;

        for (j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }

        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }
}

// Quick Sort
void quickSort(int v[], int inicio, int fim) {
    int i = inicio, j = fim;
    int pivo = v[(inicio + fim) / 2];
    int temp;

    while (i <= j) {
        while (v[i] < pivo) i++;
        while (v[j] > pivo) j--;

        if (i <= j) {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }

    if (inicio < j)
        quickSort(v, inicio, j);

    if (i < fim)
        quickSort(v, i, fim);
}

// Mostrar vetor
void mostrar(int v[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

int main() {
    int v1[] = {5, 2, 8, 1, 3};
    int v2[] = {5, 2, 8, 1, 3};
    int v3[] = {5, 2, 8, 1, 3};
    int n = 5;

    bubbleSort(v1, n);
    selectionSort(v2, n);
    quickSort(v3, 0, n - 1);

    printf("Bubble Sort: ");
    mostrar(v1, n);

    printf("Selection Sort: ");
    mostrar(v2, n);

    printf("Quick Sort: ");
    mostrar(v3, n);

    return 0;
}
