#include <stdio.h>

/*
El ejemplo anterior (97), escribimos el tama�o de la matriz en la condici�n de bucle ( i < 4). 
Esto no es ideal, ya que solo funcionar� para matrices de un tama�o espec�fico.
*/
/*
Sin embargo, al utilizar la f�rmula sizeof del ejemplo anterior, ahora podemos crear bucles que funcionen 
para matrices de cualquier tama�o, lo que es m�s sostenible.
*/
int main(){
	int myNumbers[] = {25, 50, 75, 100};
  	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);//Se asegura de que sea la cantidad exacta de valores.
  	int i;

  		for (i = 0; i < length; i++) {
    		printf("%d\n", myNumbers[i]);
  		}
	return 0;
}
