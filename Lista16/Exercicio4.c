#include <stdio.h>
#include <conio.h>

/*4- Desenvolva um programa que apresente os quadrados dos números inteiros de 1 a 10.*/

void main(){
	int i, pote;
	printf("Quadrados de Numeros Inteiros: ");
	
	while (i <= 10){
		pote = i * i;
		printf("%d ^ %d = %d\n",  i, i, pote);
		i++;
	}
}
