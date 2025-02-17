//Uso correcto de char

#include <stdio.h>

int main() {

//Para un solo caracter uso incorrecto
  char myText1 = 'Hello'; //Mostrara el ultimo caracter
  printf("%c\n", myText1);

//Para un solo caracter uso correcto
  char myText2 = 'o'; //Mostrara el ultimo caracter
  printf("%c\n", myText2);

//Para cadenas de texto (más de un carácter)
  char myText3[] = "Hello"; //Dentro de las llaves se puede indicar el numero de caracteres a mostrar.
  printf("%s", myText3);
  return 0;
}


