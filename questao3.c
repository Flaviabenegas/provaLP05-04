#include <stdio.h>

int main(void) {
    int n=0, cont;
    double c=0;
    scanf("%d", &n);
    if (n>0) {
        for (int i = 0; i < n; i++) {
            scanf("%lf", &c);
            if (c>=1 && c<=1000){
                cont=0;
                while (c>=1) {
                    c=c/2;
                    cont++;
                } printf("%d dias\n", cont);
            }
        }
    } else {
        printf("Quantidade invalida!\n");
    }
    return 0;
}