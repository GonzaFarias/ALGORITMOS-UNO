#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	char nom[30];	

	float mes = 3000, semana = 1500, dia =300, resta,compra=0;

	int funcional=0,com,opcion,dni=0,tiempo,acumulador=0,gim=0,boxeo=0,acumuladorbo=0,acumuladorfun=0,bandera=0;	

	//entrada//


	printf ("\n\nDesea relizar una operacion: \n1.Si \n0.No \nOpcion seleccionada: ");
	scanf("%i",&com);

	if(com!=1 || com!=0){
		printf("Intente de nuevo, solo se puede elegir entre 1 (Si) y 0 (No)");
	}

	//mientras//
	while(com == 1) {

	fflush(stdin);	
	printf("\nIngresar nombre del cliente: ");
	gets(nom);

	printf("\nIngresar DNI del cliente: ");
	scanf("%i",&dni);

	printf("\nNombre del cliente: %s \nDNI del cliente: %i",nom,dni);

	printf("\n\nA que plan desea inscribirse el cliente: \n1.Gimnasio \n2.Boxeo \n3.Funcional \n0.Salir \nOpcion elegida: ");
	scanf ("%i",&opcion);
	char elegido[10];
	
	
	printf("\n\nCuota por: \n\n1.Mes \n2.Semana \n3.Dia \nOpcion elegida: ");	
	scanf("%i",&tiempo);

	if(opcion==1){
		elegido="Gimnasio";
	}
	else if (opcion==2){
		elegido="Boxeo"
	}
	else if(opcion==3){
		elegido="Funcional"
	}
	else if(opcion==0){
		tiempo=0;
	}

	switch (tiempo){
		case 1: printf("\nPlan elegido %s con duracion de cuota un Mes.",elegido);		
				printf("\nTotal a pagar: %2.f",mes);
				bandera=1		
		break;
				
		case 2: printf("\nPlan elegido %s con duracion de cuota una semana.",elegido);		
				printf("\nTotal a pagar: %2.f",semana);
				bandera=1
		break;
					
		case 3: printf("\nPlan elegido %s con duracion de cuota un Dia.",elegido);						
				printf("\nTotal a pagar: %2.f",dia);
				bandera=1
		break;

		case 0:	printf ("\nEsta seguro de salir del menu \n0.Si \n1.No \nOpcion seleccionada: ");
				scanf("%i",&com);
		break;		
		default:
				printf("nOpcion incorrecta."); 
		break;
	}
	if(bandera==1){
		if(opcion==1){
			gim+=1;
		}
		else if (opcion==2){
			boxeo+=1
		}
		else if(opcion==3){
			funcional+=1
		}
	}
	bandera = 0;

	printf ("\n\nDesea realizar otra operacion: \n1.Si \n0.No \nOpcion elegida: ");
	scanf("%i",&com);
	system("cls");
}

/* Salidas de datos*/
/*Acumulador Clientes inscriptos*/

printf("\nTotal de clientes en el dia: %i",(gim+boxeo+funcional));

printf("\nClientes inscriptos en el gimnasio %i: ",gim);

printf("\nClientes inscriptos en boxeo %i: ",boxeo);

printf("\nClientes inscriptos en funcional %i: ",funcional);

printf("\n\nUltimo cliente ingresado: %s   %i",nom,dni);




	return 0;
}
