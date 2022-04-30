/*4) Escribir un programa que pida 10 números enteros por teclado, los cargue en un vector
y que imprima por pantalla:
i. Cuántos de esos números son pares.
ii. Cuál es el valor del número máximo.
iii. Cuál es el valor del número mínimo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int vector[10];
	int x;
	int nummax,nummin,num;
	int cont=0;
	int bandera=0;
	
	for(x=0;x<10;x++){
		
		printf("\nIngrese un numero: ");
		scanf("%d",&vector[x]);
		
	}
	for(x=0;x<10;x++){
		num=vector[x];
		if(vector[x]%2==0){
			cont++;
		}
		if(bandera==0){
			nummax=vector[x];
			nummin=vector[x];
			bandera=1;
		}
		else if(vector[x]>nummax){
			nummax=vector[x];
		}
		else if(vector[x]<nummin){
			nummin=vector[x];
		}
		printf("\nLa posicion es %i y el valor es %i",x,num);
	}
	
	printf("\nLa cantidad de numeros pares es de %i",cont);
	printf("\nEl numero maximo es %i, el numero minimo es %i",nummax,nummin);
} 
