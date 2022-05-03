Algoritmo ejer_cine
	matine <- 25
	normal <- 50
	flag <- 0
	Escribir 'Presione s para iniciar'
	Leer inicio
	Mientras inicio=='s' Hacer
		Escribir 'Ingrese que turno desea'
		Escribir '1 para Matine ($25)'
		Escribir '2 para Normal ($50)'
		Leer turno
		Si turno=='1' Entonces
			Escribir 'Seleccione para que pelicula quiere una entrada'
			Escribir '1 - Corazon de Leon'
			Escribir '2 - El conjuro'
			Escribir '3 - Metegol'
			Escribir '4 - Jobs'
			Leer peli1
			Segun peli1  Hacer
				1:
					contadorpeli11 <- contadorpeli11+1
					Si contadorpeli11<=40 Entonces
						ventas11 <- ventas11+1
					FinSi
				2:
					contadorpeli12 <- contadorpeli12+1
					Si contadorpeli12<=40 Entonces
						ventas12 <- ventas12+1
					FinSi
				3:
					contadorpeli13 <- contadorpeli13+1
					Si contadorpeli13<=40 Entonces
						ventas13 <- ventas13+1
					FinSi
				4:
					contadorpeli14 <- contadorpeli14+1
					Si contadorpeli14<=40 Entonces
						ventas14 <- ventas14+1
					FinSi
			FinSegun
			contadormatine <- contadormatine+1
		SiNo
			Si turno=='2' Entonces
				Escribir 'Seleccione para que pelicula quiere una entrada'
				Escribir '1 - Corazon de Leon'
				Escribir '2 - El conjuro'
				Escribir '3 - Metegol'
				Escribir '4 - Jobs'
				Leer peli2
				Segun peli2  Hacer
					1:
						contadorpeli21 <- contadorpeli21+1
						Si contadorpeli21<=40 Entonces
							ventas21 <- ventas21+1
						FinSi
					2:
						contadorpeli22 <- contadorpeli22+1
						Si contadorpeli22<=40 Entonces
							ventas22 <- ventas22+1
						FinSi
					3:
						contadorpeli23 <- contadorpeli23+1
						Si contadorpeli23<=40 Entonces
							ventas23 <- ventas23+1
						FinSi
					4:
						contadorpeli24 <- contadorpeli24+1
						Si contadorpeli24<=40 Entonces
							ventas24 <- ventas24+1
						FinSi
				FinSegun
				contadornormal <- contadornormal+1
			FinSi
		FinSi
		Escribir 'Ingrese s si continua, de lo contrario n'
		Leer inicio
	FinMientras
	guita11 <- ventas11*matine
	guita12 <- ventas12*matine
	guita13 <- ventas13*matine
	guita14 <- ventas14*matine
	guita21 <- ventas21*normal
	guita22 <- ventas22*normal
	guita23 <- ventas23*normal
	guita24 <- ventas24*normal
	guita1 <- guita11+guita21
	guita2 <- guita12+guita22
	guita3 <- guita13+guita23
	guita4 <- guita14+guita24
	ventas1 <- ventas11+ventas21
	ventas2 <- ventas12+ventas22
	ventas3 <- ventas13+ventas23
	ventas4 <- ventas14+ventas24
	Si flag==0 Entonces
		Si ventas1>ventasmax Entonces
			ventasmax <- ventas1
			pelimax <- 'Corazon de leon'
		FinSi
		Si ventas2>ventasmax Entonces
			ventasmax <- ventas2
			pelimax <- 'El conjuro'
		FinSi
		Si ventas3>ventasmax Entonces
			ventasmax <- ventas3
			pelimax <- 'Metegol'
		FinSi
		Si ventas4>ventasmax Entonces
			ventasmax <- ventas4
			pelimax <- 'Jobs'
		FinSi
		Si ventasmin<guita1 Entonces
			ventasmin <- guita1
			pelimin <- "Corazon de Leon"
		FinSi
		Si guita2<ventasmin Entonces
			ventasmin <- guita2
			pelimin <- "El conjuro"
		FinSi
		Si guita3<ventasmin Entonces
			ventasmin <- guita3
			pelimin <- "Metegol"
		FinSi
		Si guita4<ventasmin Entonces
			ventasmin <- guita4
			pelimin <- "Jobs"
		FinSi
	FinSi
	entradastotal <- contadornormal+contadormatine
	Escribir 'Se ha vendido una cantidad de ',ventas11,' entradas de la pelicula Corazon de Leon, en el turno matine'
	Escribir 'El total vendido en el turno normal es de ',contadornormal,' entradas'
	Escribir 'La cantidad total de entradas vendidas es de ',entradastotal
	Escribir 'La pelicula que mas ha vendido es ',pelimax
	Escribir "La pelicula que menos ha recaudado es ",pelimin,",recaudo tan solo $",ventasmin
FinAlgoritmo
