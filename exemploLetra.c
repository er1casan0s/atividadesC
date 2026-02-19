#include <stdio.h>

int main() {
    char sexo = 'F';              // sexo da pessoa (M ou F)
    char opcao = 'A';              // opção de menu
    char letra = 'Z';              // qualquer letra do alfabeto
    char digito = '5';             // caractere '5' (NÃO é o número 5)
    
    printf("Sexo: %c\n", sexo);
    printf("Opção escolhida: %c\n", opcao);
    printf("Letra: %c\n", letra);
    printf("Dígito: %c\n", digito);
    
    return 0;
}