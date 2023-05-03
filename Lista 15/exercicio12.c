#include <stdio.h>
#include <conio.h>

/*12 - São informados dois valores numéricos correspondentes as notas de um determinado 
aluno. Deseja-se um algoritmo que permita responder "aprovado" se o aluno obtiver média 
aritmética simples igual ou superior a 7,0 caso contrário "Reprovado". Mostre também a 
média de aprovação do aluno.*/

void main(){
	float num1, num2, media;
	
	printf("Informe uma nota: ");
	scanf("%f", &num1);	
	printf("Informe uma nota: ");
	scanf("%f", &num2);
	
	media = (num1 + num2) / 2;
	
	if(media >= 7){
		printf("Aprovado %0.1f", media);
	}
	else{
		if(media < 7){
			printf("Reprovado %0.1f", media);
		}
	}
	
}
