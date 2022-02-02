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
		printf("Indica quants llibres vols registrar:");
		fflush(stdout);
		scanf("%d", &size);
	}while(size<1);
	return size;
}

void modifyLlib(struct llibre *l, int size){
	int i;
	for(i=0; i<size;i++){
		printf("Introdueix el titol del llibre %d: \n ",i+1);
		fflush(stdout);
		scanf("%s", l[i].titol);

		printf("Introdueix el nom de l'autor del llibre %d: \n",i+1);
		fflush(stdout);
		scanf("%s",l[i].autor);


		printf("Introdueix el nom de la editorial %d: \n",i+1);
		fflush(stdout);
		scanf("%s", l[i].edit);

		printf("Introdueix la data de publicació %d: \n",i+1);
		fflush(stdout);
		scanf("%d", &l[i].data_pub);

		printf("Indica les unitats disponibles %d: \n",i+1);
		fflush(stdout);
		scanf("%d", &l[i].unitats_disp);

		printf("Indica l'usuari que té el llibre %d: \n",i+1);
		fflush(stdout);
		scanf("%s", l[i].usu.usu_prestec);

		printf("Indica quants dies el té de prestec %d: \n",i+1);
		fflush(stdout);
		scanf("%d", &l[i].usu.temps_prestec);

	}
}

void printLlibre(struct llibre *ll, int size){
	int i;
	printf("*********************************************************\n");
	for(i=0; i<size; i++){
		printf("Les dades del llibre %d: ",i+1);
		printf("Aquest es el titol del llibre %d: %s\n", i+1, ll[i].titol);
		printf("Aquest es el nom del autor del llibre: %s\n",ll[i].autor);
		printf("Aquesta es la editorial del llibre: %s\n", ll[i].edit);
		printf("Aquesta es la data de publicacio del llibre: %d\n", ll[i].data_pub);
		printf("Aquestes son les unitats disponibles del llibre: %d\n", ll[i].unitats_disp);
		printf("Aquest es l'usuari que té el llibre: %s\n",  ll[i].usu.usu_prestec);
		printf("Aquest/s es/son el/s dia/dies que porta el llibre: %d\n ", ll[i].usu.temps_prestec);
		printf("*********************************************************\n");
	}
}





