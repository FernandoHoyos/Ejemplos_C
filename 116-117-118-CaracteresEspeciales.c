#include <stdio.h>

int  main(){
	
	/*Caracteres especiales.
	\'	'	Single quote
	\"	"	Double quote
	\\	\	Backslash
	\n		New Line
	\t		Tab
	\0		Null
	*/
	
	char txta[] = "We are the so-called \"Vikings\" from the north.";
	char txtb[] = "It\'s alright.";
	char txtc[] = "The character \\ is called backslash.";
	char txtd[] = "Hello\nWorld!";
	char txte[] = "Hello\tWorld!";
	char txtf[] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
	printf("%s\n", txta);
	printf("%s\n", txtb);
	printf("%s\n", txtc);
	printf("%s\n", txtd);
	printf("%s\n", txte);
	printf("%s\n", txtf);
	
	
	return 0;
}
