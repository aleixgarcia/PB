/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>

int validar(int num){
	do{
		printf("Introdueix el primer num:\n");
		fflush(stdout);
		scanf("%d", &num);
	}while(num<1);
	return num;
}
void resultat(int num){
	int aux=0,x=0,suma=0;
	while(suma<num){
		printf("%d\t", x);
		x+=1;
		aux=suma;
		suma+=x;
	}
	printf("\nLa suma dona: %d\n", aux);
}
