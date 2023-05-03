#include <stdio.h>
#include <conio.h>


/*8 - Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste 
aluno.*/

void main(){
	float num1, num2, num3, media, soma;
	 
	printf("Informe sua nota: ");
	scanf("%f", &num1);
	printf("Informe sua nota: ");
	scanf("%f", &num2);
	printf("Informe sua nota: ");
	scanf("%f", &num3);
	
	soma = num1 + num2 + num3;
	media = soma / 3;
	printf("Media: %f", media);
}
