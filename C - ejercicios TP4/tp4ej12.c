#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
	
	int vecnum[3];
	char nombre[3][3];
	float vecmon[3];
	int x;
	
	for(x=0;x<3;x++){
		printf("\nIngrese el numero del vendedor: ");
		scanf("%i",&vecnum[x]);
		printf("\nNombre del vendedor: ");
		scanf("%s",&nombre[x]);
		printf("\nMonto de la venta: ");
		scanf("%f",&vecmon[x]);
    }
    
    for(x=0;x<3;x++){
	
    	printf("\nPosicion: %i -- NumeroVendedor: %i -- Total: %.2f -- Nombre: %s",x,vecnum[x],vecmon[x],nombre[x]);
	}
	
}
