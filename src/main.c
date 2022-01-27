/*
 * main.c
 *
 *  Created on: 4 nov. 2021
 *      Author: aleiix
 */
#include <stdio.h>
#include "function.h"


void main() {
	struct office bcn_office;

	modifyData(&bcn_office); //es passa per referència
	printData(bcn_office); //es passa per valor
}

