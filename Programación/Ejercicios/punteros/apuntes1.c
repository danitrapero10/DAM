#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 10;
	int *p;
	p = &x;

        printf("Valor de x: %d\n", x);
	printf("Dirección de x: %p\n", &x);
	printf("Valor de p (dirección de x): %p\n", p);
	printf("Valor apuntado por p: %d\n", *p);
        printf("Dirección de memoria de la variable p: %p\n", &p);
	printf("Contenido de x: %d\n", *x);
	scanf("%d",&x);
//scanf necesita una dirección de memoria//	
        return 0;
}
