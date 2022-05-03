#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void pedido(int,int,int,char,int*,int*,int*,char*,int);  /*prototipos de las funciones*/

void informe(int*,int*,int*,char*,int);

int main(){

setlocale(LC_CTYPE,"spanish");

int menu,cod,sucursal,tipo.vcod[50],vsuc[50],vtipo[50],x=0;  
char turno,vturno[50];

system("color 0A");
	printf(" \t\t\t *********************************************************");
	printf("\n\t\t\t** %c BIENVENIDO AL PROGRAMA DE RESIGRTRO DE INFORMACION %c **\n",05,05);
	printf(" \t\t\t *********************************************************\n\n");
	
	menu=fmenu();
do{
		switch(menu){
			case 1:
					printf("\nCódigo de Empleado: ");
					scanf("%i",&cod);
					fflush(stdin);
					printf("\nCódigo de Sucursal (1 - 2 - 3 - 4): ");
					scanf("%i",&sucursal);
					fflush(stdin);
					printf("\nTipo: Entrada (1) o Salida (2):\n");
					scanf("%i",&tipo);
					fflush(stdin);
					printf("\nIngrese turno\n'm'=mañana\n't'=tarde\n'n'=noche:\n");
					scanf("%c",&turno);
					fflush(stdin);
					pedido(cod,sucursal,tipo,turno,vcod,vsuc,vtipo,vturno,x);
					x++;
					system("cls");
					
			break;
			case 2:
					
			break;
			case 3:	
					informe(vcod,vsuc,vtipo,vturno,x);
					system("pause");
					system("cls");
					fflush(stdin);
			break;
			default: system("color 0C"); printf("\nError");
			break;
		}
		fflush(stdin);
		
	menu=fmenu();	
	}while(menu!=3);
	
	system("color 1E");
	printf("\n\nSe ha salido del programa.");
}

int fmenu(){
	int opc;
	printf("\n1 - \Ingresar Datos de Fichaje\n2 - Generar informe de fichajes.\n3 - Salir.\n");
	scanf("%i",&opc);
	system("cls");
	return opc;
}


void pedido(int cod,int sucursal,int tipo,char turno,int *vcod,int *vsuc,int *vtipo,char *vturno,int x){  /*funcion para guardar los datos en los vectores*/
	
		*(vcod+x)=cod;
		*(vsuc+x)=sucursal;
		*(vtipo+x)=tipo;
		*(vturno+x)=turno; 
		
		fflush(stdin);
}

void informe(int *vcod,int *vsuc,int *vtipo,char *vturno,int x){  /*funcion para informar contadores si es por flete, y si hay stock*/
	
	int contm=0,contt=0,contn=0,cont1=0,cont2=0,j;
	for(j=0;j<x;j++){
	
	printf("\nEn la posicion %i los datos son:");
	printf("\nEl codigo de empleado: %i",*(vcod+j));
	printf("\nCódigo de Sucursal: %i",*(vsuc+j));
	printf("\nTipo de entrada: %i",*(vtipo+j));
	printf("\nTurno: %c",*(vturno+j));
	
	switch(*(vturno+j)){
		
		case 'm': contm++;
		break;
		case 't': contt++;
		break;
		case 'n': contn++;
		break;
	}
		
	if(*(vsuc+j)==2){
		
		if(*(vtipo+j)==1){
			cont1++;
		}
		else{
			cont2++;
		}
	}	
	}
	
	printf("\nEl total de fichaes por turno es:\n");
	printf("\nTurno mañana: %i",contm);
	printf("\nTurno tarde: %i",contt);
	printf("\nTurno noche: %i",contn);


	if(cont1>cont2){
		printf("\nEn la sucursal 2 hubo mas entradas que salidas.");
	}
	else{
		printf("\nEn la sucursal 2 hubo mas salidas que entradas.");
	}
}


	



