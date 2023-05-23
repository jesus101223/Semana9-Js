//Construir un programa en c en donde el usuario defina las dimensiones de una matriz, el programa llena la matriz con numero aleatorios entre cero y 100 y luego calcúlenla matriz traspuesta. 
//El programa debe imprimir la matriz original y la matriz transpuesta.
#include<stdio.h>
#include<stdlib.h>

#define MAX 100
int main() {
    int filas, columnas;
    int i, j;

    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    int matriz[MAX][MAX];

    // Llenar la matriz con números aleatorios entre 0 y 100
    srand(time(NULL));
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; 
        }
    }

    // Imprimir la matriz original
    printf("Matriz original:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcular la matriz traspuesta
    int traspuesta[MAX][MAX];
    for (i = 0; i < columnas; i++) {
        for (j = 0; j < filas; j++) {
            traspuesta[i][j] = matriz[j][i];
        }
    }

    // Imprimir la matriz traspuesta
    printf("\nMatriz traspuesta:\n");
    for (i = 0; i < columnas; i++) {
        for (j = 0; j < filas; j++) {
            printf("%d ", traspuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
