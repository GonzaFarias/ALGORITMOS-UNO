
#include <math.h> 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <conio.h>

float  funcion1(char tipvehiculo,char estadia,float horasf); void funcion2(int conta,int contb,int contc);

float funcion1(char tipvehiculo, char estadia, float horasf){
    float horas,estadiav;
    switch(tipvehiculo){	
        case 'c':horas=200,estadiav=500;	
        break;	
        case 'a':horas=100,estadiav=300;
        break;
        case 'm': horas=50,estadiav=200; 
        break; 
        }	 
        if(estadia=='S'){
            return estadiav;
        }else{
            return horas*horasf; 
            }	
  }

int main(){	
    int conta=0, contb=0, contc=0;	
    char vehiculo,estadia,opc;	
    char patente[20],condicion[15];	
    float horas;	
    printf("Ingrese si para comenzar con el registro de datos de vehiculos: ");
    system("color B");	
    scanf("%s",&condicion); 	
    while(strcmp(condicion,"si")==0){	

        printf("\nIngrese numero de patente: ");
        scanf("%s",&patente);	
        printf("\nIngrese 'c' para camioneta, 'a' para auto, 'm' para moto: ");	
        scanf("%s",&vehiculo);
        opc=vehiculo;	

        switch(vehiculo){	
            case 'c': 	
                printf("\nPagar por estadia? 'S'=Si, 'N'=No: ");
                scanf("%s",&estadia);	
                if(estadia=='S'){
                    printf("\nEl valor por estadia es de $500");
                    conta++;	
                    }	
                else{	
                     printf("\nIngrese cuantas horas permanecio en horas ($200 por hora): ");
                     scanf("%f",&horas);}	
             break;	

            case 'a':   
                printf("\nPagar por estadia? 'S'=Si, 'N'=No: ");
                scanf("%s",&estadia);	
                if(estadia=='S'){
                    printf("\nEl valor por estadia es de $300");	
                    contb++;}	
                else{	
                    printf("\nIngrese cuantas horas permanecio en horas ($100 por hora): ");	
                    scanf("%f",&horas);
                    }	
             break;	

             case 'm':	
                printf("\nPagar por estadia? 'S'=Si, 'N'=No: ");	
                scanf("%s",&estadia);	
                if(estadia=='S'){	
                    printf("\nEl valor por estadia es de $200");	
                    contc++;}
                else{
                    printf("\nIngrese cuantas horas permanecio en horas ($50 por hora): ");
                    scanf("%f",&horas);	}	
            break;	

            default: printf("\nHas ingresado mal el caracter");	
                      
            break; 	
         }	
                        
         printf("\nEl total a pagar por el estacionamiento es de: $ %2.f",funcion1(opc,estadia,horas));
         system("color C");
         printf("\nIngrese si para continuar con el registro de datos de vehiculos, de lo contrario ingrese no: ");	
         scanf("%s",&condicion);	
        }	

         funcion2(conta,contb,contc);
}
void funcion2(int conta, int contb, int contc){

    printf("\nLa cantidad de camionetas que pagaron por estadia son: %i ",conta);
    printf("\nLa cantidad de autos que pagaron por estadia son: %i",contb);
    printf("\nLa cantidad de motos que pagaron por estadia son: %i",contc);
}
