#include <stdio.h>

/*
Tambi�n puede asignar valores a los miembros de una variable de estructura en el momento de la declaraci�n, en una sola l�nea.
Simplemente inserte los valores en una lista separada por comas dentro de llaves {}. 
Tenga en cuenta que no es necesario utilizar la funci�n strcpy() para valores de cadena con esta t�cnica:
*/

//Create a structure
struct VariablesTest{
	int myNum;
	char myLetter;
	char myString[38];
};

int main(){
//Create a structure variable and assing values to it
struct VariablesTest s1 = {38, 'E', "Ya te metieron otr@."};

//Print values
printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

	return 0;	
/*
Nota: 
El orden de los valores insertados debe coincidir con el orden de los tipos de variables declarados en la estructura 
(13 para int, 'B' para char, etc.).
*/
}
