#include <stdio.h>
//160 
// Global variable x
int xGlobal = 5;
void nombrarVariables(){
	//Local variable with the same name as the global variable.
	int xLocal = 22;
	printf("\n%d\n", xLocal); //Refers to the local variable x
}

//161
// Global variable x
int xGlobal2 = 5;
void nombrarVariablesb(){
	//Inclrement the value of x by 1 and print it.
	printf("\n%d", ++xGlobal2); //Se modifico la vaiable xGlobal2 desde aqui.
}

int main(){
//Nombrar variables
/*
En resumen, utilice variables locales (con buenos nombres de variable) tanto como sea posible. Esto hará que su código sea más fácil 
de mantener y de entender. Sin embargo, puede encontrar variables globales cuando trabaje en programas C existentes o cuando colabore 
con otros. Por lo tanto, es bueno comprender cómo funciona el alcance y cómo usarlo de manera efectiva para asegurarse de que su código 
sea claro y funcional.
*/
	printf("---Global y local---");
//160 
nombrarVariables();
printf("%d\n", xGlobal); //Refers to the glpobal variable xGlobal

	printf("---Modificar xGlobal2 desde la funcion---");
//161 En general, debes tener cuidado con las variables globales, ya que se puede acceder a ellas
//y modificarlas desde cualquier función.
nombrarVariablesb();
//Printf the global variable xGlobal2
printf("\n%d\n", xGlobal2);

//Nota: Las variables locales hacen que el codigo sea mas facil de entender.


	
	return 0;
}
