#include <stdio.h>
#include <stdlib.h>

int main(){

	int compra;
	printf("Ingrese el total de la compra:\n");
	scanf("%i", &compra);
	char descuento;
	printf("Seleccione el tipo de descuento:\nEstudiante(Escriba 'e')\nProfesor(Escriba 'p')\nOtro(Escriba 'o')\n");        scanf(" %c", &descuento);

	if(descuento == 'e'){
		compra = compra - (compra * 0.1);
		printf("El nuevo precio es:%i€\n", compra);
	} else if(descuento == 'p'){
		compra = compra - (compra * 0.15);
		printf("El nuevo precio es:%i€\n", compra);
	} else {
		printf("El precio se queda igual(%i€)\n", compra);
	}
	return 0;

}
