/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>

int validar(int num){
	do{
		printf("\nIntrodueix un numero natural: \n");
		fflush(stdout);
		scanf("%d", &num);
		printf("El num introduit es: %d\n", num);

	}while(num<1);
	return num;

}


void binari(int num){
	int rest,binNum;
	int cont=1;
	while (num > 0){
		rest= num % 2;
		num=num/2;
		binNum=binNum + (rest * cont);
		cont=cont * 10;
	}
	printf("El num binari: %d", binNum);
}

