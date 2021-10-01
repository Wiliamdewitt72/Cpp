#include <stdio.h>

main()
{
	int num1, num2, suma;
	
	printf("Dame dos números a sumar:");
	scanf("%d%d", num1, num2);
	
	suma = num1 + num2;
	printf("La suma es ", suma);
}