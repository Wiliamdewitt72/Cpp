#include <stdio.h>
#include <conio.h>

int main () {
    
    int n, k, cont; //n = 'Número introducido', k = 'Divisores de n', cont = 'Contador de las veces que el modulo de n es 0'.
    
    printf("\nEste programa determina si un numero es primo.");
    //Comprobación sobre si n es entero positivo.
    do
    {
        printf("\n Escriba un entero positivo: ");
        scanf("%d", &n);
    } while (n <= 0);
    // Caso: El numero 1.
    if (n == 1)
    {
        printf("\nEl numero 1 es primo.");
    }
    //Caso: Cualquier entero positivo.
    else
    {
        for (k = 1, cont = 0; k <= n; k = k + 1)
        {
            if(n % k == 0)
            {
                cont = cont + 1;
            }
        }
        if(cont == 2) //Siendo '1' y 'n' esas 2 veces que el modulo de n es cero.
        {
            printf("\n El numero %d es primo", n);
        }
        else
        {
            printf("\n El numero %d no es primo", n);
        } 
    }
    printf("\n------");
    getch();
}