#include <stdio.h>
#include <conio.h>


/*7.Criar um algoritmo em que leia dez números inteiros e 
imprima o maior e o menor número da lista.  */

void main(){
	int i, num, maior = -999, menor = 999;
	for(i=1; i <= 5; i++){
		printf("Informe um numero: ");
		scanf("%d", &num);
		if(i == 1){
			maior = num;
			menor = num;
		}
		if(num > maior){
			maior = num;
		}
		if(num < menor){
			menor = num;
		}
		
	}
	printf("\nMaior Numero: %d", maior);
	printf("\nMenor Numero: %d", menor);
}
