// TEMPERATURA
#include <stdio.h>
#include <stdlib.h>

int main() {
    float temperatura1,temperatura2,temperatura3,media;
    
    printf("Olá, informe a temperatura da manhã: ");
    scanf("%f",&temperatura1);
    printf("Olá, informe a temperatura da tarde: ");
    scanf("%f",&temperatura2);
    printf("Olá, informe a temperatura da noite: ");
    scanf("%f",&temperatura3);
    
    media = (temperatura1+temperatura2+temperatura3)/2;
    
    printf("A média da temperatura em Celsius é de: %.1fºC\n",media);
    //A MÉDIA EM KELVIN
    printf("A média em Kelvin é: %.1fºK\n",media+273);
    //A MÉDIA EM FAHRENHEIT
    printf("A média em Fahrenheit é: %.1fºF",((media*1.8)+32));
    
    

    return 0;
}
