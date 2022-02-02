/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>
#include "function.h"

int validate(){
	int size;
	do{
		printf("Indica la dimensió de l'array, més gran que 1 i menor que 50:\n");
		fflush(stdout);
		scanf("%d", &size);
	}while(size<1 || size>50);
	return size;
}


void Noms_array(int size){
	int i,j,temp;
	int array[size];
	for(i=0;i<size;i++){
		printf("Introdueix el numero %d:",i+1);
		fflush(stdout);
		scanf("%d", &array[i]);
	}

	for(i=1;i<=size-1;i++){
		for(j=1;j<=size-1;j++){
			if(array[j-1]<array[j]){
				temp=array[j-1];
				array[j-1]=array[j];
				array[j]=temp;
			}
		}
	}

	printf("El resultat de l'array descendent es: \n");
	for(i=0; i<size; i++){
		printf("%d\t", array[i]);

	}
}
