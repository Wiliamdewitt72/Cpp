#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
  int tam, i, j;

  char palabra[50], caracter;//La cadena se establece con la palabra 'char'. También se pueden definir cadenas con la palabra 'string', la diferencia radica en que 'char', es para cadenas de un solo caracter, y 'string'
  printf("\nEste programa recibe una oracion de máximo 51 caracteres y la devuelve invertida.\n");
  gets(palabra);

  tam = strlen(palabra);
  for (i = 0, j = tam - 1; i < tam / 2; i++, j--) // con este ciclo se invierte la cadena
  {
    caracter = palabra[i];
    palabra[i] = palabra[j];
    palabra[j] = caracter;
  }
    printf("%s", palabra);

    getch();
  }