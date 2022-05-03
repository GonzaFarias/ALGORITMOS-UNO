#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>


int multa(int ocupantes);		/*PROTOTIPOS DE LAS FUNCIONES*/
void informe(int cont, int acum, int conta, int contb, int contc,int contadorelse);

int main(){
	
	setlocale(LC_CTYPE,"spanish");
	
	char patente[15];
	int dni, personas,inicio,vale;
	char lugar, permiso;;
	int contr=0,acummulta=0,contn=0,contp=0,cont=0,contadorelse=0;

	
	
	printf("Ingrese 1 para comenzar con el registro de infracciones: ");
	scanf("%i",&inicio);
	
	while(inicio==1){	/*INICIO DEL REGISTRO DE INFRACCIONES*/
	
		printf("\nIngrese la patente: ");
		scanf("%s",&patente);
		printf("\nPosee permiso? s/n : ");
		scanf(" %c",&permiso);
		if(permiso=='n'){
		
	
		
		printf("\nDNI de quien maneja: ");
		scanf("%i",&dni);
		printf("Cantidad de ocupantes: ");
		scanf("%i",&personas);
		printf("\nAcceso donde se detecto la infraccion, 'r' Liniers, 'p' Constitución, 'n' Lugano:\n");
		scanf(" %c",&lugar);
		fflush(stdin);
		switch(lugar){
			
			case 'r':
				
			break;
			case 'p':
				
			break;
			case 'n':
				
			break;
		
			}

		fflush(stdin);
	 	
	 	printf("\nEl valor de la multa es %i",multa(personas)); /*INFORME DEL VALOR DE LA MULTA*/
	 	vale=multa(personas);
	 	if(personas>1){
	 		printf("\nEl vehiculo fue retenido.");
		 }
		acummulta=acummulta+vale;  /*SUMATORIA DEL VALOR DE MULTA*/
		if(lugar=='r'){
			if(personas>1){
				contr++;
			}
			if(vale>5000){
				cont++;
			}
		}
		else if(lugar=='p'){
			if(personas>1){
				contp++;
			}
		}
		else if(lugar=='n'){
			if(personas>1){
				contn++;
			}
		}
		 fflush(stdin);
		
	}
		contadorelse++;  /*CONTADOR TOTAL DEL REGISTRO*/
	
		printf("\nIngrese 1 para continuar con el registro de infracciones, de lo contrario ingrese 0:\n ");
		scanf("%i",&inicio);
		
}		/*FIN DEL WHILE*/
	
		informe(cont,acummulta,contr,contp,contn, contadorelse); /*INFORME DE LOS VALORES*/
}
	
int multa(int ocupantes){  /*FUNCION PARA SABER EL VALOR DE LA MULTA*/
	int valor;
	valor=ocupantes*5000;
	return valor;
}

void informe(int cont, int acum, int conta, int contb, int contc, int contadorelse){ /*FUNCION PARA INFORMAR LOS VALORES*/
	
	printf("\nLa cantidad de multas que supera $5000 en Liniers es de %i \nEl monto total de las multas realizadas es de %i",cont,acum);
	printf("\nCantidad de vehiculos retenidos por acceso:\nLINIERS: %i \nCONSTITUCION: %i \nLUGANO: %i",conta,contb,contc);
	float porciento=(conta+contb+contc)*100/contadorelse;
	printf("\nEl porcentaje de vehiculos que cometieron infraccion es de %%2.f",porciento);
	}
	
	
