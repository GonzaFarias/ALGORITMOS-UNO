Algoritmo estacion_servicio
	definir legajo como entero
	np <- 15
	dp <- 20
	nafta <- 2000
	diesel <- 1000
	reposicion <- 250
	definir litrosn, litrosd como entero
	definir turno como caracter
	definir combustible como caracter
	Escribir "Ingrese S para iniciar su turno"
	Leer turno
	Mientras turno=="S" Hacer
		Escribir "Ingrese legajo"
		Leer legajo
		Escribir "Ingrese combustible solicitado, N para Nafta o D para diesel"
		Leer combustible
		Segun combustible Hacer
			"N":
				Escribir "Indique cantidad de litros"
				Leer litrosn
				coston <- litrosn*np
				nafta <- nafta-litrosn
				acumn <- acumn+coston
				Escribir "El importe a cobrar de la nafta es de $",coston
				Si nafta<=reposicion Entonces
					Escribir "La cantidad de litros de nafta en stock es ",nafta
					Escribir "Solicitar pedido al distribuidor"
				FinSi
			"D":
				Escribir "Indique cantidad de litros"
				Leer litrosd
				costod <- litrosd*dp
				diesel <- diesel-litrosd
				acumd <- acumd+costod
				Escribir "El importe a cobrar de la diesel es de $",costod
				Si diesel<=reposicion Entonces
					Escribir "La cantidad de litros de diesel en stock es ",diesel
					Escribir "Solicitar pedido al distribuidor"
				FinSi
		FinSegun
		acumtotal <- acumn+acumd
		Escribir "Si finaliza su turno ingrese N, si continua ingrese S"
		Leer turno
	FinMientras
	Escribir "El legajo es ",legajo
	Escribir "La cantidad de $ total recaudada por nafta es de $",acumn
	Escribir "La cantidad de $ total recaudada por diesele de $",acumd
	Escribir "La cantidad de $ total recaudada de combustible es $",acumtotal
	Escribir "La cantidad den stock de nafta es de ",nafta," y de diesel es de ",diesel
FinAlgoritmo
