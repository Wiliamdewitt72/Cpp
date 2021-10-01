#include<stdio.h>
#include<conio.h>

int main()
{
    int Numero;
    printf("Dame un numero y determinare si es par o impar.");
    scanf("%d", &Numero);

    if (0 == Numero%2)
    {
        printf("El numero es par.");
    }
    else
    {
        printf("El numero es impar.");
    }
}