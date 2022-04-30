#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void matrizpuntero(int,int*,int,int);
void devolv(int*);

int main(){
int numero,t=0,j=0;

int num[2][2];

	for(t=0;t<2;t++)
	{
		for(j=0;j<2;j++)
		{
	
				printf("\nPon numero cara pinga en la fila %i columna %i: ",t+1,j+1);
				scanf("%i",&numero);
				matrizpuntero(numero,num,j,t);
		}
	}	

	devolv(num);

}


void matrizpuntero(int numero,int *num,int j, int t){

	*(num+t+j)=numero;
}

void devolv(int*num){

int j,t;
	
for(t=0;t<2;t++){
	for(j=0;j<2;j++){
		
		printf("\nEn la fila %i, columna %i vale %i",t+1,j+1,*(num+t+j));
		fflush(stdin);
	}
}
}
