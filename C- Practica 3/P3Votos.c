#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void guardar(int*,char*,int,char,int);
char ganador(int*,char*,int);

int main(){
	
	int menu,clave,dni,vdni[100],x=0;
	char user[10],candidato,vcan[100],resultado;
	
	printf("**DATOS DEL PRESIDENTE DE MESA**\n");
	printf("\nUsuario: ");
	scanf("%s",&user);
	printf("\nClave: ");
	scanf("%i",&clave);

	menu=fmenu();
	
	do{
	
	switch(menu){
		case 1: 
				printf("\nIngrese DNI: ");
				scanf("%i",&dni);
				printf("\nCandidato elegido:\n'A' - Ironman.\n'B' - Capitan America.\n'C' - Hulk\n");
				scanf(" %c",&candidato);
				guardar(vdni,vcan,dni,candidato,x);
				x++;
		break;
		case 2:
				resultado=ganador(vdni,vcan,x);
				
				if(resultado=='A'){
					printf("\nEl ganador es A - IronMan\n");
				}
				else if(resultado=='B'){
					printf("\nEl ganador es B - Capitan America\n");
				}
				else if(resultado=='C'){
					printf("\nEl ganador es C - Hulk\n");
				}
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
	
	int fmenu(){
	int opc;
	printf("\nIngrese una de las siguientes opciones:\n1 - Votar.\n2 - Mostrar resultados.\n3 - Salir.\n");
	scanf("%i",&opc);
	system("cls");
	return opc;
}

	void guardar(int *vdni,char *vcan,int dni,char candidato, int x){
		
		*(vdni+x)=dni;
		*(vcan+x)=candidato;
	}
	
	char ganador(int *vdni,char *vcan,int x){
		
		int j,conta=0,contb=0,contc=0,flag=0,max;
		char maxc;
		
		for(j=0;j<x;j++){
			
			switch(*(vcan+j)){
				case 'A': conta++;
				break;
				case 'B': contb++;
				break;
				case 'C': contc++;
				break;
			}
			if(flag=0){
				if(*vcan=='A'){
					max=conta;
				}
				else if(*vcan=='B'){
					max=contb;
				}
				else if(*vcan=='C'){
					max=contc;
				}
				flag=1;
			}
			else if(conta>max){
				maxc='A';
				conta=max;
			}
			else if(contb>max){
				maxc='B';
				max=contb;
			}
			else if(contc>max){
				maxc='C';
				max=contc;
		}
		}
		return maxc;		
}
	
	
	
	
	
	
	
	
