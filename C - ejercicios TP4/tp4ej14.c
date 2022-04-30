/*14) Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. A
continuación, el programa debe pedir el número de una fila. El programa deberá
devolver el máximo de esa fila. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int matriz[3][3],x,j,bandera=0,filamax=0,colmax=0,max=0;
	
	for(j=0;j<3;j++)
	for(x=0;x<3;x++){
	fflush(stdin);	
	printf("\nIngrese un valor para la fila %i, columna %i: ",j,x);
	scanf("%i",&matriz[j][x]);
	fflush(stdin);
	
	if(bandera==0){
		max=matriz[j][x];
		bandera=1;
	}
	else if(matriz[j][x]>max){
		max=matriz[j][x];
		filamax=j;
		colmax=x;
	}
	}

	printf("\nEl valor maximo es %i en la fila %i columna %i",max,filamax,colmax);
	fflush(stdin);	
}
