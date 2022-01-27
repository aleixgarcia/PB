/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>

struct address {
	char street[100];
	char city[50];
	char state[20];
	int postalCode;
};

struct office {
		int id;
	char name[50];
	char cto[50];
	int workers;
	struct address addr[];

};

struct office office[2];

void modifyData(struct office *o) { //punter a office
	int i;
	for (i = 0; i < 2; i++) {
		printf("Introdueix el nom de l'oficina %d: \n", i + 1);
		fflush(stdout);
		scanf("%s", o->name);

		printf("Introdueix el carrer de l'oficina %d: \n", i + 1);
		fflush(stdout);
		scanf("%s", o->addr[i].street);

		printf("Introdueix la ciutat de l'oficina %d: \n", i + 1);
		fflush(stdout);
		scanf("%s", o->addr[i].city);

		printf("Introdueix el codi postal de l'oficina %d: \n", i + 1);
		fflush(stdout);
		scanf("%d", &o->addr[i].postalCode);
	}

}

void printData(struct office o) {
	int i;
	for (i = 0; i < 2; i++) {
		printf("Aquestes són les dades de l'oficina %d: \n", i + 1);
		printf("Nom de l'oficina %d: %s\n", i + 1, o.name);
		printf("Carrer de l'oficina %d: %s\n", i + 1, o.addr[i].street);
		printf("Ciutat de l'oficina %d: %s\n", i + 1, o.addr[i].city);
		printf("Codi postal de l'oficina %d: %d\n\n", i + 1, o.addr[i].postalCode);
	}

}
