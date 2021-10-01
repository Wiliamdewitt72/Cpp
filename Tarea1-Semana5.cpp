#include <stdio.h>
#include <conio.h>

int main () {
    int i, n;

    printf("\nEste programa muestra los valores de la serie de Fibonacci del numero 1 hasta el numero que ingrese.");
//Comprueba n > 3.---    
    do
    {
        printf("\nEscriba un numero mayor a 3: ");
        scanf("%d", &n);
    } while (n <= 3);
//Se define y crea el vector según el tamaño deseado, estableciendo algunos valores.---
    int vecF[n-1];
    vecF[0] = 1;
    vecF[1] = 1;
//Se rellena el vector con los terminos de la serie.---
    for(i = 2; i <= n - 1; i++)
    {
        vecF[i] = vecF[i - 1] + vecF[i - 2];
    }
//Imprime la serie de fibonacci (Es decir, el vector).---
    printf("\nLos terminos de la serie desde el 1 hasta %d son: ", n);
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", vecF[i]);
    }
    printf("\n---Fin---");
    getch();
}