/*
Utilice la declaraci�n else if para especificar una nueva condici�n si la primera condici�n es false.
*/

#include <stdio.h>

int main(){
	int time = 22;
	if(time < 10)
	{
		printf("Good morning.");
	}else if(time < 20){
		printf("Good day.");
	}else {
		printf("Good evening.");
	}
	return 0;
}

/*
la condici�n1 y la condici�n2 son ambas false- e imprimimos en la pantalla "Buenas noches".
Sin embargo, si la hora fuera 14, nuestro programa imprimir�a "Buen d�a".
*/
