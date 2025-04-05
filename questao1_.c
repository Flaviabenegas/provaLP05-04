#include <stdio.h>

int main()
{
    int num = 0;
    double soma = 0;
    int cont = 0;
    
    do { 
        printf("Digite um numero: ");
        scanf("%d", &num);
            if (num > 0){
                soma = soma + (num % 3);
                cont++;
            }
        } while (cont < 200);
    
    printf("Total da soma: %.2lf\n", soma);
    
return 0;
}