/*5) Escribir un programa que lea 10 n�meros por teclado y los cargue en un vector. Luego
lea un n�mero m�s e indique si est� entre los anteriores. */

int main(){
	
	int x,num,numero;
	int vector[10];
	
	for(x=0;x<10;x++){
		printf("\nIngrese un numero: ");
		scanf("%d",&vector[x]);	
	}
	printf("\nIngrese el segundo valor: ");
	scanf("%i",&num);
	
	for(x=0;x<10;x++){
		numero=vector[x];
	}
	
	if(numero=num){
			printf("\nEl numero %i esta entre los anteriores",numero);
		}
}

