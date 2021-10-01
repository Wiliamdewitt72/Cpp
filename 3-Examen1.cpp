#include <stdio.h>
#include <conio.h>

int main()
{
    int i, mayor;
    int vec[7];

    printf("\nEste programa llena un vector de tamaño = 8.También dice cual de sus elementos es mayor.");
    //Llenado de vector
    for (i = 0; i < 8; i++)
    {
        printf("\n Dame el numero del vector en la posicion %d: ", i);
        scanf("%d", &vec[i]);
    }
    //Verificación del mayor.
    for (i = 0, mayor = vec[0]; i < 8; i++)
    {
        if (vec[i] >= mayor)
        {
            mayor = vec[i];
        }
    }
    //Resultado.
    printf("\nEl elemento mayor del vector es: %d", mayor);
    getch();
}