Algoritmo cajero_practicaparcial
	Definir moneda,inicio Como Caracter
	Definir operacionA,operacionA2,operacionB2,operacionC2,operacionB,operacionC Como Entero
	Definir codigo Como Real
	d1 <- 100000
	e1 <- 100000
	e2 <- 100000
	d2 <- 100000
	flag <- 0
	contador <- 0
	Definir inicio Como Caracter
	Escribir 'Ingrese s para comenzar'
	Leer inicio
	Repetir
		Escribir 'Elija que cajero desea utilizar'
		Escribir 'Ingrese codigo 1 para Juan, codigo 2 para Ruben'
		// Si ingresa 0 finaliza
		Si contador>1 Entonces
			Escribir 'Si desea finalizar pulse 0'
		FinSi
		Leer codigo
		Segun codigo  Hacer
			1:
				Escribir 'Ingrese a, para Pesos'
				Escribir 'Ingrese b, para Dolares'
				Escribir 'Ingrese c para Euros'
				Leer moneda
				Segun moneda  Hacer
					'a':
						Escribir 'SOLICITE AL CLIENTE QUE REALICE ESTA OPERACION POR CAJERO AUTOMATICO'
					'b':
						Escribir 'Ingrese el tipo de operacion'
						Escribir '1 para deposito'
						Escribir '2 para Extraccion'
						Leer operacionB
						Si operacionB==1 Entonces
							contadord11 <- contadord11+1
							Escribir 'Ingrese el importe'
							Leer IMPb2
							Escribir 'El monto que ha depositado es $',IMPb2
						SiNo
							Escribir 'Ingrese el importe'
							Leer IMPb1
							Si IMPb1<d1 Entonces
								d1 <- d1-IMPb1
								contadord12 <- contadord12+1
								Escribir 'Usted realizo una extraccion de $',IMPb1
							SiNo
								Escribir 'Solicite al cliente que realice esta operacion en otro cajero'
							FinSi
							Si flag==0 Entonces
								maxext <- IMPb1
								flag <- 1
							SiNo
								Si IMPb1>maxext Entonces
									maxext <- IMPb1
								FinSi
							FinSi
						FinSi
					'c':
						Escribir 'Ingrese el tipo de operacion'
						Escribir '1 para Deposito'
						Escribir '2 para Extraccion'
						Leer operacionC
						Si operacionC==1 Entonces
							contadore11 <- contadore11+1
							Escribir 'Ingrese el importe'
							Leer IMPc2
							Escribir 'El monto que ha depositado es ',IMPc2,' Euros'
						SiNo
							Escribir 'Ingrese el importe'
							Leer IMPc1
							Si IMPc1<e1 Entonces
								contadore12 <- contadore12+1
								e1 <- e1-IMPc1
								Escribir 'Usted realizo una extraccion de ',IMPc1,' Euros'
							SiNo
								Escribir 'Solicite al cliente que realice la operacion en otro cajero'
							FinSi
						FinSi
				FinSegun
			2:
				Escribir 'Ingrese a, para Pesos'
				Escribir 'Ingrese b, para Dolares'
				Escribir 'Ingrese c para Euros'
				Leer moneda
				Segun moneda  Hacer
					'a':
						Escribir 'SOLICITE AL CLIENTE QUE REALICE ESTA OPERACION POR CAJERO AUTOMATICO'
					'b':
						Escribir 'Ingrese el tipo de operacion'
						Escribir '1 PARA DEPOSITO'
						Escribir '2 PARA EXTRACCION'
						Leer operacionB2
						Si operacionB2==1 Entonces
							contadorb22 <- contadorb22+1
							Escribir 'Ingrese el importe'
							Leer IMPb22
							Escribir 'El monto que ha depositado es de $',IMPb22
						SiNo
							Escribir 'Ingrese el importe'
							Leer IMPb11
							Si d2>IMPb11 Entonces
								contadorb11 <- contadorb11+1
								d2 <- d2-IMPb11
								Escribir 'El monto que ha extraido es de $',IMPb11
							SiNo
								Escribir 'SOLICITE AL CLIENTE QUE REALICE ESTA OPERACION EN OTRO CAJERO'
							FinSi
						FinSi
					'c':
						Escribir 'Ingrese el tipo de operacion'
						Escribir '1 PARA DEPOSITO'
						Escribir '2 PARA EXTRACCION'
						Leer operacionC2
						Si operacionC2==1 Entonces
							contadore22 <- contadore22+1
							Escribir 'Ingrese el importe'
							Leer IMPc22
							Escribir 'El monto que ha depositado es de',IMPc22,' Euros'
						SiNo
							Escribir 'Ingrese el importe'
							Leer IMPc11
							Si e2>IMPc11 Entonces
								contadorc11 <- contadorc11+1
								e2 <- e2-IMPc11
								Escribir 'El monto que ha extraido es de',IMPc11,'Euros'
							SiNo
								Escribir 'SOLICITE AL CLIENTE QUE REALICE ESTA OPERACION EN OTRO CAJERO'
							FinSi
						FinSi
				FinSegun
			0:
		FinSegun
		contador <- contador+1
	Hasta Que codigo<1
	Escribir 'El cajero 1 ha tenido una cantidad de extracciones de dolar de ',contadord12
	Escribir 'Y una cantidad de depositos de dolar de ',contadord11
	Escribir 'Una cantidad de extracciones de euros de ',contadore12
	Escribir 'Y una cantidad de depositos de euros de ',contadore11
	Escribir '******************************'
	Escribir 'El cajero 2 ha tenido una cantidad de extracciones de dolar de ',contadorb11
	Escribir 'Y una cantdiad de depositos de dolar de ',contadob22
	Escribir 'Una cantidad de extracciones de euros de ',contadorc11
	Escribir 'Y una cantdiad de depositos de euros de ',contadore22
	Escribir '*****************************'
	Escribir 'La mayor extraccion de dolares en el cajero 1 es de $',maxext
FinAlgoritmo
