#include <stdio.h>

int main() {
    float preco = 29.99;           // preço de um produto
    float temperatura = 36.5;       // temperatura corporal
    double pi = 3.14159265359;      // valor de pi com alta precisão
    double peso = 75.5;             // peso em kg
    
    printf("Preço: R$ %.2f\n", preco);
    printf("Temperatura: %.1f°C\n", temperatura);
    printf("Valor de PI: %.10lf\n", pi);
    printf("Peso: %.1f kg\n", peso);
    
    return 0;
}