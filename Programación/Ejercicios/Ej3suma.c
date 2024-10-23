#include <stdio.h>
#include <stdlib.h>

int main() {
	int suma=0;
	for (int i = 1; i <= 10; i+= 1) {
		suma= i+suma;
		printf("%d\n", suma);
	}
	return 0;
}
