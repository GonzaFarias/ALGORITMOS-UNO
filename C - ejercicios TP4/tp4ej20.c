/*20) Diseñar un programa que ingrese dos matrices cuadradas y muestre un menú donde
se puedan seleccionar estas distintas opciones, 1-sumar matrices, 2-multiplicar
matrices, 3-salir del programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int matriz[2][2],matriz2[2][2],j,x,resultado,opcion;
	
	for(j=0;j<2;j++)
	for(x=0;x<2;x++){
		
		printf("\nIngrese el valor en la primer matriz: ");
		scanf("%i",&matriz[j][x]);
		printf("\nIngrese el valor de la segunda matriz: ");
		scanf("%i",&matriz2[j][x]);
		printf("\nIngrese una opcion:\n1-SUMA MATRICES\n2-MULTIPLICAR MATRICES\n3-SALIR DEL PROGRAMA\n");
		scanf("%i",&opcion);
		switch(opcion){
			
			case 1:	
					resultado=matriz[j][x]+matriz2[j][x];
					printf("\nLa suma da como resultado: %i ",resultado);
			break;
			case 2:
					resultado=matriz[j][x]*matriz2[j][x];
					printf("\nLa multiplicacion da como resultado: %i ",resultado);
			break;
			case 3: 
					j=3;
					x=3;
			break;
		}
	}
	printf("\nSe ha salido del programa");
}
