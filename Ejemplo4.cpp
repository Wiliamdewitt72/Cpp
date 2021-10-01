#include<stdio.h>
#include<conio.h>

#define precio 15.50 //Esto se usa para definir una constante.

int main()
{
    int cantidadcb;
    float costo;

    printf("Bienvenido. Aqui puede calcular el costo total de sus cubrebocas \n ¿Cuantos cubrebocas compro? \n Escriba la cantidad: ");
    scanf("%d", &cantidadcb);

    if (0 > cantidadcb)
    {
        printf("Escriba una cantidad correcta.");
    }
    else
    {
        costo = cantidadcb*precio;
        printf("El costo total de su compra es: $%0.2f", costo);
    }
}