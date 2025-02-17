//Para obtener realmente el tamaño (en bytes) de un tipo de datos o variable, utilice el sizeof operador:
#include <stdio.h>


int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("Operador sizeof (bytes):\n"); //long unsigned int( %lu)
  printf("%lu int.\n", sizeof(myInt));
  printf("%lu float.\n", sizeof(myFloat));
  printf("%lu double.\n", sizeof(myDouble));
  printf("%lu char.", sizeof(myChar));
  
  return 0;
}

