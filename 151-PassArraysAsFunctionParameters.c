#include <stdio.h>

//151 Delcaracion
void matrixToFunction(int Numbers[5]){ //se necesita la declaraci�n completa de la matriz en el par�metro de la funci�n (int myNumbers[5]).
	int i;
	for(i = 0; i < 5; i++){
		printf("%d\n", Numbers[i]);
	}
}


int main(){

//Tambi�n puedes pasar matrices a una funci�n:
	printf("---Pasar matrices a una funci�n---\n\n");
//151 llamada y paso de parametros.

int Numbers[5] = {10, 20, 30, 40, 50};
matrixToFunction(Numbers); //Cuando llama a la funci�n, solo necesita usar el nombre de la matriz al pasarla como argumento myFunction(myNumbers).
//matrixToFunction(Numbers[5]); Dara una cadena de numeros, pero no es la correcta.

	return 0;
}
