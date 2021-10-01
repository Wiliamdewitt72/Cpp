#include <stdio.h>
#include <conio.h>

int main (){

    long factorial, n, contador;

    do
    {
    printf("\n\n  Escriba el numero del que quiere obtener el factorial. Debe ser un numero no negativo: ");
    scanf("%ld", &n);
    } while (n<0);
//Para (las variables con estos valores iniciales; con estas condiciones; incrementa o decrementa)
    for (factorial = 1, contador = 1 ; contador <= n ; contador = contador + 1) 
    {
        factorial = factorial * contador;
    }
    printf("\n  El factorial es: %ld \n  ---", factorial);

    getch();
}