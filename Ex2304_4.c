#include <stdio.h>

int main() {
  float notas[3], total=0.0;
  int i;
  for(i=0;i<3;i++){
  printf("digite a nota %d: ",i+1);
  scanf("%f", &notas[i]);
  total+=notas[i];
      
  }
  printf("O total das notas é: %.2f\n ",total);

    return 0;
}