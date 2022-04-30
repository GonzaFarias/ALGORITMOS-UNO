/*6) Dado un vector con 5 notas de alumnos. Determinar cuántas notas son mayores a 6.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){

int vector[5];
int num,x;
int cont=0;

for(x=0;x<6;x++){
	
	printf("\nIngrese una nota: ");
	scanf("%d",&vector[x]);
}
for(x=0;x<6;x++){
	num=vector[x];
	if(num>6){
		cont++;
	}
}
printf("\nLa cantidad de notas mayores a 6 es de %i",cont);

}
