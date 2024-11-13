#include <stdio.h>
#include <stlib.h>

void incrementar(int *n){
	printf("Valor recibido:%d\n", *n);
	*n=(*n) + 1       //(*n)++;
	printf("Valor inrementado en la función: %d\n", *n);
}
int main(){
	int valor = 10;
	incrementar(&valor);
	printf("Valor en el main: %d\n", valor);
return 0
}
