#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n = 946;
    int x = 3;
    for (int i = 0; i < 3; i++) {
        x+= n%10;
    }
    printf("%d\n", x);
    return 0;
}