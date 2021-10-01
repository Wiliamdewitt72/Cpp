#include<conio.h>
#include<stdio.h>

int main()
{
    int Numero;
    printf("Escriba un numero determinaré si es par.");
    scanf("%d", &Numero);

    if (0 == Numero%2)
    {
        printf("El número es par.");
    }
    else
    {
    printf("El número dado es: %d", Numero);
    }
    getch();
}