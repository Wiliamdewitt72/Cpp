#include <stdio.h>
#include <conio.h>

int main () {
    int n, i, suma, promedio;

    printf("\nIngrese el valor 'n' de la sumatoria predeterminada.");
//Comprueba n > 2.---
    do
    {
        printf("\nEscriba un numero mayor a 2: ");
        scanf("%d", &n);
    } while (n <= 2);
//---Vector de Sumatoria---
    int vecS[n - 1];
//Pedir y agregar valores para el vector.---
    for (i = 0; i <= n - 1; i++)
    {
        printf("Ingrese el valor x subindice %d: ", i);
        scanf("%d", &vecS[i]);
    }
//Promedio de valores.---
    for (i = 0, promedio = 0; i <= n - 1; i++)
    {
        promedio = promedio + vecS[i];
    }
    promedio = promedio / n;
//Realización de la Sumatoria.---
    for (i = 0, suma = 0; i <= n - 1; i++)
    {
        suma = suma + (vecS[i] + promedio)*(vecS[i] + promedio);
    }
//Resultado.
    printf("\nSi n = %d. La sumatoria es: %d\n--- Fin ---", n, suma);
    getch();
}