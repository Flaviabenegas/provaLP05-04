#include <stdio.h>

int main() {
    int n = 30;
    int numerador = 1, denominador = 1;
    double soma = 0;

    for (int i = 0; i < n; i++) {
        printf("%d/%d\n", numerador, denominador);
        soma += numerador / (double)denominador;
        numerador += 2;
        denominador += 1;




    }
    printf("Soma = %.2lf\n", soma);
    return 0;
}
