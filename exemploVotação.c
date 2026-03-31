#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade  
  //int idade = 90;

  printf("Digite sua idade: \n");
    scanf("%d",&idade);
    if(idade >= 16){
        printf("Você pode votar!");
    }else{
        printf("Você não pode votar!");
    }
    
    return 0;
}
