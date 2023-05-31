#include <stdio.h>
#include <conio.h>

/*1.Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo, a altura e o 
código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e calcule e 
imprima:
- a maior e a menor altura da turma;
- a média de altura das mulheres;
- a média de altura da turma.
- a quantidade de homens.*/

void main(){
	int i;
	float menor_alt, maior_alt, altura;
	
	for(i=1; i <= 3; i++){
		printf("Informe Sua altura: ");
		scanf("%f", &altura);
		printf("Informe seu Sexo (1-Masculino,2-Feminino): ");
		scanf("");
		if(i == 1){
			maior_alt = altura;
			menor_alt = altura;
		}
		
		if(altura > maior_alt){
			maior_alt = altura;	
		}
		
		if(altura < menor_alt){
			menor_alt = altura;		
		}
		
	}
	printf("\nMaior Altura: %0.2f", maior_alt);
	printf("\nMenor Altura: %0.2f", menor_alt);
}

