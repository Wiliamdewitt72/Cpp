#include <stdio.h>
#include <conio.h>

#define desinfectante 120
//Al momento de introducir datos no meter letras porque el ciclo nunca termina. :O
int main() 
{
    int numero, costo;

    printf("Este programa le da el costo total de sus desinfectantes. \n Ingrese un número de desinfectantes comprados: ");
    scanf("%d", &numero);
    while (numero <= 1)
    {
        printf("Estoy seguro que compró al menos uno '-'\n Introduce la cantidad correcta: ");
        scanf("%d", &numero);
    }
    costo = desinfectante*numero;
    printf("\nEl costo de sus desinfectantes es: $%d \n", costo);
    
}