#include <stdio.h>
#include <string.h>

/*
Utilice una structs para almacenar diferente información sobre los automóviles:
*/

//Create a structure (Plantilla para carros)
struct Car {
	char brand[50];
	char model[50];
	int year;
};

int main(){
//Create a structure variable and assing values to it
struct Car car1 = {"BMW", "X5", 1999};
struct Car car2 = {"Ford", "Mustang", 1969};
struct Car car3 = {"Toyota", "Corolla", 2011};

//Create another structure variable
//Copy s1 value to s2
//Change/Modify s2 values


//Print values
printf("-----------------------------------------\n");
printf("%s %s %d\n", car1.brand, car1.model, car1.year);
printf("%s %s %d\n", car2.brand, car2.model, car2.year);
printf("%s %s %d\n", car3.brand, car3.model, car3.year);

	return 0;

}
