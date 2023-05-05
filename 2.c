#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int sum(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int multiply(int a, int b) {
  return a * b;
}

double divide(int a, int b) {
  return (double)a / b;
}

int mod(int a, int b) {
  return a % b;
}

int power(int a, int b) {
  return pow(a, b);
}

int main() {
  int a, b, operation;
  char shouldRepeat[10];

  do {
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    printf("Selecione a operacao:\n");
    printf("1) Soma\n2_ Subtracao\n3) Multiplicacao\n4) Divisao\n5) Resto divisao\n6) Potencia\n");
    scanf("%d", &operation);

    switch (operation) {
      case 1:
        printf("%d + %d = %d\n", a, b, sum(a, b));
        break;
      case 2:
        printf("%d - %d = %d\n", a, b, subtract(a, b));
        break;
      case 3:
        printf("%d x %d = %d\n", a, b, multiply(a, b));
        break;
      case 4:
        printf("%d / %d = %f\n", a, b, divide(a, b));
        break;
      case 5:
        printf("%d %% %d = %d\n", a, b, mod(a, b));
        break;
      case 6:
        printf("%d ^ %d = %d\n", a, b, power(a, b));
        break;
      default:
        printf("Operacao nao encontrada\n");
    }

    printf("Repetir ou sair?");
    scanf("%s", shouldRepeat);

  } while (strcmp(shouldRepeat, "sair") != 0);

  return 0;
}
