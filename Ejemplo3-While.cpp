//Suma 10 números
#include <stdio.h>
#include <conio.h>

int main(){

    int contador, suma, n;

    suma = 0;
    contador = 1;

    printf("Este programa te ayuda a sumar 10 números. '-'\n");

    while (contador <= 10)
    {
        printf(" Dame el %d° número: ", contador);
        scanf("%d", &n);

        suma = suma + n;
        contador = contador + 1;

    }
    
    printf("La suma resultante es: %d", suma);
    
}