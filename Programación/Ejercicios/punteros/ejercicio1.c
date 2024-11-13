#include <stdio.h>
#include <stdlib.h>

int main() {
	float x = 20;
	int *p; //Genera un warning pero si lo compilas sale.//
	p = &x;

        printf("Valor de x: %f\n", x);
	printf("Dirección de x: %p\n", &x);
	printf("Contenido de p: %b\n", *p);

        return 0;
}
