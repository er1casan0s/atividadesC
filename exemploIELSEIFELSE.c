#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco1 = 50.0;
    float preco2 = 5.0;
    
    if(preco1 < preco2){
        printf("O produto 1 é mais barato.\n");
    } else if(preco1 > preco2){
        printf("O produto 2 é mais barato.");
    } else{
        printf("Os produtos têm o mesmo preço.");
    }
    
    
    return 0;
}
