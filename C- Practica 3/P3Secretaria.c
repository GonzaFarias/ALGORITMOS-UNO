#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/*Opci�n 1 - Ingresar datos
Ingresar los datos relevados por teclado. Por cada ingreso de datos, llamar a una funci�n que reciba los 4 datos relevados ingresados por teclado y los guarde en 4 vectores, respectivamente.

Opci�n 2 - Mostrar resultados
Llamar a una funci�n que reciba los 4 vectores cargados en la opci�n 1, y los utilice para
informar, dado un c�digo de centro tur�stico ingresado por teclado, la cantidad de turistas de cada quincena y el total de turistas que ingresaron por auto de dicho centro.

Utilizar aritm�tica de punteros en las funciones de las opciones 1 y 2.

Opci�n 3 - Salir*/

int main(){
	
	setlocale(LC_CTYPE,"spanish");
	
	do{
		printf("\nIngrese una de las siguientes opciones: ");
		printf("\n1- Ingresar datos\n2- Mostrar resultados\n3- Salir");
		scanf("%i",&menu);
		switch(menu){
			case 1:
					printf("\nDia (1-31): ");
					scanf("%i",&dia);
					printf("\nCodigo de centro turistico ('a','b','c'): ");
					scanf("%c",&cod);
					printf("\nVia de acceso (1=Auto, 2=Avi�n, 3=Micro, 4=Tren): ");
					scanf("%i",&via);
					switch(via){
						
						case 1:
						break;
						case 2:
						break;
						case 3:
						break;
						case 4:
						break;
						default: printf("\nError.");
						break;
					}
			break;
			case 2:
			break;
			case 3:
			break;
			default: printf("\nError");
			break;
		}
		
		
		
		
		
		
		
		
	}while()
}

