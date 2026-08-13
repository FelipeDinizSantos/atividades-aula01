#include <stdio.h>
#include <math.h>

float calcularQtdSalarioMinimo (float salarioMinimo, float salarioFunc) {
    return salarioFunc / salarioMinimo;
}

int main () {
    float salarioMinimo;
    float salarioFunc;
    
    printf("Informe o sálario mínimo atual: ");
    scanf("%f", &salarioMinimo);

    printf("Informe o sálario do funcionário: ");
    scanf("%f", &salarioFunc);

    printf("O salário do funcionário equivale a %.2f salários mínimos!", calcularQtdSalarioMinimo(salarioMinimo, salarioFunc));    
    printf("\n");

    return 0;
}