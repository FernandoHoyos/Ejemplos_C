#include <stdio.h>
#include <string.h>
//Modificar y copiar estructuras

/*
La modificación de valores es especialmente útil cuando se copian valores de estructura:
*/

//Create a structure
struct DatosPersonales{
	int Edad;
	char TipoSangre;
	char Nombre[30];
	char Direccion[38];
};

int main(){
//Create a structure variable and assing values to it
struct DatosPersonales s1 = {38, 'B', "Alejandro", "Avenida uno dos."};

//Create another structure variable
struct DatosPersonales s2;

//Copy s1 value to s2
s2 = s1;

//Change/Modify s2 values
s2.Edad = 27;
s2.TipoSangre = 'O';
strcpy(s2.Nombre, "Alejo");
strcpy(s2.Direccion, "Carretera a...");

//Print values
printf("Edad: %d\nTipo de sangre: %c\nNombre: %s\nDirecion: %s\n", s1.Edad, s1.TipoSangre, s1.Nombre, s1.Direccion);
printf("-----------------------------------------\n");
printf("Edad: %d\nTipo de sangre: %c\nNombre: %s\nDirecion: %s\n", s2.Edad, s2.TipoSangre, s2.Nombre, s2.Direccion);

	return 0;

}
