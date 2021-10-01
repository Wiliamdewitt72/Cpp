#include <stdio.h>
#include <conio.h>
#include <string.h>

int sumaR(int matriz[3][4], int fila, int columna); // Sumará cada renglón.
void sumasComp(int sumas[3], int fila);             // Comparación de sumas.

int main()
{
    int i, j, fila = 3, columna = 4, matriz[3][4], sumas[3], sum;

    printf("\nEste programa suma los datos de cada reglon de una matriz |3 X 4| de numeros enteros y da datos adicionales al respecto.\nIntroduzca el valor de la matriz en la posicion:");
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("\n-|%d|x|%d|-> ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n---------------\n");
    }
    for (i = 0, j = 0, sum = 0; i < fila && j < fila; i++, j++, sum = 0)
    {
        sum = sumaR(matriz, j, columna);
        sumas[i] = sum;
        printf("\n Suma de la fila %d: %d", j, sumas[i]);
    }
    printf("\n------------------------\n");
    sumasComp(sumas, fila);
}

int sumaR(int matriz[3][4], int fila, int columna)
{
    int i, suma, sumando;
    for (i = 0, suma = 0, sumando = 0; i < columna; i++, suma = 0)
    {
        suma = matriz[fila][i];
        sumando += suma;
    }
    return sumando;
}
void sumasComp(int sumas[3], int fila)
{
    int i, j, n = 0, k = 0;
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < fila; j++)
        {
            if (sumas[i] < sumas[j])
            {
                printf("\nLa suma de la fila %d es menor que la de la fila %d. |%d|<|%d|", i, j, sumas[i], sumas[j]);
                n += 1;
            }

            if (sumas[i] == sumas[j] && j != i)
            {
                printf("\nLas sumas de la fila %d y %d son iguales. |%d|=|%d|", i, j, sumas[i], sumas[j]);
                k += 1;
            }
        }
    }
    if (n = 0)
    {
        printf("\nNo hay relaciones del tipo '|a|<|b|' ");
    }
    if (k = 0)
    {
        printf("\nNo hay relaciones del tipo '|a|=|b|' ");
    }
    printf("\n ---- No se encontraron mas relaciones. ----");
}
