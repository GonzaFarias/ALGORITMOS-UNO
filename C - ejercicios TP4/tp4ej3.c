/*3) Lea 10 números por teclado, almacénelos en un array y muestre la suma, resta,
multiplicación y división de todos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int suma,resta,mult;
	float division;
	int flag=0;
	
int vector[10];
int x;

for(x=0;x<10;x++){
	printf("\nIngrese un numero: ");
	scanf("%d",&vector[x]);
}
for(x=0;x<10;x++){
	if(flag==0){
	suma=vector[x];
	resta=vector[x];
	division=vector[x];
	mult=vector[x];
	flag=1;
	}
	else{
	suma=suma+vector[x];
	resta=resta-vector[x];
	division=division/vector[x];
	mult=mult*vector[x];
	}
	printf("\nEn la posicion %i La suma es %i, la resta es %i, la division es %.2f, la mult es %i",x,suma,resta,division,mult);	
}
printf("\nLa suma es %i, la resta es %i, la division es %.2f, la mult es %i",suma,resta,division,mult);	
}

