#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i;
    char cad[30];
    char cadena[30];

    printf("Ingrese la cadena de menos a 30 carcateres: ");
    gets(cadena);

    for (i = 0; i <= 30; i++)
    {
        if (cadena[i] == ' ')
        {
            cadena[i] = cadena[i + 1];
        }
        else
        {
            cad = tolower(cadena);
        }
    }
    
}
