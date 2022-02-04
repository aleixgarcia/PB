/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>
#include "function.h"

#include <stdio.h>

int demanarr() {
	int numDim;
	numDim = validarDim("Validem el num");
	//printf("La dimensio es de: %d\n", numDim);
	validarNot(numDim);
	return numDim;
}

int validarDim(int numDim) {
	do {
		printf("Introdueix la dimensio major a 1 i menor a 50:\n");
		fflush(stdout);
		scanf("%d", &numDim);
	} while (numDim < 1 || numDim > 50);
	return numDim;
}

int validarNot(int numDim) {
	int i, j, aux, alta, baixa, mitj = 0;
	int nota;
	int arr[numDim];
	for (i = 0; i < numDim; i++) {
		nota = demanarnom(nota);
		//printf("La nota es: %d\n", nota);
		arr[i] = nota;
		mitj = mitj + nota;
		if (nota > alta) {
			alta = nota;
		} else {
			baixa = nota;
		}

	}
	printf("La nota mes alta és: %d\n\n", alta);
	printf("La nota mes baixa és: %d\n\n", baixa);
	printf("La nota mitjana de totes les notes és: %d\n\n", mitj / numDim);

	for (i = 0; i < numDim - 1; i++) {
			for (j = i + 1; j < numDim; j++) {
				if (arr[i] > arr[j]) {
					aux = arr[i];
					arr[i] = arr[j];
					arr[j] = aux;
				}
			}
		}

		printf("L'array ordenat és: \n");
		for (i = 0; i < numDim; i++) {
			if (i != numDim - 1) {
				printf("%d, ", arr[i]);
			} else {
				printf("%d.", arr[i]);
			}
		}

	return nota;

}

int demanarnom(int *nota) {
	//printf("La nota abans de demanarla %d: \n", nota);
	do {
		printf("Introdueix la nota major a 1 i menor a 10 :\n");
		fflush(stdout);
		scanf("%d", &nota);
		//printf("La nota en demanarnom: %d\n", nota);
	} while (nota < 1 || nota > 10);
	return nota;
}
