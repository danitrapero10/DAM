#include <stdio.h>
#include <stdlib.h>

void printBalor(void* ptr, char tipo){

	switch(tipo){
		case´d´:
			//printf("Double %lf\n", *((double*)ptr));/No es correcto por que no estoy accediendo al contenido
		        printf("Double %lf", *((double*)ptr);
			
		case ´i´: printf("Entero:%d\n", *((int*) ptr));			
					
			break;
		default:
			printf("Error");
	 }
}


int main(){
        double num =10;
	void * dir =&num;
	printfValor(dir,´d´);

return EXIT_SUCCESS;
}

