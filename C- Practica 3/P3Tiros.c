#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int menu();

void datos(int,int,char,int,int*,int*,char*,int*,int);

void informe(int*,int*,char*,int*,int);

int main(){
	
	int codigo,dist,fmenu,vcod[10],vdist[10],result,vpts[10],x=0,flag=0,ganador,max;
	char pos,vpos[10];
	setlocale(LC_CTYPE,"spanish");
	system("color 0A");
	printf(" \t\t\t *************************************************************");
	printf("\n\t\t\t** %c BIENVENIDO AL PROGRAMA DE REGISTRO DE TIROS AL BLANCO %c **\n",05,05);
	printf(" \t\t\t *************************************************************\n\n");
	
	fmenu=menu();
	
	do{
		
		switch(fmenu){
			
			case 1:
					printf("\nCódigo de tirador (1 a 10): ");
					scanf("%i",&codigo);
					printf("\nPosicion en el blanco:\n'C'=centro\n'M'=medio\n'B'=borde\n'F'=fuera\n");
					scanf(" %c",&pos);
					printf("\nDistancia alcanzada (1= 10m  -  2= 20m): ");
					scanf("%i",&dist);
						if(dist==1){
			
							switch(pos){
								case 'C': result=100;
								break;
								case 'M': result=50;
								break;
								case 'B': result=10;
								break;
								case 'F': result= -10;
							}
			
						}
						else if(dist==2){
						
							switch(pos){
								case 'C': result=200;
								break;
								case 'M': result=100;
								break;
								case 'B': result=20;
								break;
								case 'F': result= -20;
							}
						}
						
						if(flag==0){
							ganador=codigo;
							max=result;
							flag=1;
						}
						else if(result>max){
							max=result;
							ganador=codigo;
						}
						system("cls");
					datos(result,codigo,pos,dist,vpts,vcod,vpos,vdist,x);
					x++;
					fflush(stdin);
			break;
			case 2:
					informe(vpts,vcod,vpos,vdist,x);
			break;
			case 3:
			break;
			default: system("color 0C"); printf("\nError");
			break;
	}
		
		fflush(stdin);
		
	fmenu=menu();
			
	}while(fmenu!=3);
	
	printf("\nEl ganador fue el tirador %i, y su puntaje fue de %i puntos.\n",ganador,max);
		system("pause");
		system("cls");
		system("color 0C");
		printf("\nSe ha salido del programa");
	
}

int menu(){
int opc;
printf("\n1 - Ingresar datos de los tiros al blanco del Concurso\n2 - Mostrar por pantalla y Registrar resultados del Concurso.\n3- Salir.\n");
scanf("%i",&opc);
return opc;
}

void datos(int puntos,int codigo,char pos,int dist,int *vpts,int *vcod,char *vpos,int *vdist,int x){
	
	*(vcod+x)=codigo;
	*(vpos+x)=pos;
	*(vdist+x)=dist;
	*(vpts+x)=puntos;
}

void informe(int *vpts,int *vcod,char *vpos,int *vdist,int x){
	
	int j=0,puntos;
	
	for(j=0;j<x;j++){	
		printf("\nDatos del tiro número %i:\n",j+1);
		printf("\nCodigo de tirador: %i",*(vcod+j));
		printf("\nPosicion en el blanco: %c",*(vpos+j));
		printf("\nDistancia obtenida: %i",*(vdist+j));
		printf("\nPuntaje obtenido: %i\n",*(vpts+j));	}
		system("pause");
		system("cls");
}



