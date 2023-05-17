#include <stdio.h>
#include <conio.h>

/*2 - Faça um programa como uma estrutura de repetição começando de 1 e 
vai até o número informado pelo usuário.*/

void main(){
	int num, i = 1;
	printf("Informe Um Numero: ");
	scanf("%d", &num);
	
	while (i <= num){	
		printf("%d\n", i);
		i++;
	}
}
