#include <stdio.h>

int main() {
    int idade = 25;              // idade de uma pessoa
    short alunosNaTurma = 42;     // quantidade de alunos
    long populacaoBrasil = 213000000;  // população do Brasil
    unsigned int visualizacoes = 1500;  // visualizações de um vídeo
    
    printf("Idade: %d anos\n", idade);
    printf("Alunos na turma: %d\n", alunosNaTurma);
    printf("População do Brasil: %ld habitantes\n", populacaoBrasil);
    printf("Visualizações: %u\n", visualizacoes);
    
    return 0;
}