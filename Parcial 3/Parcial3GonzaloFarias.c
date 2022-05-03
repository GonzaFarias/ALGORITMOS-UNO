#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ingreso(int,char,float,int*,char*,float*,int);  /*prototipos de las funciones*/ void informe(int*,char*,float*,int);

int main(){

setlocale(LC_CTYPE,"spanish");
int menu,cod,vc[50],x=0;  
float importe,vi[50];
char tipo,vt[50];

system("color 0A");
	printf(" \t\t\t *****************************************************");
	printf("\n\t\t\t** %c BIENVENIDO AL PROGRAMA DE RESIGRTRO DE VENTAS %c **\n",05,05);
	printf(" \t\t\t *****************************************************\n\n");
		menu=funmenu();
do{	
		system("color 0E");
		switch(menu){
			case 1:
					printf("\n%c Código de articulo: ",16);
					scanf("%i",&cod);
					fflush(stdin);
					printf("\n%c Tipo de articulo:\n- 'a'=Algodón\n- ´c´=Curitas\n",16);
					scanf(" %c",&tipo);
					fflush(stdin);
					printf("\n%c Importe de la compra:\n",16);
					scanf("%f",&importe);
					fflush(stdin);
					ingreso(cod,tipo,importe,vc,vt,vi,x);
					x++;
					system("cls");					
			break;
			case 2:
					informe(vc,vt,vi,x);
					system("pause");
					system("cls");
					fflush(stdin);
			break;
			default: system("color 0C"); 
					printf("\nOpcion mal ingresada, intente de nuevo!!!");
			break;
		}	
	menu=funmenu();	
	}while(menu!=3);
	system("color 1E");
	printf("\n\n%cEl programa ha finalizado%c",17,16);
}
int funmenu(){
	int opc;
	printf("\n%c Ingrese una de las siguientes opciones\n",16);
	printf("\n %c 1 - Ingresar datos de la venta\n %c 2 - Generar informes del día.\n %c 3 - Salir.\n",07,07,07);
	scanf("%i",&opc);
	system("cls");
	return opc;
}
void ingreso(int cod,char tipo,float importe,int *vc,char *vt,float *vi,int x){  /*funcion para guardar los datos en los vectores*/
	
		*(vc+x)=cod;
		*(vt+x)=tipo;
		*(vi+x)=importe;
		
		fflush(stdin);
}
void informe(int *vc,char *vt,float *vi,int x){  /*funcion para informar contadores y acumuladores*/
	
	int conta=0,contc=0,j;
	float acum,total;
	for(j=0;j<x;j++){
	switch(*(vt+j)){
		
		case 'a': conta++;
		break;
		case 'c': contc++;
					acum=acum+*(vi+j);
		break;
	}		
	total=total+*(vi+j);
}
	printf("\n%c La cantidad de clientes por articulo es:\n",16);
	printf("\n%c Algodon: %i",7,conta);
	printf("\n%c Curitas: %i",7,contc);
	printf("\n\n%c Lo total facturado en la perfumeria es de $ %.2f",16,total);
	printf("\n%c Lo total facturado en venta de curitas fue de $ %.2f\n",16,acum);
}
