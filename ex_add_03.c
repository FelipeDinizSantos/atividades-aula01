#include <stdio.h>

int main () {
    float nota1;
    float nota2;
    float nota3; 
    float calc;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    calc = (nota1 + nota2 + nota3) / 3;
    printf("A média das notas é %.2f", calc);

    printf("\n");

    return 0;
}