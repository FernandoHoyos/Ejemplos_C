//Cuando se declara una variable constante, se le debe asignar un valor:

#include <stdio.h>

int main() {
  const int MINUTESPERHOUR = 60; //Es de buena practica poner las constantes en mayusculas.
  const float PI = 3.14;

  printf("%d\n", MINUTESPERHOUR);
  printf("%f\n", PI);
  return 0;
}
