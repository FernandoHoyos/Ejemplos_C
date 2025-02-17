/*
Utilice la declaración else if para especificar una nueva condición si la primera condición es false.
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
la condición1 y la condición2 son ambas false- e imprimimos en la pantalla "Buenas noches".
Sin embargo, si la hora fuera 14, nuestro programa imprimiría "Buen día".
*/
