#include <stdio.h>
#include <stlib.h>
typedef struct Proveedor{
	char nombre[100];
	char dirección[100];
	char teléfono[13];
	int cantidades;
#define MAX_ITEMS
}proveedor
struct articulo;//Se puede quitar el struct para ahorrar palabras y no repetir//
Articulo articulo.nombre;
float precio;
Proveedor proveedor;
}Articulo
typedef struct;
Articulo articulos[MAX_ITEMS];
int cantidades[MAX_ITEMS];
int totalArticulos;
int main(){
	Inventario miInventario;
	Articulo.articulo= {"Nombre",10,{"NomPro","Dirpro","telPro"}};

	miInventario.articulo [0]=articulo; //Inicialización//
	miInventario.cantidades[0]=10;
	printf("Nombre articulo: %s\n",
			miInventario.articulos[0].nombre
	      );

	printf("Cantidad: %d\n",
			miInventario.cantidades[0]
	      );

	printf("Nombre del proveedor: %s\n",
			miInventario.articulos[0].proveedor.nombre
	      );
}
return 0;
}
