//Hacer un programa que calcule el factorial de un número n mayor o igual a 0.
#include <stdio.h>
#include <conio.h>

int main(){

    long factorial, n, antecesor;

    printf("Escriba el numero del que quiere obtener el factorial: ");
    scanf("%ld", &n);

    //Valida si es entero no negativo
    while (0 > n)
    {
        printf("Escribe un entero no negativo, por favor: ");
        scanf("%ld", &n);
    }
    //Casos
    if (n == 1 || n == 0) // Caso 1 ó 0.
    {
        printf("El factorial del numero %ld es: 1", n);
    }
    else // Caso cualquier entero positivo mayor que 1.
    {
        factorial = n;
        antecesor = n - 1;
     //Calcula el factorial
        while (antecesor >= 1)
            {
                factorial = factorial * antecesor;
                antecesor = antecesor - 1;
            }
        printf("\n El factorial del numero %ld es %ld.", n, factorial);
    }

    getch();
}