#include <stdio.h>

/*
El ejemplo anterior (97), escribimos el tamaño de la matriz en la condición de bucle ( i < 4). 
Esto no es ideal, ya que solo funcionará para matrices de un tamaño específico.
*/
/*
Sin embargo, al utilizar la fórmula sizeof del ejemplo anterior, ahora podemos crear bucles que funcionen 
para matrices de cualquier tamaño, lo que es más sostenible.
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
