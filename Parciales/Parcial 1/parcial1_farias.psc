Algoritmo parcial1
	Eukanuba <- 1700
	Royal <- 1500
	Proplan <- 1300
	flag <- 0
	Definir inicio Como Caracter
	Definir codigo Como Caracter
	definir cliente, mincliente, maxcliente como cadena
	Definir maxproducto, minproducto Como Caracter
	DEFINIR acumtotal,cantidadE, cantidadR, cantidadP, totalmax, totalmin, totalpagar como entero
	Definir clientesE,clientesP,clientesR Como Entero
	clientesR <- 0
	clientesP <- 0
	clientesE <- 0
	Escribir 'Ingrese S para comenzar con la venta'
	Leer inicio
	Mientras inicio=='S' Hacer
		Escribir 'Ingrese el codigo del producto que desea'
		Escribir 'E - Para Eukanuba ($1700)'
		Escribir 'R - Para Royal Canin ($1500)'
		Escribir 'P - Para Proplan ($1300)'
		Leer codigo
		Segun codigo  Hacer
			'E':
				Escribir 'Ingrese nombre del cliente'
				Leer cliente
				Escribir 'Ingrese la cantidad de bolsas que desea'
				Leer cantidadE
				totalpagar <- cantidadE*Eukanuba
				Escribir 'El nombre del cliente es ',cliente,' y el monto total a pagar $',totalpagar
				clientesE <- clientesE+1
			'R':
				Escribir 'Ingrese nombre del cliente'
				Leer cliente
				Escribir 'Ingrese la cantidad de bolsas que desea'
				Leer cantidadR
				totalpagar <- cantidadR*Royal
				Escribir 'El nombre del cliente es ',cliente,' y el monto total a pagar $',totalpagar
				clientesR <- clientesR+1
			'P':
				Escribir 'Ingrese nombre del cliente'
				Leer cliente
				Escribir 'Ingrese la cantidad de bolsas que desea'
				Leer cantidadP
				totalpagar <- cantidadP*Proplan
				Escribir 'El nombre del cliente es ',cliente,' y el monto total a pagar $',totalpagar
				clientesP <- clientesP+1
			De Otro Modo:
				Escribir 'Codigo erroneo'
		FinSegun
		acumtotal <- acumtotal+totalpagar
		Si flag==0 Entonces
			Si totalpagar>totalmax Entonces
				totalmax <- totalpagar
				maxproducto <- codigo
				maxcliente <- cliente
				totalmin <- totalpagar
				minproducto <- codigo
				mincliente <- cliente
			FinSi
			flag <- 1
		SiNo
			Si totalpagar>totalmax Entonces
				totalmax <- totalpagar
				maxproducto <- codigo
				maxcliente <- cliente
			FinSi
			Si totalpagar<totalmin Entonces
				totalmin <- totalpagar
				minproducto <- codigo
				mincliente <- cliente
			FinSi
		FinSi
		Escribir 'Desea realizar otra venta? S/N'
		Leer inicio
	FinMientras
	Escribir 'La cantidad de clientes que compraron Eukanuba fue de ',clientesE
	Escribir 'La cantidad de clientes que compraron Royal Canin fue de ',clientesR
	Escribir 'La cantidad de clientes que comparon Proplan fue de ',clientesP
	Escribir 'El monto de compra maxima fue de ',totalmax,' codigo de producto ',maxproducto,' y el nombre del cliente es ',maxcliente
	Escribir 'El monto de compra minima fue de ',totalmin,' codigo de producto ',minproducto,' y el nombre del cliente es ',mincliente
	Escribir 'El monto total de ventas del dia fue de $',acumtotal
FinAlgoritmo
