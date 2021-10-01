#include <stdio.h>
#include <conio.h>

int main ()
{
    int A = 1, E = 1, escala = 10, CantExam = 3, CantAlum = 5; // A representa el 'número' de alumno; E el 'número' de examen.
    float promedio = 0, calif = 0, alumno = 0;

    printf("\nEste programa ayuda a conocer el promedio de sus alumnos.\n"); 

   printf("\nEscriba la escala de calificacion.\n\n  De 0 a: ");
   scanf("%d", &escala);
   printf("\nEscriba cantidad de examenes.\n\n  De 0 a: ");
   scanf("%d", &CantExam);
   printf("\nEscriba la cantidad de alumnos.\n\n  De 0 a: ");
   scanf("%d", &CantAlum);   

    while (A <= CantAlum)
    {
        printf("\n   Calificaciones del alumno %d. \n", A);

        while (E <= CantExam)
        {
            printf("Introduzca la calificacion del examen %d: ", E);
            scanf("%f", &calif);
            while (calif < 0 || calif > escala) //Valida la calificación dentro del rango [0,10].
            {
                printf("Introduzca la calificacion correcta: ");
                scanf("%f", &calif);
            }

            promedio = promedio + calif;
            E = E + 1;
        }
        // Como ya se validaron que los datos esten en [0,10], aquí ya no es necesario.        
        alumno = promedio / CantExam; 

        printf("El promedio del alumno %d es: %0.2f\n", A, alumno);
        
        A = A + 1;
        calif = 0;
        promedio = 0;
        E = 1;

        if (A > CantAlum)
        {
            printf("\n    -----\n    Fin. \n    -----");
        }
        else
        {
           printf("Oprima 'Enter' para continuar con el siguiente alumno.\n");
           getch(); 
        }  
    }
    getch();
}