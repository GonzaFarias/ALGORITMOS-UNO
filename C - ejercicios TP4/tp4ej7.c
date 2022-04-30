/*7) Dado un vector de 20 números. Hallar el promedio de los elementos positivos y el
porcentaje de los negativos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int vector[20];
	float promedio;
	int num;
	int porcentaje;
	int x;
	int cont=0, acumn=0;
	
	for(x=0;x<20;x++){
		printf("\nIngrese un numero: ");
		scanf("%d",&vector[x]);
	}
	for(x=0;x<20;x++){
		num=vector[x];
		if(num>0){
			cont++;
		}
		else if(num<0){
			acumn++;
		}
	}
	promedio=cont/20;
	porcentaje=(acumn*100)/20;
	
	printf("\nLa cantidad promedio de positivos es de %f y el porcentaje de negativos es de %i",promedio,porcentaje);
}
