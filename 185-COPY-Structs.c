#include <stdio.h>
//Copiar estructuras

//Create a structure
struct myStructure{
	int myNum;
	char myLetter;
	char myString[38];
};

int main(){
//Create a structure variable and assing values to it
struct myStructure s1 = {38, 'E', "Ya te metieron otr@."};

//Create another structure variable
struct myStructure s2;

//COPY s1 values to s2
s2 = s1;

//Print values
printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

	return 0;
//NOTA: Comprobar porque no copia una estructura cuando los noombres son distintos, y porque no asigna el espacio de la cadena.
//Creo que es porque la struct es una especie de objeto y tienen que colgar varias de esta por eso el nombre tiene que ser igual.

}
