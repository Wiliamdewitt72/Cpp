#include <stdio.h>
#include <conio.h>

int main()
{
    int n, m, rentad = 0, rentaT = 0, k, j;
    //k: Contador de edificio.| j: Contador de departamento.

    printf("\nLe ayudaremos a calcular los ingresos de sus arrendamientos.");
    //Comprobación e ingreso de cantidad de edificios.
    printf("\n- Cuantos edificios tiene?");
    do
    {
        printf("\n- (Recuerda: minimo 2, maximo 4). R: ");
        scanf("%d", &n);
    } while (n <= 1 || n >= 5);
    // Comprobación e ingreso de cantidad de departamentos.
    printf("\n- Cuantos departamentos tiene cada edificio?");
    do
    {
        printf("\n- (Recuerda: minimo 3, maximo 4). R: ");
        scanf("%d", &m);
    } while (m <= 2 || m >= 5);
//---Ingreso de datos de renta y muestra de suma por edificio.---
    for (k = 1; k <= n; k++)
    {
        //Pide y suma cantidades por departamento.
        for (j = 1; j <= m; j++)
        {
            if (j == 1)// Para diferenciar de que edificio se habla.
            {
                printf("\n\n--- Edificio %d. ---", k);
            }
            // Comprobación de que el ingreso este dentro del rango.
            printf("\nIntroduzca el ingreso percibido del departamento %d.", j);
            do
            {
                printf("\nEl valor debe estar entre $3000 y $6000: ");
                scanf("%d", &rentad);
            } while (rentad < 3000 || rentad > 6000);
            //Suma de las rentas por departamento.
            rentaT = rentaT + rentad;
        }

        printf("\n ---| El ingreso por el edificio %d es: %d |---", k, rentaT);

        rentad = 0;
        rentaT = 0;
    }
    getch();
}