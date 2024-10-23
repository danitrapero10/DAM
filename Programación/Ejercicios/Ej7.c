#include <stdio.h>
#include <stdlib.h>
void imprimirfila (int n){
	for (int i = 1; i <= n; i++) {
		printf("*");
	}
}
int main() {
	int n;
	printf("Dime un número\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		imprimirfila(n);
		printf("\n");
	}
	printf("\n"); 
	return 0;
}
