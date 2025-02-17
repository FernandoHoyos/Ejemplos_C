#include <stdio.h>

int main() {
//Un Array 2D también se conoce como una matriz (una tabla de filas y columnas).

//Crear una matriz 2D de números enteros.
int matrixa[2][3] = { {1, 4, 2}, {3, 6, 8} };

//Acceda a los elementos de una matriz.
  int matrixb[2][3] = { {1, 4, 2}, {3, 6, 8} };
  printf("%d\n", matrixb[0][2]);
  
  
//Cambiar elementos en una matriz 2D
/*Para cambiar el valor de un elemento, consulte el número de índice del elemento en cada una de las dimensiones.
El siguiente ejemplo cambiará el valor del elemento en la primera fila (0) y la primera columna (0).
*/
	int matrixc[2][3] = { {1, 4, 2}, {3, 6, 8} }; //RECUERDE QUE EMPIEZAN POR 0.
  	matrixc[0][0] = 9;
  	printf("%d\n", matrixc[0][0]);  // Now outputs 9 instead of 1
 
 
//Recorrer un bucle en una matriz 2D
/*Para recorrer una matriz multidimensional, necesita un bucle para cada una de las dimensiones de la matriz.
El siguiente ejemplo genera todos los elementos de la matriz.
*/
  int matrixd[2][3] = { {1, 4, 2}, {3, 6, 8} };
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\t", matrixd[i][j]); // Si en vez de \n añades \t ("%d\t") dara una tabulacion y se mostrara mejor.
    
    /*if (j < 3) {
                printf(" | "); // Separador entre columnas
            }
	*/
	}
	
	/* printf("\n");
        if (i < 2) {
            printf("--------|---------|--------\n"); // Separador entre filas (ajustar lineas).
        }
	*/
  }
 
  return 0;
}
