#include <stdio.h>
#include <conio.h>

/*9 - Escreva um programa onde os 
n�meros lidos ser�o somados at� que a soma destes n�meros seja igual ou maior do que 100.*/

void main(){
	int soma = 0, num;
	while (soma <= 100){
		printf("Informe um numero: ");
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("Resultado: %d\n", soma);
}
