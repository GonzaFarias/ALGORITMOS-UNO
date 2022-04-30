#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

int opciones();
int calculo (int*,char*,int,char,int);
int informe (int*,char*,int);

int main ()
{		
	setlocale(LC_CTYPE,"spanish");
	int menu,i=0,resul,vectorresul[50];
	char pat[50];
	float tiem;
	char tipo,vectort[50];
	
	
	menu=opciones();
		
		while (menu!=3)
		{
			switch (menu)
			{
				case 1:
						printf ("Ingrese numero de patente\n");
						scanf ("%s",&pat);
						printf ("\nIngrese tiempo de permanencia en el estacionamiento\n");
						scanf ("%f",&tiem);
						printf ("\nIngrese tipo de vehiculo\n|c:camioneta||a:auto||m:moto|\n");
						scanf (" %c",&tipo);
							switch (tipo)
							{
								case 'c':
								
										resul=tiem*200;
										printf ("\nDebera pagar: %i\n",resul);
								break;	
								case 'a':
										resul=tiem*100;
										printf ("\nDebera pagar: %i\n",resul);
								break;
								case 'm':
										resul=tiem*50;
										printf ("\nDebera pagar: %i\n",resul);
								break;
							}
						calculo (vectorresul,vectort,resul,tipo,i);
						i++;
				break;
				case 2:
						informe (vectorresul,vectort,i);
				break;
						
						
						
				
			}
			menu=opciones();
		}
		

}

int opciones ()
{
	int menu;
	printf ("--------------------------------------------------------------------------------\n1=Salida de un vehículo y cálculo del gasto de estacionamiento a pagar\n--------------------------------------------------------------------------------\n2=Generar Informe Resumen del día\n--------------------------------------------------------------------------------\n3=Salir\n--------------------------------------------------------------------------------\n");
	scanf ("%d",&menu);
	fflush(stdin);
	system ("cls");
	return menu;
}

int calculo (int *vectorresul,char*vectort,int resul,char tipo,int i)
{
	*(vectorresul+i)=resul;
	*(vectort+i)=tipo;
	fflush(stdin);
}

int informe (int *vectorresul,char*vectort,int i)
{
				
		int acum1=0,acum2=0,acum3=0,valor1=0,valor2=0,valor3=0,flag=0;
		int x,minv;
			for (x=0;x<i;x++)
			{
				switch (*(vectort+x))
				{
					case 'c':
								valor1=*(vectorresul+x);
								acum1=acum1+valor1;
									if (flag==0)
									{
										minv=valor1;
										flag=1;
									}
									if (valor1<minv)
									{
										minv=valor1;
								
									}
								
					break;	
					case 'a':
								valor2=*(vectorresul+x);
								acum2=acum2+valor2;
					break;
					case 'm':
								valor3=*(vectorresul+x);
								acum3=acum3+valor3;
					break;
				}
				
			}
					printf ("\nValor por camioneta: %i\n",acum1);
					printf ("Valor por auto: %i\n",acum2);
					printf ("Valor por moto: %i\n",acum3);
					printf ("El monto total del dia es: %i\n",acum1+acum2+acum3);
									printf ("El monto minimo en camioneta es: %i\n",minv);
									
}	
	
