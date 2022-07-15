/* Problema: En un videoclub se ofrece la promoción de llevarse tres películas por el precio de las dos más baratas. Haga un programa
que, dados los tres precios de las películas, determine la cantidad a pagar.*/

#include <stdio.h>

int main(){

	float precio1, precio2, precio3 = 0;
	float total = 0;

	printf("Introduzca los precios de 3 películas, separados por un espacio: \n");
	scanf("%f %f %f", &precio1, &precio2, &precio3);


	if(precio1 >= precio2){
		if(precio2 >= precio3){
			total = precio2 + precio3;
		}else{
			if(precio1 >= precio3){
				total = precio2 + precio3;
			}else{
				total = precio2 + precio1;
			}
		}
	}else{
		if(precio1 >= precio3){
			total = precio1 + precio3;
		}else{
			if(precio2 >= precio3){
				total = precio3 + precio1;
			}else{
				total = precio2 + precio1;
			}
		}
	}

	printf("\n El total es: %f \n", total);


	return 0;
}