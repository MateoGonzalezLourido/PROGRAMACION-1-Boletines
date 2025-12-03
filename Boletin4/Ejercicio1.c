#include<stdio.h>

#include <stdio.h>

#define TAM 3  // Tamaño del array

// Función para leer los números y guardarlos en el array
void leerNumeros(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Introduce el número %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Función para mostrar el contenido del array
void mostrarArray(int arr[], int n) {
    printf("Contenido del array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numeros[TAM];

    leerNumeros(numeros, TAM);  // Llamada a la función para leer números
    mostrarArray(numeros, TAM); // Llamada a la función para mostrar el array

    return 0;
}
