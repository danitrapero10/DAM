#include <stdio.h>
#include <stdlib.h>
// *Como funcionan los punteros con structs/
//Esta función no es válida porque 
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
typedef struct{
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
}Estudiante;
Estudiante inicializar(char * nombre, int edad, float nota){
	Estudiante estudiante_nuevo;

	return estudiante_nuevo;
}
int main(){
	Estudiante listado[NUM_ESTUDIANTES];

	printf("%p\n",listado);
	printf("sizeof listado: %lu\n", sizeof(listado));

	printf("sizeof estudiante: %lu\n", sizeof(estudiante));

	printf("Cuántos estudiantes desea inicializar?");
	scanf("%d", &num_estudiantes);

return EXIT_SUCCESS;
}

