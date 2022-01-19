/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>

int validar(int num1, int num2){
	int num;
	int i;
	do{
		printf("\nIntrodueix un num més gran de 10 i menor a 5000: \n");
		fflush(stdout);
		scanf("%d", &num);
		printf("El num introduit es: %d\n", num);
		i+=1;
		if (i==3){
			printf("Has fet massa intents!");
		}
	}while(i==3 && (num>num2 || num<num1));
	return num;

}
