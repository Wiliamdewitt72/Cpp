#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i = 0, k = 0, j = 0, tam = 0, n = 0;
    char cadena1[50], cadena2[50];

    printf("\nEste programa comprueba si una frase o palabra es un palindromo.\nIntroduzca la palabra (maximo 50 caracteres): ");
    gets(cadena1);
    tam = strlen(cadena1);

    for ( i = 0; cadena1[i] != '\0'; i++ ) //Este ciclo cuenta los espcios de la cadena introducida.
    {
        if (cadena1[i]  == ' ')
        {
            n += 1;
        }
    }
    // Los espacios se cuentan para frases con más de un espacio de separación.
    for (k = 0; k <= n; k++) // Segun la cantidad de espacios 'n' que se tengan se repite el ciclo de 'recorre un espacio'.
    {
        for (i = 0; cadena1[i] != '\0'; i++) // <-- Ciclo: 'recorre un espacio'. Verifica cada espacio de la cadena.
        {
            if (cadena1[i] == ' ')//Este recorre toda la cadena 1 espacio cada vez que encuentra un ' '.
            {
                for (j = i; j < tam; j++)
                {
                    cadena1[j] = cadena1[j + 1];
                }
                tam--; //Reajusta el tamaño de la cadena.
            }
        }
    }

    for (i = 0; i < tam; i++) //Esto hace la cadena a minuscula.
    {
        cadena1[i] = tolower(cadena1[i]);
    }

    strcpy(cadena2, cadena1);
    strrev(cadena2);
    // ---- Resultados ----
    if (strcmp(cadena1, cadena2) == 0)
    {
        printf("La frase/palabra introducida es un palindromo.");
    }
    else
    {
        printf("La frase/palabra introducida NO es un palindromo.");
    }
    printf("\n %s\n %s", cadena1, cadena2);
    getch();
}
