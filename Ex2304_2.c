// Online C compiler to run C program online
#include <stdio.h>
#define PI 3.14159
int main() {
     float area, raio;
     printf("Digite o raio: ");
     scanf("%f",&raio);
     area = PI * (raio * raio);
     printf("Essa é a area: %.2f", area);

    return 0;
}