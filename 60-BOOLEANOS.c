#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

/*
Antes de intentar imprimir las variables booleanas, debe saber que los valores booleanos 
se devuelven como números enteros:
1 o cualquier otro número que no sea 0 representa true
0 representa false
*/

int main() {
  bool isProgrammingFun = true;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d", isFishTasty);         // Returns 0 (false)
  
  
  /*
	int myAge = 25;
	int votingAge = 18;
	printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!
  
  
  
  
  */
  
  return 0;
}
