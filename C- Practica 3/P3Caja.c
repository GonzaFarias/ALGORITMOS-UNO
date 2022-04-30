#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

void informe(float,float*,int*,char*,int);

int main(){
	
	setlocale(LC_CTYPE,"spanish");
	
	int menu,dia,vdia[31],x=0;
	char cod,vcod[31];
	float monto,vmonto[31],saldo;
	
	system("color 0A");
	printf(" \t\t\t *************************************************");
	printf("\n\t\t\t** %c BIENVENIDO AL PROGRAMA DE FLUJO DE FONDOS %c **\n",05,05);
	printf(" \t\t\t *************************************************\n\n");
    
    printf("\nIngrese la cantidad de saldo inicial de caja: ");
    scanf("%f",&saldo);
    
	menu=fmenu();
	
	
	do{
	
	switch(menu){
		case 1: 
				printf("\nDia del mes: ");
				scanf("%i",&dia);
				printf("\nCodigo de movimiento:\n'I' - Ingreso de fondos.\n'E' - Egreso de fondos.\n");
				scanf(" %c",&cod);
				printf("\nMonto en pesos de movimiento: ");
				scanf("%f",&monto);
				*(vmonto+x)=monto;
				*(vdia+x)=dia;
				*(vcod+x)=cod;
				x++;
		break;
		case 2:
				informe(saldo,vmonto,vdia,vcod,x);
				
		break;
		case 3:
		break;
		default: printf("\nError");
		break;
	}
	menu=fmenu();
	}while(menu!=3);
	printf("\nSe ha salido del programa");
	
}

void informe(float saldo,float *vmonto,int *vdia,char *vcod,int x){
	
	int j;
		
	for(j=0;j<x;j++){
		if(*(vcod+j)=='I'){
			saldo=saldo+*(vmonto+j);
		}
		else{
			saldo=saldo-*(vmonto+j);
		}
		printf("\nEn el dia %i el saldo en caja es de %f",j+1,saldo);
	}
	printf("\nEl saldo final de caja del mes es de %f",saldo);
}	
	int fmenu(){
	int opc;
	printf("\nIngrese una de las siguientes opciones:\n1 - - Ingresar datos de Movimientos de Fondos.\n2 - Evaluación de Cobranzas en RRHH.\n3 - Salir.\n");
	scanf("%i",&opc);
	system("cls");
	return opc;
}
