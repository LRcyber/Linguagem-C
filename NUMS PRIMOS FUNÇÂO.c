#include <stdio.h>

int main() {

  int n, i = 3, cont, c;

  printf("Entre com o numero N de numeros primos : ");
  scanf("%d", &n);

if (n >= 1) {
printf("Os %d numeros primos sao :\n", n);
printf("2\n");

  }

  for (cont = 2; cont <= n;) {
    for (c = 2; c <= i - 1; c++) {
    if (i % c == 0)
        break;
    }
    if (c == i) {
      printf("%d\n", i);
      cont++;
    }
    i++;
  }
  return 0;
}
