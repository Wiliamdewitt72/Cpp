#include<stdio.h>
#include<conio.h>

#define precioR 135.00
#define descuento 17

int main()
{
    int cantR;
    float costo;

    printf("Bienvenido. Aqui puede calcular el costo total de su pedido de ramos.\n ¿Cuantos ramos comprara?\n Escriba la cantidad: ");
    scanf("%d", &cantR);

    if (1 > cantR)
    {
        printf("Escriba la cantidad correcta de ramos.");
    }
    else
    {
        if (cantR <= 2)
        {
            costo = cantR*precioR;
            printf("El costo total de su compra es: $%0.2f \n Un placer ayudarlo.", costo);
        }
        else
        {
            costo = (precioR-((precioR*descuento)/100))*cantR;
            printf("El costo total de su compra con descuento por comprar mas de 2 ramos es: $%0.2f \n Un placer ayudarlo.", costo);
        }
    }
}