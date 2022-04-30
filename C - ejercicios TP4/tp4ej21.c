/*21) El siguiente programa contiene errores, corrígelo:*/

#include <stdio.h>
#include <stdlib.h>
#define Tope 10

main(){


int tabla[Tope], i, aux;
for (i=0; i<Tope; i++){
 tabla[i]=i;
i=i+1;
}
i=0;
while(i<=Tope){
 aux=tabla[i];
tabla[i]=tabla[i+1];
tabla[i+1]=aux;
}
printf("\n\n");
system ("PAUSE");
}

