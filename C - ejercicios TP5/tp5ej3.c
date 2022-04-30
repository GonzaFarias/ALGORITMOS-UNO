/*3- ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA DE UN VECTOR
DESDE LA FUNCIÓN CARGA(), Y LUEGO MUESTRE LOS VALORES IMPRIMIÉNDOLOS
DESDE EL CUERPO PRINCIPAL*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void carga (int *);

int main()
{
    int enteros[5], y;
                   
    carga (enteros);
     
    system("pause");
}
     
void carga (int *ent){

     
     
     int numero, y;
     
     for (y=0;y<5;y++) {
        printf("Ingrese el elemento %d del vector\n",y);
        scanf("%d", &numero);  
        *(ent+y)=numero;
     }
      printf("\n\n");
             
}

