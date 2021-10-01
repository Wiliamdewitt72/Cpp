#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void minus(char cadena[], int tam);
void QuitEspacio(char cadena[], int tam);
int palindromo(char cadena[], char cadenac[]);
int Count(char cadena[]);

int main()
{
    int tam;
    char cadena[50], cadenac[50];

    printf("\nEste programa comprueba si una frase o palabra es un palindromo.\nIntroduzca la palabra (maximo 50 caracteres): ");
    gets(cadena);

    tam = strlen(cadena);

    minus(cadena, tam);
    QuitEspacio(cadena, tam);
   
    printf("\n-|Comparacion de cadenas|-\n |%s|\n |%s|\nValor de palindromo:|%d|", cadena, cadenac, palindromo(cadena, cadenac));
    getch();
}

void minus(char cadena[], int tam) // Convierte la cadena en minusculas.
{
    int i;
    for ( i = 0; i <= tam; i++)
    {
        cadena[i] = tolower(cadena[i]);
    }
}
void QuitEspacio(char cadena[], int tam)
{
    int k = 0, i, j, n;
    n = Count(cadena);
    do // Segun la cantidad de espacios 'n' que se tengan se repite el ciclo de 'recorre un espacio'.
    {
        for (i = 0; cadena[i] != '\0'; i++) // <-- Ciclo: 'recorre un espacio'. Verifica cada espacio de la cadena.
        {
            if (cadena[i] == ' ')//Este recorre toda la cadena 1 espacio cada vez que encuentra un ' '.
            {
                for (j = i; j < tam; j++)
                {
                    cadena[j] = cadena[j + 1];
                }
                tam--; //Reajusta el tamaño de la cadena.
            }
        }
        k++;
    }while(k <= n);
}
// Comprueba si es palindromo y devuelve el valor requerido en la descripción de la tarea.
// Introducir el valor 'tam' no era necesario por eso se eliminó de los parametros de entrada.
int palindromo(char cadena[], char cadenac[])
{
    strcpy(cadenac, cadena);
    strrev(cadenac);
    if (strcmp(cadena, cadenac) == 0)
    {
        printf("\nLa frase/palabra introducida SI es un palindromo.");
        return 1;
    }
    else
    {
        printf("\nLa frase/palabra introducida NO es un palindromo.");
        return 0;
    }
}
int Count(char cadena[])//Esta función es para las frases con más de un espacio de separación entre cada palabra.
{
    int i, n;
    for ( i = 0; cadena[i] != '\0'; i++ ) //Este ciclo cuenta los espcios de la cadena introducida.
    {
        if (cadena[i]  == ' ')
        {
            n += 1;
        }
    }
    return n;
}