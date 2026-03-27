#include <stdio.h>
#include <stdlib.h>
//DESAFIO 2
int main() {
    float nota1,nota2,nota3, media;
    printf("########## Cálculo de notas #############\n");
    printf("Olá, aluno, informe a 1ª nota: \n");
    scanf("%f",&nota1);
    
    printf("Olá, aluno, informe a 2ª nota: \n");
    scanf("%f",&nota2);

    printf("Olá, aluno, informe a 3ª nota: \n");
    scanf("%f",&nota3);
    
    media = (nota1+nota2+nota3)/3;
    printf("A média é : %.1f",media);
    
    

    return 0;
}
