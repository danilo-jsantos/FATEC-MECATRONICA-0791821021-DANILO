#include <stdio.h>

int main(void) {
  int N1, N2, S;
  printf("informe um numero\n");
  scanf("%i", &N1);
  printf("informe outro numero");
  scanf("%i", &N2);
  S = N1 + N2;
  printf("o resultado eh: %i", S);
  return 0;
}
