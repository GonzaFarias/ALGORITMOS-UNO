/*8) Dado un vector de 10 elementos determinar el máximo y el mínimo y en qué posición se
encuentran.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int vector[10];
	int max,min,num,posmax,posmin;
	int bandera=0;
	int x;
	
	for(x=0;x<10;x++){
		printf("\nIngrese un numero: ");
		scanf("%d",&vector[x]);
	}
	for(x=0;x<10;x++){
		num=vector[x];
		if(bandera==0){
			max=num;
			min=num;
			posmin=x;
			posmax=x;
			bandera=1;
		}
		else if(num>max){
			max=num;
			posmax=x;
		}
		else if(num<min){
			min=num;
			posmin=x;
		}
	}
	printf("\nEl numero maximo es %i y su posicion es %i\nEl numero minimo es %i y su posicion es %i",max,posmax,min,posmin);
}
