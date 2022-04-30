/*2) Escribir un programa que lea un vector de 10 elementos. Deberá imprimir el mismo vector
por pantalla pero invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa
debería imprimir 10 9 8 7 6 5 4 3 2 1.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main (){
    int tabla [10];
    int i;
  
    for(i=0;i<10;i++){
        printf("Ingrese un numero:\n");
        scanf("%d",&tabla[i]);
		}
    for(i=9;i>=0;i--){
        printf("El inverso de la tabla anterior es: %d \n",tabla[i]);
		}
    system("pause");
}

