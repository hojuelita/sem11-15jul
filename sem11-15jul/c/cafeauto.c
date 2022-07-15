/* Problema: Escriba un programa que despliegue un menú para una máquina de café automática. */

#include <stdio.h>

int main(){

//	Almacenamos los datos del café para generar el ticket
	char *tipo, *sabor = "";
	char *cafes[] = {"americano","moka","capucchino","latte"};
	char *sabores[] = {"vainilla","coco","crema irlandesa","menta","amaretto","ninguno"};
	int elec, precio = 0;

//	do{
	printf("Bienvenido(a) a Café Instantáneo, elija el número de su bebida: \n (1) Americano \t $15 \n (2) Moka \t $25 \n (3) Capucchino  $20 \n (4) Latte \t $20 \n");
	scanf("%d", &elec);

	switch(elec){
		case 1: 
			precio = 15;
			tipo = cafes[0];
			break;
		case 2: 
			precio = 25;
			tipo = cafes[1];
			break;
		case 3: 
			precio = 20;
			tipo = cafes[2];
			break;
		case 4: 
			precio = 20;
			tipo = cafes[3];
			break;
		default:
			printf("Ingrese un número del menú de cafés.\n");
			break;
	}

	printf("Elija un sabor, se añadirá un costo extra de $5 :\n (1) Vainilla \n (2) Coco \n (3) Crema irlandesa \n (4) Menta \n (5) Amaretto \n (6) Ninguno \n");
		
	scanf("%d",&elec);

	switch(elec){
		case 1:
			sabor = sabores[0];
			precio = precio + 5;
			break;
		case 2:
			sabor = sabores[1];
			precio = precio + 5;
			break;
		case 3:
			sabor = sabores[2];
			precio = precio + 5;
			break;
		case 4:
			sabor = sabores[3];
			precio = precio + 5;
			break;
		case 5:
			sabor = sabores[4];
			precio = precio + 5;
			break;
		case 6:
			sabor = sabores[5];
			break;
		default:
			printf("Ingrese un número del menú de sabores.\n");
		}

		printf("Generando ticket ...\n-----------------------");
		printf("\n Café tipo: %s \n Sabor: %s \n Total: $%d \n", tipo, sabor, precio);
		printf("-----------------------\n Gracias por su compra. \n" );

	return 0;	
}