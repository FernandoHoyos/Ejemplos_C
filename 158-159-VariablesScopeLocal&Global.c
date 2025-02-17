#include <stdio.h>

//Variable Alcance (Scope)
//158 Una variable creada dentro de una funci�n pertenece al �mbito local de esa funci�n 
//y solo se puede utilizar dentro de esa funci�n:
void VLocal(){
	//Local variable that belongs to Vlocal
	int x = 5;
	
	//Printf the variable x
	printf("Soy una variable local: %d\n\n", x);
}

//159 Global
int x = 37;
void VGlobal(){
	// We can use c here
	printf("Soy una varible global usada dentro de la function: %d\n", x);
}


int main(){
	
	printf("---Ambito local---\n\n");
	//158-158 Error
	VLocal();
	//printf("%d", x); // Dara un Error si se trata de acceder desde fuera del ambito, Print the variable x in the main function.
    
	
	printf("---Ambito Global - Global Scope---\n\n");
	//159 Las variables globales est�n disponibles desde cualquier �mbito, global y local.
	//We can also use x here
	VGlobal();
	printf("Soy la misma varible global usada fuera de la function (main): %d\n", x);
	
	return 0;
}
