/*10) Calcular e informar el promedio de los valores y el producto de los mismos.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int vector[20];
	int x,num;
	int acum,producto;
	
	for(x=0;x<20;x++){
		printf("\nIngrese un valor entero: ");
		scanf("%d",&vector[x]);
	}
	for(x=0;x<20;x++){
		num=vector[x];
		acum+=num;
		producto=num*num;
		printf("\nEl valor es %i, y su posicion es %i y el producto es %i",num,x,producto);
	}
	float promedio=acum/20;
	printf("\nEl promedio es %.2f",promedio);
	
}
