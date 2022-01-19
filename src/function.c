/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>

void intercanvi(int num1, int num2){
	int aux;

	do{
		printf("Introdueix el primer num:\n");
		fflush(stdout);
		scanf("%d", &num1);
	}while(num1<1);

	do{
		printf("Introdueix el segon num:\n");
		fflush(stdout);
		scanf("%d", &num2);
	}while(num2<1);

	aux=num1;
	num1=num2;
	num2=aux;
	printf("El primer num és %d\nEl segon num es: %d\n", num2,num1);


}
