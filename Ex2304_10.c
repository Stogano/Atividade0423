#include <stdio.h>
float media(float v[]) {
    return 2/(v[0] + v[1]);
}
float dobro(float v[]) {
    return 2/(2*v[0] + 2*v[1]);
}
float maior(float v[]) {
  if (v[0]>v[1]){return v[0],v[1];}
  else{return v[1],v[0];};
}

int main() {
  float numeros[2];
  float media1,dobro1,maior1;
  for(int i=0;i<2;i++){
  printf("digite a nota %d: ",i+1);
  scanf("%f", &numeros[i]);
  
  media1=media(numeros);
  dobro1=dobro(numeros);
  maior1=maior(numeros);
  
  
  }
   printf("digite a nota %.2f,%.2f,%.2f : ",media1,dobro1,maior1);


    return 0;
}