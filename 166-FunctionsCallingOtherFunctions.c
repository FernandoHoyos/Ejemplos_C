#include <stdio.h>
//166
//Function declaration
void myFunction();
void myOtherFunction();


int main(){
//166
printf("---Utilice una función para llamar a otra función:---\n");
//call the function	

myFunction();

return 0;
}

//Function definition
void myFunction(){
	printf("\nSoy myFunction llamada desde myFunction.\n");
	myOtherFunction(); //llamar desde myfunction
}

//Define myOtherFunction
void myOtherFunction(){
	printf("\nSoy OtherFunction llamada desde myFunction.\n");
}
