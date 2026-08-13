#include <stdio.h>

float calcDiffEmMinutos(int horas){
    return horas * 60;
}

int main () {
    int horas; 

    printf("Informe um horário (ex: 21): ");
    scanf("%d", &horas);

    printf("Se passaram %.2f minutos desde o início do dia (00h)", calcDiffEmMinutos(horas));

    return 0;
}