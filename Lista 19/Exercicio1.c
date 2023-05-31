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
	int i, sexo, qtde_homens = 0, cont_altf = 0;
	float menor_alt, maior_alt, altura, soma_alt_turma = 0; 
	float media_alt_mulheres = 0, media_alt_turma = 0;
	
	//valores Iniciais de Variaveis
	maior_alt = 0;
	menor_alt = 99999;
	
	for(i=1; i <= 10; i++){
		printf("\nFicha: %d", i);
		printf("\nInforme Sua altura: ");
		scanf("%f", &altura);
		printf("\nInforme seu Sexo (1-Masculino,2-Feminino): ");
		scanf("%d", &sexo);
		
		//verificar Maior e menor altura
		if(altura > maior_alt){
			maior_alt = altura;	
		}
		
		if(altura < menor_alt){
			menor_alt = altura;		
		}
		
		// Verificando se o sexo é feminino e calculando a soma das alturas das mulheres
		if(sexo == 2){
			media_alt_mulheres += altura;
			cont_altf++;
		}
		
		//// Calcular a soma da altura da turma
		soma_alt_turma += altura;
		
		// Verificando se o sexo é masculino
		if(sexo == 1){
			qtde_homens++;
		}
	}
	// Calculando as médias
	media_alt_mulheres /= cont_altf;
	media_alt_turma = soma_alt_turma / 10;
	
	printf("\nMaior Altura: %0.2f", maior_alt);
	printf("\nMenor Altura: %0.2f", menor_alt);
	printf("\nMedia de Altura das Mulheres: %0.2f", media_alt_mulheres);
	printf("\nMedia de Altura da Turma: %0.2f", media_alt_turma);
	printf("\nQuantidade de Homens: %d", qtde_homens);
}

