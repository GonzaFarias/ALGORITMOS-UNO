/*1) Rellene un array con los números pares comprendidos entre 1 y 100 y muéstrelos en
pantalla en orden ascendente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>


int main(){
	
	int vector[51];
	int x;
	int a=0;
	
	for(x=1;x<101;x++){
	if(x%2==0){
		vector[a]=x;
		a++;
	}
	}
	for(x=0;x<50;x++){
	printf("\nEl numero es: %i",vector[x]);

	}
	return 0;
}
