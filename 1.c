#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isVowel(char letter) {
  if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
    return 1;
  }

  return 0;
}

void vogais_consoantes(char *text, int *qtyVowels, int *qtyConsonants, int *qtyLetters, char (*firstAndLastUpper)[2]) {
  *qtyVowels = 0;
  *qtyConsonants = 0;
  *qtyLetters = 0;

  int textLength = strlen(text);
  char first = toupper(text[0]);
  char last = toupper(text[textLength-2]);
  (*firstAndLastUpper)[0] = first;
  (*firstAndLastUpper)[1] = last;

  while (*text != '\0') {
    char character = tolower(*text);

    printf("%c\n", character);

    if (isalpha(character)) {
      (*qtyLetters)++;
      if (isVowel(character) == 1) {
        (*qtyVowels)++;
      } else {
        (*qtyConsonants)++;
      }
    }

    text++;
  }
}

int main() {
  char text[100];
  char firstAndLastUpper[2];
  int qtyVowels, qtyConsonants, qtyLetters;

  printf("Digite algo: ");
  fgets(text, sizeof(text), stdin);

  vogais_consoantes(text, &qtyVowels, &qtyConsonants, &qtyLetters, &firstAndLastUpper);
  printf("Quantidade de vogais: %d\n", qtyVowels);
  printf("Quantidade de consoantes: %d\n", qtyConsonants);
  printf("Quantidade de letras: %d\n", qtyLetters);
  printf("Primeiro e ultimo caracteres concatenados, e em maiusculo: %c%c\n", firstAndLastUpper[0], firstAndLastUpper[1]);
    
  return 0;
}
