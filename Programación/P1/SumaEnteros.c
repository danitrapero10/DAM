#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaración de variables. A la vez
	// o en líneas separadas.
	int num1,num2;
	int resultado_suma;
	int resultado_resta;
	int resultado_multiplicacion;
	int resultado_division;


	/**
	 * COMIENZA LA LÓGICA DEL PROGRAMA
	 */

	printf("Introduce un número: ");
	scanf("%d",&num1); // Scanf almacena el número que le digamos al ejecutar.
	printf("Introduce otro número: ");
	scanf("%d",&num2);

	resultado_suma = num1 + num2;
	printf("La suma de %d y %d es %d\n",num1,num2,resultado_suma);
	
	resultado_resta = num1 - num2;
	printf("La resta de los números %d y %d es %d\n",num1 ,num2 ,resultado_resta );

	resultado_multiplicacion = num1 * num2;
	printf("la multiplicación %d y %d es %d\n",num1 ,num2 ,resultado_multiplicacion);

	resultado_division = num1 / num2;
	printf("la division de %d y %d es %d\n",num1 ,num2 ,resultado_division);

}
