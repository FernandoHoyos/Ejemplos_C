/*
Probablemente ya hayas notado que si imprimes un número de punto flotante, 
la salida mostrará muchos dígitos después del punto decimal.

Si desea eliminar los ceros adicionales (establecer precisión decimal), puede usar un punto (.) 
seguido de un número que especifique cuántos dígitos deben mostrarse después del punto decimal:
*/

#include <stdio.h>


int main() {
  float myFloatNum = 3.5;
  double myDoubleNum = 19.99;
  
  printf("------------Float------------\n");
  printf("Default: %f\n", myFloatNum); // Default will show 6 digits after the decimal point
  printf("1 digit: %.1f\n", myFloatNum); // Only show 1 digit
  printf("2 digit: %.2f\n", myFloatNum); // Only show 2 digits
  printf("4 digit: %.4f\n\n", myFloatNum); // Only show 4 digits
  
  printf("------------Double------------\n");
  printf("Default: %lf\n", myDoubleNum); 
  printf("1 digit: %.1lf Se redondea.\n", myDoubleNum); 
  printf("2 digit: %.2lf\n", myDoubleNum); 
  printf("4 digit: %.4lf\n", myDoubleNum);
 return 0;
 
}
