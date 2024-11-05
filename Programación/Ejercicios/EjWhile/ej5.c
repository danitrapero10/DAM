#include <stdio.h>

int main(){
	int r;
	for(int i = 0;i<4;i++){
		r = (rand() % 5)+1;
		//rand()%5 genera aleatorio entre o y 4 incluidos
		//**Hacer módulo 8 da números aleatorios entre 0 y 7
			printf("%d\n", r);
	}

return 0;
}
