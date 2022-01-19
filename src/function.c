/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: aleiix
 */

#include <stdio.h>

int validar(int num){
	int susp,apro, m_sus=0, m_apro=0,i=1;

	do{
		do{
			printf("\nIntrodueix la nota %d: \n",i);
			fflush(stdout);
			scanf("%d", &num);
			printf("El num introduit es: %d\n", num);
			i+=1;
		}while(num<1 || num>10);
		if (num >4){
				apro=apro+num;
				m_apro=m_apro+1;
			}else {
				susp=susp+num;
				m_sus=m_sus+1;
			}
	}while(i<16);
	printf("Les nota mitjana dels aprobats es: %d\n", apro/m_apro);
	printf("La nota mitjana dels suspesos es: %d\n", susp/m_sus);
	return num;
}
