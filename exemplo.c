#include <stdio.h>

int main() {
    // Cadastro de um cliente em um sistema
    
    // DADOS PESSOAIS
    char nome[50] = "João Oliveira";        // nome (string)
    char sexo = 'M';                          // sexo (caractere)
    int idade = 35;                           // idade (inteiro)
    float altura = 1.78;                       // altura em metros (real)
    float peso = 82.5;                          // peso em kg (real)
    
    // DADOS DA COMPRA
    int quantidadeProdutos = 3;                 // quantidade (inteiro)
    float precoUnitario = 25.50;                 // preço (real)
    float valorTotal = quantidadeProdutos * precoUnitario;  // real
    
    // OUTROS DADOS
    long cpf = 12345678901;                      // CPF (número grande)
    char telefone[15] = "(11) 98765-4321";       // telefone (string)
    char observacao[100] = "Cliente prefere contato por WhatsApp";
    
    // EXIBINDO TODOS OS DADOS
    printf("===== CADASTRO DO CLIENTE =====\n");
    printf("Nome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("CPF: %ld\n", cpf);
    printf("Telefone: %s\n", telefone);
    printf("\n===== DADOS DA COMPRA =====\n");
    printf("Quantidade: %d\n", quantidadeProdutos);
    printf("Preço unitário: R$ %.2f\n", precoUnitario);
    printf("Valor total: R$ %.2f\n", valorTotal);
    printf("\nObservação: %s\n", observacao);
    
    return 0;
}