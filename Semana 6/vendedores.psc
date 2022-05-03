Algoritmo vendedores
	Definir vendedor Como Entero
	Definir cliente Como Caracter
	flag <- 0
	flag2 <- 0
	Escribir 'Ingrese s para comenzar'
	Leer inicio
	Mientras inicio=='s' Hacer
		Escribir 'Ingrese el codigo de vendedor (1,2,3,4,5)'
		Leer vendedor
		Segun vendedor  Hacer
			1:
				Escribir 'Marcar E si el cliente es de la empresa, marcar P si el cliente es potencial'
				Leer cliente
				Si cliente=='E' Entonces
					Escribir 'Ingrese el codigo de cliente'
					Leer cod1E
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad1E
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km1E
					acumkm1E <- acumkm1E+km1E
					Si unidad1E>=10000 Entonces
						clientee1 <- clientee1+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad1E>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad1E>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadore5 <- contadore5+1
				FinSi
				Si cliente=='P' Entonces
					Escribir 'Ingrese nombre del cliente'
					Leer nombre1P
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad1P
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km1P
					acumkm1P <- acumkm1P+km1P
					Si unidad1P>=10000 Entonces
						clientep1 <- clientep1+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad1P>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad1P>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadorp5 <- contadorp5+1
				FinSi
			2:
				Escribir 'Marcar E si el cliente es de la empresa, marcar P si el cliente es potencial'
				Leer cliente
				Si cliente=='E' Entonces
					Escribir 'Ingrese el codigo de cliente'
					Leer cod2E
					Escribir 'Ingrese la cantidad de unidades vendidas o proyectadas'
					Leer unidad2E
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km2E
					acumkm2E <- acumkm2E+km2E
					Si unidad2E>=10000 Entonces
						clientee2 <- clientee2+1
						Escribir 'El codigo de vendedor es 2 y la clasificacion del cliente es A'
					SiNo
						Si unidad2E>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad2E>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadore <- contadore+1
				FinSi
				Si cliente=='P' Entonces
					Escribir 'Ingrese nombre del cliente'
					Leer nombre2P
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad2P
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km2P
					acumkm2P <- acumkm2P+km2P
					Si unidad2P>=10000 Entonces
						clientep2 <- clientep2+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad2P>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad2P>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadorp <- contadorp+1
				FinSi
			3:
				Escribir 'Marcar E si el cliente es de la empresa, marcar P si el cliente es potencial'
				Leer cliente
				Si cliente=='E' Entonces
					Escribir 'Ingrese el codigo de cliente'
					Leer cod3E
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad3E
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km3E
					acumkm3E <- acumkm3E+km3E
					Si unidad3E>=10000 Entonces
						clientee3 <- clientee3+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad3E>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad3E>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadore2 <- contadore2+1
				FinSi
				Si cliente=='P' Entonces
					Escribir 'Ingrese nombre del cliente'
					Leer nombre3P
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad3P
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km3P
					acumkm3P <- acumkm3P+km3P
					Si unidad3P>=10000 Entonces
						clientep3 <- clientep3+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad3P>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad3P>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadorp2 <- contadorp2+1
				FinSi
			4:
				Escribir 'Marcar E si el cliente es de la empresa, marcar P si el cliente es potencial'
				Leer cliente
				Si cliente=='E' Entonces
					Escribir 'Ingrese el codigo de cliente'
					Leer cod4E
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad4E
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km4E
					acumkm4E <- acumkm4E+km4E
					Si unidad4E>=10000 Entonces
						clientee4 <- clientee4+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad4E>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad4E>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadore3 <- contadore3+1
				FinSi
				Si cliente=='P' Entonces
					Escribir 'Ingrese nombre del cliente'
					Leer nombre4P
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad4P
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km4P
					acumkm4P <- acumkm4P+km4P
					Si unidad4P>=10000 Entonces
						clientep4 <- clientep4+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad4P>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad4P>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadorp3 <- contadorp3+1
				FinSi
			5:
				Escribir 'Marcar E si el cliente es de la empresa, marcar P si el cliente es potencial'
				Leer cliente
				Si cliente=='E' Entonces
					Escribir 'Ingrese el codigo de cliente'
					Leer cod5E
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad5E
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km5E
					acumkm5E <- acumkm5E+km5E
					Si unidad5E>=10000 Entonces
						clientee5 <- clientee5+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad5E>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad5E>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadore4 <- contadore4+1
				FinSi
				Si cliente=='P' Entonces
					Escribir 'Ingrese nombre del cliente'
					Leer nombre5P
					Escribir 'Ingrese cantidad de unidades vendidas o proyectadas'
					Leer unidad5P
					Escribir 'Ingrese la cantidad de KM recorridos'
					Leer km5P
					acumkm5P <- acumkm5P+km5P
					Si unidad5P>=10000 Entonces
						clientep5 <- clientep5+1
						Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es A'
					SiNo
						Si unidad5P>=5000 Entonces
							Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es B'
						SiNo
							Si unidad5P>=0 Entonces
								Escribir 'El codigo de vendedor es 1 y la clasificacion del cliente es C'
							FinSi
						FinSi
					FinSi
					contadorp4 <- contadorp4+1
				FinSi
		FinSegun
		Si flag==0 Entonces
			Si km1E>kmmaxe Entonces
				kmmaxe <- km1E
				maxcodee <- cod1E
			SiNo
				Si km2E>kmmaxe Entonces
					kmmaxe <- km2E
					maxcodee <- cod2E
				SiNo
					Si km3E>kmmaxe Entonces
						kmmaxe <- km3E
						maxcodee <- cod2E
					SiNo
						Si km4E>kmmaxe Entonces
							kmmaxe <- km4E
							maxcodee <- cod4E
						SiNo
							Si km5E>kmmaxe Entonces
								kmmaxe <- km5E
								maxcodee <- cod5E
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			flag <- 1
		SiNo
			Si km1E>kmmaxe Entonces
				kmmaxe <- km1E
				maxcodee <- cod1E
			SiNo
				Si km2E>kmmaxe Entonces
					kmmaxe <- km2E
					maxcodee <- cod2E
				SiNo
					Si km3E>kmmaxe Entonces
						kmmaxe <- km3E
						maxcodee <- cod2E
					SiNo
						Si km4E>kmmaxe Entonces
							kmmaxe <- km4E
							maxcodee <- cod4E
						SiNo
							Si km5E>kmmaxe Entonces
								kmmaxe <- km5E
								maxcodee <- cod5E
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		Si flag2==0 Entonces
			Si km1P>kmmaxP Entonces
				kmmaxP <- km1P
				maxcodeP <- nombre1P
			SiNo
				Si km2P>kmmaxP Entonces
					kmmaxP <- km2P
					maxcodeP <- nombre2P
				SiNo
					Si km3P>kmmaxP Entonces
						kmmaxP <- km3P
						maxcodeP <- nombre3P
					SiNo
						Si km4P>kmmaxP Entonces
							kmmaxP <- km4P
							maxcodeP <- nombre4P
						SiNo
							Si km5P>kmmaxP Entonces
								kmmaxP <- km5P
								maxcodeP <- nombre5P
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			flag2 <- 1
		SiNo
			Si km1P>kmmaxP Entonces
				kmmaxP <- km1P
				maxcodeP <- nombre1P
			SiNo
				Si km2P>kmmaxP Entonces
					kmmaxP <- km2P
					maxcodeP <- nombre2P
				SiNo
					Si km3P>kmmaxP Entonces
						kmmaxP <- km3P
						maxcodeP <- nombre3P
					SiNo
						Si km4P>kmmaxP Entonces
							kmmaxP <- km4P
							maxcodeP <- nombre4P
						SiNo
							Si km5P>kmmaxP Entonces
								kmmaxP <- km5P
								maxcodeP <- nombre5P
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		Escribir 'Pulse s para continuar, de lo contrario pulse n'
		Leer inicio
	FinMientras
	totalkm1 <- acumkm1P+acumkm1E
	totalkm2 <- acumkm2P+acumkm2E
	totalkm3 <- acumkm3P+acumkm3E
	totalkm4 <- acumkm4P+acumkm4E
	totalkm5 <- acumkm5P+acumkm5E
	clientesAtotalE <- clientee1+clientee2+clientee3+clientee4+clientee5
	clientesAtotalP <- clientep1+clientep2+clientep3+clientep4+clientep5
	clientestotalE <- contadore+contadore2+contadore3+contadore4+contadore5
	clientestotalP <- contadorp+contadorp2+contadorp3+contadorp4+contadorp5
	porcentajeP <- (clientesAtotalP*100)/clientestotalP
	porcentajeE <- (clientesAtotalE*100)/clientestotalE
	Escribir 'Para saber el porcentaje de clientes clasificacion A de de la empresa presione E, para saber el de clientes potenciales presione P'
	Leer saber
	Si saber=='E' Entonces
		Escribir 'El porcentaje de clientes de la empresa con clasificacion A es de %',porcentajeE
	SiNo
		Si saber=='P' Entonces
			Escribir 'El porcentaje de clientes potenciales con clasificacion A es de %',porcentajeP
		FinSi
	FinSi
	Escribir 'La cantidad total de Km recorridos por el vendedor 1 es de ',totalkm1
	Escribir 'La cantidad total de Km recorridos por el vendedor 2 es de ',totalkm2
	Escribir 'La cantidad total de Km recorridos por el vendedor 3 es de ',totalkm3
	Escribir 'La cantidad total de Km recorridos por el vendedor 4 es de ',totalkm4
	Escribir 'La cantidad total de km recorridos por el vendedor 4 es de ',totalkm5
	Si kmmaxe>kmmaxP Entonces
		Escribir 'LA CANTIDAD MAXIMA DE KM RECORRIDOS FUE DE ',kmmaxe,' EN CAMINO AL CLIENTE DE EMPRESA CON CODIGO ',maxcodee
	SiNo
		Escribir 'LA CANTIDAD MAXIMA DE KM RECORRIDOS FUE DE ',kmmaxP,' EN CAMINO AL CLIENTE POTENCIAL CON NOMBRE ',maxcodeP
	FinSi
FinAlgoritmo
