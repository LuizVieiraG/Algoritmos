#include <stdio.h>
#include <conio.h>

/*2.	Escreva um algoritmo que:
- leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado 
curso;
- determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve 
cada uma delas;
- Suponha que não exista dois ou mais alunos com a mesma nota.
*/

void main(){
	int matricula, i = 0, mat_maior = 0, segmat_maior = 0;
	float nota, maior_nota = 0, seg_notamaior = 0; 
	printf("\n<<Matriculas>>");
	do{
		printf("\nNumero da Matricula: ");
		scanf("%d", &matricula);
		printf("\nNota: ");
		scanf("%f", &nota);
		
		if(nota > maior_nota){
			seg_notamaior = maior_nota;
			maior_nota = nota;
			mat_maior = matricula;	
		}else 
			if(nota > seg_notamaior){
				seg_notamaior = nota;
				segmat_maior = matricula;
			}
			
		i++;
	}while(i < 7);
	printf("\nAs Duas Maiores Notas: ");
	printf("\nNumero da Matricula: %d, Nota: %.2f", mat_maior, maior_nota);
	printf("\nNumero da Matricula: %d, Nota: %.2f", segmat_maior, seg_notamaior);
}

