#include <stdio.h>
#include <stdlib.h>

// Função para entrada de dados
float entradaDados() {
    float t1, t2,t3;  
    float media;
    
    printf("Informe a 1ª Temperatura: \n");
    scanf("%f", &t1);
    printf("Informe a 2ª Temperatura: \n");
    scanf("%f", &t2);
    printf("Informe a 3ª Temperatura: \n");
    scanf("%f", &t3);
    
    
    media = (t1+t2+t3) / 3; 
    return media;  
}

// Função para cálculo da média 
float calcularMedia() {
    return entradaDados(); 
}

// Função para exibir dados
void exibirMedia(float media) {
    printf("A média de temperatura em celsius é: %.1f\n", media);
    printf("\n");
    //A MÉDIA EM KELVIN
    printf("A média em Kelvin é: %.1fºK\n",media+273);
    //A MÉDIA EM FAHRENHEIT
    printf("A média em Fahrenheit é: %.1fºF",((media*1.8)+32));
    
}

int main() {
    float media; 
    
    media = calcularMedia();  
    exibirMedia(media);  
    
    return 0;
}
