nclude <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  *
 *   *      Autores: Samuel Carías y Daniel Trapero
 *    *
 *     */
#define BAJO_STOCK 5.0
struct inventario{//declaramos este struct para que se almacene en el cada una los productos que dispone nuestro inventario
		  //        char nombre[20];
		  //                int cantidad;
		  //                };
		  //
		  //
		  //                int main (){
		  //                        int productos = 0;
		  //                                int contador = 0;
		  //                                        int con_inventario = 0;
		  //                                                int aniadir = 0;
		  //                                                        int resultado = 0;
		  //                                                                int resultado1 = 0;
		  //                                                                        char reabastecer[3];
		  //                                                                                char comparacion[3] = "si";
		  //                                                                                        char nombre[20];
		  //                                                                                                char buscar [20];
		  //                                                                                                        //1. Con esta solicitud de cantidad de productos de inventario
		  //                                                                                                                printf("Ingrese el número total de productos que desea gestionar (máximo 10): ");
		  //                                                                                                                        scanf("%d",&productos);
		  //                                                                                                                                if (productos > 10){
		  //                                                                                                                                                printf("El numero máximo de productos es 10\n");
		  //                                                                                                                                                                return 0;
		  //                                                                                                                                                                        }else{//Posteriormente declarando un bucle for para el ingreso de productos y cantidades de los mismos
		  //                                                                                                                                                                                struct inventario tienda[productos];//llamamos al struct dandole tienda como palabra que lo enlaza con el main
		  //                                                                                                                                                                                        for (int i = 0; i < productos; i++){
		  //                                                                                                                                                                                                        printf("Ingrese el nombre del %d producto: ",++contador);//Utilizamos el ++ en contador  para que cada vez que se repita el bucle se sume un 1
		  //                                                                                                                                                                                                                        scanf("%s",tienda[i].nombre);
		  //                                                                                                                                                                                                                                        printf("Ingrese la cantidad del %d producto en stock: ",contador);
		  //                                                                                                                                                                                                                                                        scanf("%d",&tienda[i].cantidad);
		  //                                                                                                                                                                                                                                                                        }
		  //                                                                                                                                                                                                                                                                                //2. Con este print este bucle mostraremos el Inventario Completo:
		  //                                                                                                                                                                                                                                                                                                printf("Inventario Completo:\n");
		  //                                                                                                                                                                                                                                                                                                        for (int i = 0; i < productos; i++){//esto debido a que cuando creamos el bucle i < productos se repetira hasta un valor antes que tenemos el numero de productos pero como el contador comienza en 0 y no en 1 es que se pone solo < si comenzara en 1 tendria que ser <=
		  //                                                                                                                                                                                                                                                                                                                        printf("Producto %d: %s - %d unidades\n",++con_inventario,tienda[i].nombre,tienda[i].cantidad);//bucle donde se mostra todos los productos del inventario con su respectivo contador y las unidades que disponemos
		  //                                                                                                                                                                                                                                                                                                                                }
		  //                                                                                                                                                                                                                                                                                                                                        //3. Bucle crado para el Reabastecimiento de Productos
		  //                                                                                                                                                                                                                                                                                                                                                for (int i = 0; i < productos; i++){
