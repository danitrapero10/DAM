#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char nombres[20][40] = {"casa", "árbol", "perro", "gato", "auto", "bicicleta", "sol", "luna", "estrella", "montaña", "río", "mar", "tierra", "agua", "aire", "metal", "bosque","flor","lluvia", "trueno", "viento", "tormenta", "nieve", "campo", "ciudad", "puente", "edificio", "escalera", "pintura", "escultura"};
	char letra[2]= "e";
	char letra2[2]= "g";
	char letra3[4]= "e","g";
	int resultado = 0;
	printf("Las siguientes palabras no tienen la letra e.");
	for (int i = 0; i < 10; i++){
		resultado = strcmp(nombres[i][j], letra);
		for (int j = 0; j != '\0'; j++)

			if (resultado == 0){
				continue;
			}
		printf("%s\n",nombres[i]);
	}
	char letra[2]= "g";
	int resultado = 0;
	printf("Las siguientes palabras no tienen la letra g.");
	for (int i = 0; i < 10; i++){
		resultado = strcmp(nombres[i][j], letra2);
		for (int j = 0; j != '\0'; j++)

			if (resultado == 0){
				continue;
			}
		printf("%s\n",nombres[i]);
	}
	char letra[4]= "2", "g";
	int resultado = 0;
	printf("Las siguientes palabras no tienen la letra g. ni la letra e.");
	for (int i = 0; i < 20; i++){
		resultado = strcmp(nombres[i][j], letra3);
		for (int j = 0; j != '\0'; j++)

			if (resultado == 0){
				continue;
			break;
		printf("%s\n",nombres[i]);
	}
	return EXIT_SUCCESS;
}
