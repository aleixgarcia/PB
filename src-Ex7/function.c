/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>

int demanarr(){
	int numDim;
	validarDim(numDim);

	validarNot(numDim);

	return numDim;
}

int validarDim(int numDim){
	int i=0;
	do{
		printf("Introdueix la nota major a 1 i menor a 50:\n");
		fflush(stdout);
		scanf("%d", &numDim);
	}while(numDim<1 || numDim>50);
	return numDim;
}

int validarNot(int numDim){
	int i;
	int arr[numDim];
	while (i<numDim){
		arr[i]=demanarnom("Introdueix la nota");
		i+=1;
	}
	return numDim;
}

int demanarnom(int numDim){
	int nota;
		do{
			printf("Introdueix la nota major a 1 i menor a 10 :\n");
			fflush(stdout);
			scanf("%d", &nota);
		}while(nota<1 || nota>10);

	return nota;

}


