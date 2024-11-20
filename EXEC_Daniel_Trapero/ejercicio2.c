#include <stdio.h>
#include <stdlib.h>

int  main(){
	int n=0; int condicion; int dia;
	printf("dime un número:\n");
	scanf("%d", dia);
	switch(condicion){
		case 1:
			printf("Hoy es lunes", dia);
			break;
		case 2:
			printf("Hoy es martes", dia);
			break;
		case 3:
			printf("Hoy es miércoles", dia);
			break;
		case 4:
			printf ("Hoy es jueves", dia);
			break;
		case 5:
		        printf("Hoy es viernes", dia);
			break;
		case 6:
			printf("Hoy es sábado", dia);
			break;
		case 7:
			printf("Hoy es domingo", dia);
			break;
		default (n!>7:):
			printf("Número no válido");
		}
return 0;
}


