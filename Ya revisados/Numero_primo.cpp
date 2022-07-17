#include <stdio.h>
#include <conio.h>

int main () {
    
    int n, k, cont; //n = 'Número introducido', k = 'Divisores de n', cont = 'Contador de las veces que el modulo de n es 0'.
    
    printf("\nEste programa determina si un numero mayor a 3 es primo.");
    //Comprobación sobre si n es entero positivo.
    do
    {
        printf("\n Escriba un numero mayor a 3: ");
        scanf("%d", &n);
    } while (n <= 3);
    //---------------------------------------
    for (k = 1, cont = 0; k <= n; k = k + 1) //Este ciclo determina si el número es divisible, asigna cont = 2 si es primo.
    {
        if(n % k == 0)
        {
            cont = cont + 1;
            //Cada vez que 'n' puede ser dividido con residuo 0, se agrega 1 al contador. Si 'n' es primo esto sucederá sólo 2 veces, sino ocurrirá más veces.
        }
    }
    //---------------------------------------
    if(cont == 2) //Siendo k='1' y k='n' esas 2 veces que el modulo de n es cero.
    {
            printf("\n El numero %d es primo", n);
    }
    else
    {
        printf("\n El numero %d no es primo", n);
    }
    printf("\n------");
    getch();
}