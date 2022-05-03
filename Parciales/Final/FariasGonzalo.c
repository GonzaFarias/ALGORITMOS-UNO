#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void carga(int,char,float,int*,char*,float*,int);
void informar (int*,char*,float*,int);
int menu();
int main() {
	
	system("color 02");
	printf(" *************************************************");
	printf("\n** Bienvenido a la aplicacion de registro de datos **");
	printf("\n *************************************************\n\n");
	system("pause");
	system("cls");
	setlocale(LC_CTYPE,"spanish");
	int fmenu,num,vnum[50],i=0;
	float tiempo,vtiempo[50];
	char tipo,vtipo[50];
	fmenu=menu();
	while(fmenu!=3) {
	
	switch(fmenu){
		
		case 1:
			
				if(i<50){
					
					printf("\nIngrese numero de inscripcion del participante: ");
					scanf("%i",&num);
					printf("Tipo de prueba en la que participó (p = pastelería, m = mediterránea):\n");
					scanf(" %c",&tipo);
					printf("Tiempo, en minutos, en la que le llevo terminar la prueba: ");
					scanf("%f",&tiempo);
					carga(num,tipo,tiempo,vnum,vtipo,vtiempo,i);
					i++;
					printf("\n");
					system("pause");
				}
				else{
					
					printf("\nYa no puedes ingresar mas datos, has llegado a 50.");
				}
		break;
		case 2:
				informar (vnum,vtipo,vtiempo,i);
				
		break;
		case 3:
		break;
		
		default: 
				system("cls");
				system("color 04");		
				printf("\n**Opcion mal ingresada, intente de nuevo**\n\n");
				system("pause");
		break;
		
		}
		
		system("cls");
		
		fmenu=menu();	
	}
	system("cls");
	system("color 02");
	printf("\nSe ha salido del programa");


}


int menu(){
	
	int opc;	
	
	system("color 07");
	printf("\nIngresar una de las siguientes opciones: ");
	printf("\nOpción 1 - Ingresar datos de los participantes\nOpción 2 - Generar informes del concurso\nOpción 3 - Salir:\n- ");
	scanf("%i",&opc);
	
	return opc; }
	
void carga(int num,char tipo,float tiempo,int *vnum,char *vtipo,float *vtiempo,int i){

*(vnum+i)=num;
*(vtipo+i)=tipo;
*(vtiempo+i)=tiempo;
	
 }
 
void informar (int *vnum,char *vtipo,float *vtiempo,int i){

int j,contp=0;
float acum=0;

for(j=0;j<i;j++){
	
	if(*(vtipo+j)=='p'){
		contp++;
		
		}
	else if(*(vtipo+j)=='m'){
		
		acum=acum+*(vtiempo+j);
		printf("\nEl participante numero de inscripcion %i consiguio un tiempo de %.2f minutos",*(vnum+j),*(vtiempo+j));
		}	
	
 }
 
 printf("\nLa cantidad de personas que se inscribieron a la prueba de pasteleria es de %i\n",contp);
 printf("\nEl tiempo total acumulado en mediterránea es de %.2f\n\n",acum);
 system("pause");
 system("cls");
 
 }









