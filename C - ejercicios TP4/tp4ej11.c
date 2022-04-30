/*11) Dado el vector T de tamaño n. Si el tamaño es par invertir los elementos de la mitad
de los elementos.
Ejemplo: v=[1][2][3][4][5][6] v(invertido)=[3][2][1][6][5][4]*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int x,n,y;
	printf("\nIngrese el tamaño del vector: ");
	scanf("%i",&y);
	if(y%2==0){
		n=y/2;
	int vector[y];
	printf("\nIngrese los valores: \n");
	for(x=n;x>=0;x--){
		scanf("%d\n",&vector[x]);
		
	}
	for(x=n;x>=0;x--){
		scanf("%d\n",&vector[x]);
	}
	for(x=y;x>=0;x--){
		if(x=y){
		printf("\nLos valores invertidos son: ");	
		}
		printf("\n , %i",vector[x]);
	}
	}
	
}
