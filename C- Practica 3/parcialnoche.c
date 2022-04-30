#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

void carga(int,int,char,int*,int*,char*,int);
void informe(int*,int*,char*,int);
int main(){
	
	setlocale(LC_CTYPE,"spanish");
	

	printf(" \t\t\t **************************");
	printf("\n\t\t\t** BIENVENIDO AL PROGRAMA **\n");
	printf(" \t\t\t **************************\n\n");
	
	
	int funmenu,cod,dni,cont1=0,cont2=0,cont3=0,cont4=0,vcod[50],vdni[50],x=0;
	char viajero,vviaj[50];
	
	funmenu=menu();
	
	do{
	
	switch(funmenu){
		case 1: 
				printf("\nIngrese codigo de destino: ");
				printf("\n1 - Iguazú\n2 - Córdoba\n3 - Mendoza\n4 - Ushuaia.\n");
				scanf("%i",&cod);
				switch(cod){
			
					case 1: cont1++;
							
					break;
					case 2: cont2++;
							
					break;
					case 3: cont3++;
							
					break;
					case 4: cont4++;
							
					break;
				}
				printf("\nDNI del pasajero: \n");
				scanf("%i",&dni);
				printf("\nEs viajero frecuente (S/N): ");
				scanf(" %c",&viajero);
				carga(cod,dni,viajero,vcod,vdni,vviaj,x);
				x++;
					system("cls");
		break;
		case 2:
				informe(vcod,vdni,vviaj,x);
				
		break;
		case 3:
		break;
		default: printf("\nError");
		break;
	}

	funmenu=menu();
	}while(funmenu!=3);
	
	printf("\nLa cantidad de viajes a Iguazu es de %i",cont1);
	printf("\nLa cantidad de viajes a Córdoba es de %i",cont2);
	printf("\nLa cantidad de viajes a Mendoza es de %i",cont3);
	printf("\nLa cantidad de viajes a Ushuaia es de %i",cont4);
	system("pause");
	printf("\nSe ha salido del programa");
	
}

void carga(int cod,int dni,char viajero,int *vcod,int *vdni,char *vviaj,int x){
	
	*(vcod+x)=cod;
	*(vdni+x)=dni;
	*(vviaj+x)=viajero;
	
}

void informe(int *vcod,int *vdni,char *vviaj,int x){
	
	int j,paga;
	float descuento,costo;
	
	for(j=0;j<x;j++){
		switch(*(vcod+j)){
			
			case 1: 
					paga=5000;
			break;
			case 2: 
					paga=2000;
			break;
			case 3: 
					paga=3500;
			break;
			case 4: 
					paga=10000;
			break;
		}
		if(*(vviaj+j)=='S'){
			descuento=paga*0.15;
			costo=paga-descuento;
		}
		else{
			costo=paga;
		}
		
		printf("\nDatos del pasaje %i son - DNI: %i  |  Costo: %.2f",j+1,*(vdni+j),costo);
	}
}
int menu(){
int opc;
printf("\n1 - Cargar reservas de pasajes aéreos.\n2 - Emitir pasajes aéreos.\n3- Salir.\n");
scanf("%i",&opc);
return opc;
}
