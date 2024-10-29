#include <stdio.h>
#include <stdlib.h>
int main() {
	int suma = 0;
	int num = 1513;
        int resultado_suma = 0;

	while (num != 0) {
	        resultado_suma = num/10;
		num = num % 10;
		printf("n = %d\n",num);
                resultado_suma = num;
		suma += num;
	}
        printf ("El resultado de la suma de los números es %d\n", suma);
	return 0;
}
