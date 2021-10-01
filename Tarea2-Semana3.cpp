/*Hacer un programa que sume m números dados por el usuario, m lo da el usuario y 
debe ser mayor a dos, los m números a sumar también los da el usuario.*/
#include <stdio.h>
#include <conio.h>

int main(){

    int m, suma, contador, numero;

    suma = 0;
    contador = 1;
    
    printf("Hola, este programa le ayuda a sumar la cantidad de numeros enteros que desee.\n Cuantos numeros desea sumar? Escribalo: ");
    scanf("%d", &m);

    //Valida si habrá más de 2 sumandos.
    while (m < 2)
    {
        printf("Por favor escriba otra cantidad de numeros a sumar: ");
        scanf("%d", &m);
    }
    //Suma de los números introducidos e incremento del contador hasta m.
    while (contador <= m)
    {
        printf("Escriba el %d sumando: ", contador);
        scanf("%d", &numero);
        //Valida que los sumandos esten en (0,100).
        while (0 > numero || numero > 100)
        {
            printf("Escriba un numero del 0 al 100: ");
            scanf("%d", &numero);
        }

        suma = suma + numero;
        contador = contador + 1;
    }
    //
    printf("La suma total es: %d", suma);

    getch();
}