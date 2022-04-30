/*31) Dado un vector de 10 elementos ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4}, escribir un programa en
C (haciendo uso de puntero) que muestre las direcciones de memoria de cada elemento
del vector.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(){
	int vector[10]={1,2,3,4,4,7,8,9,5,4},x;
	int *num;
	num=vector;
	
	for(x=0;x<10;x++){
		printf("\nEl numero es %d",vector[x]);
		
	}
	for(x=0;x<10;x++){
		printf("%p\n",num+x);
		printf("%d\n",*(num+x));
		
	}
}
