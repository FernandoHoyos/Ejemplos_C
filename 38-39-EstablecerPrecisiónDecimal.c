/*
Probablemente ya hayas notado que si imprimes un n�mero de punto flotante, 
la salida mostrar� muchos d�gitos despu�s del punto decimal.

Si desea eliminar los ceros adicionales (establecer precisi�n decimal), puede usar un punto (.) 
seguido de un n�mero que especifique cu�ntos d�gitos deben mostrarse despu�s del punto decimal:
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
