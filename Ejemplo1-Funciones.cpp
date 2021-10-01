#include <stdio.h>
#include <conio.h>

void areacuad(float l);
float areatriang(float alt, float base);
void areacirc();
void rectang(float base, float alt, float &area);

int main()
{
    int opc;
    float l, alt, base, area; // Area es una variable local de la función 'main'.
    printf("Este programa calcula el área de:\n1. Un cuadrado\n2. Un triángulo\n3. Un círculo\n4. Un rectángulo\n -INGRESE UNA OPCION: ");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        do //Pide el lado 'l'.
        {
            printf("Proporciona el valor del lado mayor a 1");
            scanf("%f", &l);
        } while (l < 1);
        areacuad(l);
        break;
    case 2:
        do
        {
            printf("Ingrese el valor de la base y de la altura del triángulo.");
            scanf("%f %f", &base, &alt);
        } while (base < 1 || alt < 1);
        area = areatriang(alt, base); //'area' se define por los valores que la función 'areatriang' envía.
        printf("El área es %0.2f", area);
        break;
    case 3:
        areacirc(); //no envía parámetros ni recibe algún valor
        break;
    case 4:
        do
        {
            printf("Ingrese el valor de la base y de la altura del rectángulo");
            scanf("%f %f", &base, &alt);
        } while (base < 1 || alt < 1);
        rectang(base, alt, area);
        printf("El área es %0.2f", area);
        break;
    default:
        printf("error al seleccionar la opción, debe ser 1, 2, 3 o 4");
    }
    getch();
}

void areacuad(float lado) // recibe como parámetro a 'l' que es el valor del lado solicitado
{                         // en el main(), y se recibe en el parámetro lado, esta variable lado

    // recibe una copia del valor de l

    float area; // area es una variable local, solo existe en este módulo
    area = lado * lado;
    printf("El área es %0.2f", area); //se escribe aquí el resultado
} // se libera la variable area y el paso de parámetro lado, dejan de existir

float areatriang(float alt, float base) // esta función va a regresar un valor flotante
{ 
    float area; // area es una variable local, solo existe en este módulo.
    area = base * alt / 2;
    return (area); //con el return regresa la variable area
}

void areacirc() //Todo se hace en esta función, se piden los datos, se calcula el área y se escribe el resultado.
{
    float r, p = 3.1416; //variables locales, sólo existen en esta función
    do
    {
        printf("Proporciona el valor del radio mayor a 1");
        scanf("%f", &r);
    } while (r < 1);
    printf("El área es %0.2f", p * r * r);
}
void rectang(float base, float alt, float &area) //El & indica que es un parámetro por referencia, eso indica que no importa qué valor
{                                                

    area = base * alt; 
}