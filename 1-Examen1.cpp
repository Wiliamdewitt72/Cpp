#include <stdio.h>
#include <conio.h>

int main(){
    int n, plato = 80, costo, dia;

    printf("\n||| Este programa calcula el costo total de sus platos de pozole. |||");
//Validación de cantidad de platos.
    do//El ciclo válida si se compro un plato, cantidad miníma 1
    {
        printf("\nLa compra minima es 1 plato.\nIntroduzca la cantidad de platos a comprar: ");
        scanf("%d", &n);
    } while (n <= 0);
//Elección de día
    printf("\nEscriba el numero del de dia de hoy para ver las promociones vigentes a su compra.");
    printf("\n Lunes     (1)\n Martes    (2)\n Miercoles (3)\n Jueves    (4)\n Viernes   (5)\n Sabado    (6)\n Domingo   (7)\n\nIntroduzca el numero: ");
    scanf("%d", &dia);
//Validación de promoción 'Domingo'.
    if (dia == 7)
    {
        printf("---El dia de hoy hay un descuento del 20 porciento!---");
        costo = ((n * plato)*8)/10;
    }
    else{
        printf("---No hay promociones vigentes en este dia.---");
        costo = n * plato;
    }

    printf("\n\nEl costo de su compra es: $%d\n --- Gracias por vistarnos, vuelva pronto. ---", costo);
    getch();
}