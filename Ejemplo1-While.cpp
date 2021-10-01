#include <stdio.h>
#include <conio.h>

int main() 
{
    int numero;

    printf("Este programa verifica que el número entero que ingreso sea entero y mayor que 3. \n Ingrese un número: ");
    scanf("%d", &numero);
    while (numero <= 3)
    {
        printf("El número debe ser mayor a 3.\nIntroduce otro número:");
        scanf("%d", &numero);
    
    }
    printf("\nEl número es mayor a 3. :)\n");
    
}