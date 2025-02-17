#include <stdio.h>
#include <string.h>
//Modificar estructuras

/*
Si desea cambiar/modificar un valor, puede utilizar la sintaxis de punto (.).
Y para modificar un valor de cadena, la función strcpy() vuelve a ser útil:
*/

//Create a structure
struct DatosPersonales{
	int Edad;
	char Nombre[30];
	char Direccion[38];
};

int main(){
//Create a structure variable and assing values to it
struct DatosPersonales s1 = {38, "Alejandro", "Avenida uno dos."};

//Modify values
s1.Edad = 27;
strcpy(s1.Nombre, "Alejo");
strcpy(s1.Direccion, "Carretera a...");

//Print values
printf("Edad: %d\nNombre: %s\nDirecion: %s", s1.Edad, s1.Nombre, s1.Direccion);

	return 0;

}
