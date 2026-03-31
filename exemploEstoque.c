#include <stdio.h>
#include <stdlib.h>

int main() {
  int estoque;
  printf("Qual a quantidade em estoque? \n");
  scanf("%d",&estoque);
  
  if(estoque <= 5){
      printf("Estoque baixo!\n");
  }else if((estoque > 6) && (estoque < 20)){
      printf("Estoque médio!");
  }else{
      printf("Estoque alto!");
  }
  
    return 0;
}
