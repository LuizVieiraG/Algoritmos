#include <stdio.h>
#include <conio.h>

/*3.	O sistema de avalia��o de uma determinada disciplina obedece aos seguintes crit�rios:
"	Durante o semestre s�o dadas tr�s notas;
"	A nota final � obtida pela m�dia aritm�tica das notas dadas durante o curso;
"	� considerando aprovado o aluno que obtiver a nota final superior ou igual a 6,0 e que tiver 
comparecido a um m�nimo de 40 aulas.
Fazer um algoritmo que:
a)	Leia um conjunto de dados contendo o n�mero de matr�cula, as tr�s notas e a frequ�ncia de 10 alunos;
b)	Calcule e exiba:
"	A nota final de cada aluno;
"	A maior e menor nota da turma;
"	A nota m�dia da turma;
"	O total de alunos reprovados;
"	A porcentagem de alunos reprovados por faltas.*/

void main(){
    int matricula, frequencia, totalReprovados = 0, totalAlunos = 10, cont = 1;
    float nota1, nota2, nota3, notaFinal, maiorNota, menorNota, somaNotas = 0.0, percentualReprovados;

    printf("<<Notas e frequ�ncia de alunos>>");

    while (cont <= totalAlunos) {
        printf("\nAlunos: %d", cont);
        printf("\nNumero de matricula: ");
        scanf("%d", &matricula);

        printf("Nota 1: ");
        scanf("%f", &nota1);

        printf("Nota 2: ");
        scanf("%f", &nota2);

        printf("Nota 3: ");
        scanf("%f", &nota3);

        printf("Frequencia (numero de aulas frequentadas): ");
        scanf("%d", &frequencia);

        notaFinal = (nota1 + nota2 + nota3) / 3;

        printf("Nota final: %.2f\n", notaFinal);

        if (cont == 1) {
            maiorNota = notaFinal;
            menorNota = notaFinal;
        } else {
            if (notaFinal > maiorNota) {
                maiorNota = notaFinal;
            }
            if (notaFinal < menorNota) {
                menorNota = notaFinal;
            }
        }

        somaNotas += notaFinal;

        if (notaFinal < 6.0 || frequencia < 40) {
            totalReprovados++;
        }

        cont++;
    }

    printf("\n<<Resultados>>");
    printf("\nMaior nota da turma: %.2f", maiorNota);
    printf("\nMenor nota da turma: %.2f", menorNota);
    printf("\nNota media da turma: %.2f", somaNotas / totalAlunos);
    printf("\nTotal de alunos reprovados: %d", totalReprovados);

    percentualReprovados = (float)totalReprovados / totalAlunos * 100;
    printf("\nPorcentagem de alunos reprovados por faltas: %.2f%%", percentualReprovados);

}

