#include <stdio.h>
#include <conio.h>

int main () {
    int i, tam, suma;
    int x[5];

    tam = 6;
    suma = 0;

    printf("Este programa llena un vector.\nDespues suma los valores pares del vector.");
    for(i = 0; i < tam; i = i + 1){
        printf("\n Dame el numero del vector en la posicion %d: ", i);
        scanf("%d", &x[i]);
    }
    for(i = 0; i < tam; i = i + 1){
        if(x[i]%2 == 0){
            suma = suma + x[i];
        }
    }
    printf("La suma de los numeros pares es: %d", suma);
    getch();
}