#include <stdio.h>
#include <conio.h>
void llenamat(int mat[5][3], int ren, int col); //Declaración de funciones
void muestramat(int mat[5][3], int ren, int col);
//En el paso de parámetros la matriz siempre será de referencia
//Todo lo que se le haga en cada función se conserva
main()
{
    int col, ren;
    int mat[5][3];
    printf("Este programa llenará una matriz y después mostrará el contenido\n");
    do
    {
        printf("Dame el núm de renglones menor a 5 y el número de columnas menor a 3\n");
        scanf("%d%d", &ren, &col);
    } while ((ren < 0) || (ren > 5) || (col < 0) || (col > 3));
    llenamat(mat, ren, col);
    muestramat(mat, ren, col);
    getch();
}
void llenamat(int mat[5][3], int ren, int col)
{
    int i, j;
    for (i = 0; i < ren; i++) // con dos ciclos anidados se llena la matriz
    {
        for (j = 0; j < col; j++)
        {
            printf("Dame el valor de la matriz en la posición %d %d\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void muestramat(int mat[5][3], int ren, int col)
{
    int i, j;
    for (i = 0; i < ren; i++) // con dos ciclos anidados se muestra la matriz
    {
        for (j = 0; j < col; j++)
        {
            printf("El valor de la matriz en la posición %d %d es %d\n", i, j, mat[i][j]);
        }
    }
}