#include <stdio.h>
#include <conio.h>

int main(){
    int n, i, j, aux;
    printf("\nEste programa crea un vector del tamaño que se desee y muestra al final los valores del vector invertidos.");
    do
    {
        printf("Escriba el valor del vector mayor a 1: ");
        scanf("%d", n);
    } while (n > 2);
    
    int x[n];
    int tam = n - 1;

    for(i = 0; i < n; i = i + 1){
        printf("Escriba el numero del vector x en la posición");
        scanf("%d", x[i]);
    }
    for (i=0, j=n-1; i<tam/2; i++, j--){
        aux = x[i];
        x[i] = x[j];
        x[j] = aux; 
    }
    for (i=0; i<n; i++)
    {
        printf ("%d", x[i]);
    }
    getch();
}