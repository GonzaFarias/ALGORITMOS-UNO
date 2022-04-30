#include <stdio.h>
#include <stdlib.h>

/* 5- ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA DE UN VECTOR 
DESDE LA FUNCIÓN CARGA(), Y LUEGO MOSTRAR CUAL ES EL MAYOR NUMERO DEL 
VECTOR, UTILIZANDO PARA ENCONTRARLO LA FUNCIÓN ENCONTRARMAX(), QUE 
NO DEBERÁ DEVOLVER NINGÚN VALOR. EL VALOR MAXIMO DEBERA SER 
INFORMADO EN EL CUERPO PRINCIPAL. */

void funcion(int*);

void encontrarmax(int*,int*);

int main() {
	
int vector[10],max;

funcion(vector);
encontrarmax(vector,&max);
printf("El valor maximo es %d \n",max);
    return 0;
}

void funcion(int *vector){
int x=0,num;
for(x=0;x<10;x++){
printf("Ingrese un valor en la posicion %i \n",x);
scanf("%i",&num);
*(vector+x)=num;
}
}

void encontrarmax(int *vector,int *max){

int j;
*max=*vector;
for(j=1;j<10;j++){
if(*(vector+j)>*max){
*max=*(vector+j);
}
}
}
