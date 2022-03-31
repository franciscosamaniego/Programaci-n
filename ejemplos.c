#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  bool verdadero;
  verdadero = true;
  int a = 12;
  a = 24 % 8;
  char b = 'c' + 'a';
  char *s = "Hola";
  double f = 2 * 3.14;
  float g = 3.14;
  char *algo = (3 == 2) ? "claro que si" : "claro que no";
  printf("%s\n", algo); //llamada a printf
  //operador ternario ?:
  return 0;
}
