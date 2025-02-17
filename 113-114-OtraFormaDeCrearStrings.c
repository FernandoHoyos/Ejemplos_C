#include <stdio.h>

int main() {
	
	/*�Por qu� incluimos el \0 car�cter al final? 
  	Esto se conoce como el "car�cter de terminaci�n nula" y debe incluirse al crear cadenas utilizando este m�todo. 
  	Le indica a C que este es el final de la cadena.
  	*/
  	//El caracter \0 siempre va en comillas simples.
  char greetingsa[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetingsb[] = "Hello World!";
  
  printf("%s\n", greetingsa);
  printf("%s\n", greetingsb);
  
  
	char greetingsc[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	char greetingsd[] = "Hello World!";
  
	printf("%lu\n", sizeof(greetingsc));
	printf("%lu\n\n", sizeof(greetingsd));
  
	printf("Vida real; crear un mensaje de bienvenida simple.\n\n");
	char message[] = "Good to see you,";
	char fname[] = "John";

	printf("%s %s!", message, fname);
  
  
  return 0;
}
