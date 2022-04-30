/*18) Escribir un programa que lea del teclado dos cadenas, las muestre en pantalla e
informe si las cadenas ingresadas son iguales o no.*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	char cadena1[20],cadena2[20];
	
	printf("Ingrese la primer cadena: ");
	scanf("%s",&cadena1);
	printf("\nIngrese la segunda cadena: ");
	scanf("%s",&cadena2);
	if(cadena1!=cadena2){
		printf("\nLas cadenas son iguales");
	}
	else{
		printf("\nLas cadenas son diferentes");
	}
}
