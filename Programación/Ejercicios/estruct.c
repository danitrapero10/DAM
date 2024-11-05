#include <stdio.h>
#include <stdlib.h>

struct fecha{ // Declara un tipo de dato
	        int mes;
		int dia;
		int anio;
}
struct cuenta{
	int num_cuenta;
	char tipo_cuenta;
	char nombre[80];
	float saldo;
	struct fecha ultimopago;
}
int main(){
	struct cuenta cliente[100];
	struct cuenta usuario = ´12345,´R`, "Jose", 586.30,5,24,1999};

        printf("Num_cuenta:%d\n", usuario.num_cuenta);
	printf("Tipo de cuenta: %c\n", usuario.tipo_cuenta);
	printf("Día del último pago: %d\n", usuario.ultimopago);
