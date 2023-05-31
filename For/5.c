#include <stdio.h>
#include <conio.h>

/*5 - Elaborar um programa que apresente no 
final o somatório dos valores pares existentes na faixa de 1 até 20.*/

void main(){
	int i, num, cont_neg = 0, soma_pos = 0;
	for (i=1; i <= 5; i++){
		printf("Informe um numero: ");
		scanf("%d", &num);
		if(num >= 0){
			soma_pos = soma_pos + num;
		}
		else{
			cont_neg++;
		}
	}
	printf("\nSoma dos Positivos: %d", soma_pos);
	printf("\nQtde de Negativos: %d", cont_neg);
}
