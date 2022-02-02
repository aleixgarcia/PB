/*
 * function.h
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#ifndef FUNCTION_H_
#define FUNCTION_H_

#endif /* FUNCTION_H_ */

struct usuari{
	char usu_prestec[20];
	int temps_prestec;
};

struct llibre{
	char titol[50];
	char autor[20];
	char edit[20];
	int data_pub;
	int unitats_disp;
	struct usuari usu;
};

int validate();
void modifyLlib(struct llibre *, int);
void printLlibre(struct llibre *, int);
