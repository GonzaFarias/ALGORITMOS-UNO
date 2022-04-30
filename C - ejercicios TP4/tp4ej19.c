/*19) Escribir un programa que ingrese una palabra y a continuación muestre la palabra y
la cantidad de letras que compone la palabra. */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	char palabra[25];

	
	printf("Ingrese una palabra: ");
	scanf("%s",palabra);
	int longitud=strlen(palabra);
	printf("\nLa cantidad de letras que tiene es %i",longitud);
	
}

