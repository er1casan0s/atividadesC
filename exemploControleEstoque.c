#include <stdio.h>
#include <stdlib.h>

int main() {
    float temperatura, umidade;
    unsigned int nivelEstoque, estoqueMin=1000;
    
    printf("Informe a temperatura: \n");
    scanf("%f",&temperatura);
    
    printf("Informe a umidade: \n");
    scanf("%f",&umidade);
    
    printf("Informe o nível de estoque: \n");
    scanf("%u",&nivelEstoque);
    
    if(temperatura > 30){
        printf("A temperatura está alta!!\n");
         printf("#########################################\n");
    }else{
        printf("Temperatura está dentro dos parâmetros!\n");
        printf("#########################################\n");
    }
    
    if(umidade > 50){
        printf("Umidade elevada!\n");
        printf("#########################################\n");
    }else{
        printf("Umidade dentro dos parâmetros!\n");
        printf("#########################################\n");
    }
    
    if(nivelEstoque < estoqueMin){
        printf("Estoque abaixo do mínimo!\n");
        printf("#########################################\n");
    }else{
        printf("Estoque normal!\n");
        printf("#########################################\n");
    }
    
    

 
 
 
    return 0;
}
