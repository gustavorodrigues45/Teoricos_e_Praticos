#include <stdio.h>

void soma_prod(int a, int b, int *s, int *p) {
  *s = a + b; // Soma de a e b armazenada em s
  *p = a * b; // Produto de a e b armazenado em p
}


int main() {

    int a = 5, b = 3;
    int soma, product;

    soma_prod(a, b, &soma, &product);

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", product);

    return 0;
}



