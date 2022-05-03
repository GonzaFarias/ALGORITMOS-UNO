Algoritmo combis
	Definir combia,combib Como Caracter
	Definir importea,importeb Como Entero
	Definir peajea,peajeb Como entero
	Definir kmb Como Entero
	Definir kma Como Entero
	Definir contador Como entero
	flag <- 0
	contador <- 1
	Definir inicio Como Caracter
	Escribir 'Ingrese S para iniciar'
	Leer inicio
	Mientras inicio=='S' Hacer
		Escribir 'Ingrese A para combi A'
		Leer combia
		Si combia=='A' Entonces
			Escribir 'Cuantos km ha recorrido? numero sin fraccion'
			Leer kma
			Escribir 'Ingrese importe por llenado de tanque en $'
			Leer importea
			Escribir 'Tuvo gastos de peaje? De ser asi ingrese S'
			Leer condicion
			Si condicion=='S' Entonces
				Escribir 'Ingrese importe total de peajes del dia'
				Leer peajea
			FinSi
			totalgastoa <- importea+peajea
			promedioa <- totalgastoa/kma
			acumgastoa <- acumgastoa+totalgastoa
			Escribir 'El gasto total de la combi A es de $',totalgastoa
			Escribir 'El promedio de gasto por km es de $',promedioa
		FinSi
		Escribir 'Ingrese B para combi B'
		Leer combib
		Si combib=='B' Entonces
			Escribir 'Cuantos km ha recorrido? numero sin fraccion'
			Leer kmb
			Escribir 'Ingrese importe por llenado de tanque en $'
			Leer importeb
			Escribir 'Tuvo gastos de peaje? De ser asi ingrese S'
			Leer condicion
			Si condicion=='S' Entonces
				Escribir 'Ingrese importe total de peajes del dia'
				Leer peajeb
			FinSi
			totalgastob <- importeb+peajeb
			promediob <- totalgastob/kmb
			acumgastob <- acumgastob+totalgastob
			Escribir 'El gasto total de la combi B es de $',totalgastob
			Escribir 'El promedio de gasto por km es de $',promediob
		FinSi
		Si flag==0 Entonces
			Si kma>kmb Entonces
				maxdist <- kma
				maxcombi <- "A"
				maxdia <- contador
			FinSi
			Si kmb>kma Entonces
				maxdist <- kmb
				maxcombi <- 'B'
				maxdia <- contador
			FinSi
			flag <- 1
		SiNo
			Si kma>maxdist Entonces
				maxdist <- kma
				maxcombi <- 'A'
				maxdia <- contador
			FinSi
			Si kmb>maxdist Entonces
				maxdist <- kmb
				maxcombi <- 'B'
				maxdia <- contador
			FinSi
		FinSi
		contador <- contador+1
		Si contador=4 Entonces
			Escribir 'Pulsa N para informar los datos de la semana'
		SiNo
			Escribir 'Pulse S para pasar al siguiente dia'
		FinSi
		Leer inicio
	FinMientras
	Escribir 'DIA',contadordia
	Escribir 'La mayor distancia recorrida fue de ',maxdist,' hecha por la combi ',maxcombi,' el dia ',maxdia
	Escribir 'El gasto total de la semana por combi A fue de $',acumgastoa,', el de la combi B fue de $',acumgastob
FinAlgoritmo
