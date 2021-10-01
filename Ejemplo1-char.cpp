#include <stdio.h>
#include <conio.h>
#include <string.h>

int main () {
    int tam, i, j;
    //Así se crea una cadena, declara el tipo y [tamaño de cadena].
    char aux;
    char cad[30];

    printf("Da la cadena maximo 30 caracteres:");
    gets(cad);

    tam = strlen(cad);

    for ( i = 0, j = tam - 1; i < tam / 2; i++, j--)
    {
        aux = cad[i];
        cad[i] = cad[j];
        cad[j] = aux;
    }

    printf("%s", cad);
    getch();
}