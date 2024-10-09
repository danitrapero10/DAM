#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaración de variables. A la vez
	// o en líneas separadas.
	float num1,num2;
	float resultado_suma;
	float resultado_resta;
	float resultado_multiplicacion;
	float resultado_division;


	/**
	 * COMIENZA LA LÓGICA DEL PROGRAMA
	 */

	printf("Introduce un número flotante: ");
	scanf("%f",&num1); // Scanf almacena el número que le digamos al ejecutar.
	printf("Introduce otro número flotante: ");
	scanf("%f",&num2);

	resultado_suma = num1 + num2;
	printf("La suma de %f y %f es %f\n",num1,num2,resultado_suma);
	
	resultado_resta = num1 - num2;
	printf("La resta de los números %f y %f es %f\n",num1 ,num2 ,resultado_resta );

	resultado_multiplicacion = num1 * num2;
	printf("la multiplicación %f y %f es %f\n",num1 ,num2 ,resultado_multiplicacion);

	resultado_division = num1 / num2;
	printf("la division de %f y %f es %f\n",num1 ,num2 ,resultado_division);


}
