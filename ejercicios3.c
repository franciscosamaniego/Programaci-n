#include <stdio.h>
#include <stdlib.h>
#define g 9.82

int main(int argc, char *argv[]) {
  double x0 = atof(argv[1]);
  double v0 = atof(argv[2]);
  double t = atof(argv[3]);
  printf("%.2f\n", x0 + v0*t - (g*(t*t))/2.0);
  return 0;
}
