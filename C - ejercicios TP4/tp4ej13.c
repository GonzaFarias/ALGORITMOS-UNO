#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/*13)Dise�ar un programa que permita responder a las preguntas �Cu�l es su nombre? Y
�Qu� edad tiene? Mostrar el resultado en pantalla (para almacenar el nombre debe
utilizar un arreglo de tipo char p/ej.: char arraynombre[13] y usar scanf(�%s�,
arraynombre ).*/

int main(){
	
	char nombre[15];
	int edad;
	
	printf("Cual es su nombre?: ");
	scanf("%s",&nombre);
	printf("Que edad tiene?: ");
	scanf("%i",&edad);
	
	printf("\nEl nombre es %s y la edad es %i",nombre,edad);
}
