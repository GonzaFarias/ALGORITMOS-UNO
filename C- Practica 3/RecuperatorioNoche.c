#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

void func_informe(char *,int *,char *,char *,int );
void func_datos(char,int,char,char,char *,int *,char *,char *,int);

int main(){
	
char academica,digital,biblioteca;
char v_academica[10],v_digital[10],v_biblioteca[10];
int preg,cant_libros,v_cant_libros[10],i;

	
	
	printf("----------------------------------------------------------\n");
	printf("----------------------------------------------------------\n");
	printf("----------------- Gestion estudiantil --------------------\n");
	printf("-------------------- Universitaria -----------------------\n");
	printf("----------------------------------------------------------\n");
	printf("----------------------------------------------------------\n");
	system("pause");
		
	

	printf("1-Ingrese datos datos de la encuesta\n");
	printf("2-Emitir resultados\n");
	printf("3-salir\n");
	
	scanf("%i", &preg);
	
	
		while(preg!=3){
			switch(preg){
				
				case 1:
						printf("Ingresar si es Estudiante(e) o Graduado(g):\n"); scanf(" %c",&academica);
							fflush( stdin );

						printf("Cantidad de libros que tiene en su casa? \n(1=Entre 0 y 20)(2=entre 21 y 50)(3=entre 51 y 100)(4=mas de 100)\n"); scanf("%i",&cant_libros);
							fflush( stdin );

						printf("Consulta bibliotecas digitales? \n('m'=muy a menudo, 'a'=a veces, 'c'=casi nunca, 'n'=nunca)\n"); scanf(" %c",&digital);
							fflush( stdin );
						printf("Consulta y visita la biblioteca universitaria ( 'm'=muy a menudo, 'a'=a veces, 'c'=casi nunca, 'n'=nunca)\n"); scanf(" %c",&biblioteca);
							fflush( stdin );
							
							
								func_datos(academica,cant_libros,digital,biblioteca,v_academica,v_cant_libros,v_digital,v_biblioteca,i);
								i++;
				
							break;
			
				case 2:
					
				 func_informe(v_academica,v_cant_libros,v_digital,v_biblioteca,i);
				 
							break;	
				
			}//termina el switch
	
		
		
	printf("1-Ingrese datos datos de la encuesta\n");
	printf("2-Emitir resultados\n");
	printf("3-salir\n");
	
	scanf("%i", &preg);

		}//termina el while
	
}

void func_datos(char dato1,int dato2,char dato3,char dato4,char *v1,int *v2,char *v3,char *v4,int i){
	
	*(v1+i)=dato1;
	*(v2+i)=dato2;
	*(v3+i)=dato3;
	*(v4+i)=dato4;
}


void func_informe(char *v1,int *v2,char *v3,char *v4,int i){
int k,cont_e=0,cont_g=0,acumv1=0,porc_1=0,porc_2=0,porc_3=0,porc_4=0,cont1=0,cont2=0,cont3=0,cont4=0;
for (k=0;k<i;k++){
	
	if(*(v3+k)=='n' && *(v4+k)=='n'){
		if(*(v1+k)=='e'){
			cont_e++;
		}else{ cont_g++;
		}/*cierra else*/
		
	}/*termina el if*/ 
	
	if(*(v1+k)=='e' || *(v1+k)=='g'){
			acumv1++;
		}
		
		
		switch(*(v2+k)){
				
			case 1:
				cont1++;
				
		break;
			
			case 2:
				cont2++;
		break;
			
			case 3:
				cont3++;
		break;
			
			case 4:
				cont4++;
		break;
			
			
		}//termina switch
	
	
	/* porcentaje de 0 a 20 libros(%)=total de estudiantes y graduados/100*cont1
	
	*/
	
	
	
}/*termina for*/

printf("Cantidad de estudiantes que no consultan nunca bibliotecas digitales y blibliotecas universitaria: %i\n", cont_e);
printf("Cantidad de graduados que no consultan nunca bibliotecas digitales y blibliotecas universitaria: %i\n", cont_g);



porc_1=100/acumv1*cont1;
porc_2=100/acumv1*cont2;
porc_3=100/acumv1*cont3;
porc_4=100/acumv1*cont4;

printf("El porcentaje de encuestados que tienen de 0 a 20 libros es de: %i\n",porc_1);
printf("El porcentaje de encuestados que tienen de 21 a 50 libros es de: %i\n",porc_2);
printf("El porcentaje de encuestados que tienen de 51 a 100 libros es de: %i\n",porc_3);
printf("El porcentaje de encuestados que tienen de mas de 100 libros es de: %i\n",porc_4);


}/*termina funcion*/
