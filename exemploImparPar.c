#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  printf("Digite o número: \n");
  scanf("%d",&numero);
  
  if(numero % 2 == 0){
      printf("O número é par.\n");
  }else{
      printf("O número é ímpar.\n");
  }
  
  
  
    return 0;
}
