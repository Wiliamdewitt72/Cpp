#include<stdio.h>
#include<conio.h>

int main()
{
    int Numero;

    printf("Dame un numero entero positivo y determinare si es divisible entre 6.\n Escribe el número: ");
    scanf("%d", &Numero);

    if (0 > Numero)
    {
        printf("Escriba un número mayor que 0.");
    }
    else(0 < Numero);
    {
        if (Numero%6 == 0)
        {
            printf("El número sí es divisible entre 6.");
        }
        else
        {
            printf("El número no es divisible entre 6.");
        }
    }
}