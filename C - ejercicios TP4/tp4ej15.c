/*15) Escribir un programa que lea una matriz de números enteros y que devuelva la suma
de los elementos positivos de la matriz y la suma de los elementos negativos. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num,resultado,x,j,acum=0,acumn=0,filas,columnas;
	printf("Ingrese el numero de filas: ");
	scanf("\n%i",&filas);
	printf("Columnas: ");
	scanf("\n%i",&columnas);
	int matriz[filas][columnas];
	
	for(j=0;j<filas;j++)
	for(x=0;x<columnas;x++){
		printf("\nIngrese un numero, fila %i, columna %i: ",j,x);
		scanf("%d",&matriz[j][x]);
		if(matriz[j][x]>=0){
			acum+=matriz[j][x];
		}
		else{
			acumn+=matriz[j][x];
		}
	}
	printf("\nLa suma de todos los valores positivos es %i, la suma de los negativos es %i",acum,acumn);
}
