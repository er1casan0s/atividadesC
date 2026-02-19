#include <stdio.h>

int main() {
    char nome[50] = "Maria Silva";        // nome completo
    char cidade[30] = "São Paulo";         // nome da cidade
    char endereco[100] = "Rua das Flores, 123";  // endereço
    char *mensagem = "Bem-vindo ao programa!";   // mensagem
    
    printf("Nome: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("Endereço: %s\n", endereco);
    printf("Mensagem: %s\n", mensagem);
    
    return 0;
}