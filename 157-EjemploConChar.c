#include <stdio.h>
#include <string.h>  // Necesario para la funci�n strcat

/*
Vamos a hacer un ejemplo similar, pero esta vez con el tipo de datos `char` en lugar de `int`.
En este caso, vamos a crear una funci�n que reciba dos caracteres y retorne su concatenaci�n (los dos caracteres como un solo string).
*/

//Ejemplo 1 con punteros char*:

// Declaraci�n de la funci�n que retorna un valor de tipo char*
char* concatenar(char a, char b) {
    // Definimos una cadena para almacenar los dos caracteres concatenados
    static char resultado[3];  // Usamos 'static' para asegurar que la memoria persista despu�s de la funci�n
    resultado[0] = a;  // Asignamos el primer car�cter
    resultado[1] = b;  // Asignamos el segundo car�cter
    resultado[2] = '\0'; // Terminamos la cadena con el car�cter nulo '\0'
    
    return resultado;  // Retornamos la cadena concatenada
}

//Ejemplo 2 sin punteros char:
// Declaraci�n de la funci�n que retorna una cadena (sin usar punteros)
char concatenarb(char a, char b) {
    char resultadob[3];  // Array para almacenar los dos caracteres y el '\0'
    
    resultadob[0] = a;  // Asignamos el primer car�cter
    resultadob[1] = b;  // Asignamos el segundo car�cter
    resultadob[2] = '\0'; // Terminamos la cadena con el car�cter nulo '\0'
    
    printf("La concatenaci�n de %c y %c es %s\n", a, b, resultadob);
}



int main() {
	printf("\n---Ejemplo 1 de char con punteros.---\n");
    char letra1 = 'A', letra2 = 'B';
    
    // Llamada a la funci�n concatenar() y guardamos el resultado
    char* resultado = concatenar(letra1, letra2);
    
    // Imprimimos el resultado
    printf("La concatenaci�n de %c y %c es %s\n", letra1, letra2, resultado);
    
/*
### Explicaci�n:
1. La funci�n `concatenar()` recibe dos par�metros de tipo `char` y los almacena en una cadena est�tica (`resultado`).
2. La cadena de caracteres resultante se termina con el car�cter nulo `'\0'` para marcar el final de la cadena.
3. La funci�n retorna el puntero a la cadena de caracteres.
4. En `main`, llamamos a `concatenar()` pasando dos caracteres, y luego imprimimos la cadena resultante usando `printf`.
### Nota importante:
- **Usamos `static`** en la cadena `resultado` para garantizar que la memoria de la variable persista despu�s de que la funci�n termine. 
Esto es necesario porque, si no se usa `static`, la variable local ser�a destruida cuando la funci�n termine, 
lo que resultar�a en un comportamiento indefinido si intentamos usarla fuera de la funci�n.
*/

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

printf("\n---Ejemplo 2 de char sin punteros.---\n");


/*
Si no deseas usar punteros para el retorno de la funci�n, podemos modificar el ejemplo para que la funci�n retorne un valor de tipo 
`char`. Sin embargo, una funci�n que retorne un solo `char` no podr�a retornar dos caracteres concatenados (que es una cadena), 
ya que un solo `char` puede almacenar solo un valor. Pero si deseas retornar una cadena de dos caracteres, podemos hacer que la funci�n 
retorne una variable `char` que contenga ambos caracteres como un tipo compuesto.

Sin embargo, si insistimos en que la funci�n no use punteros, lo mejor es utilizar un array `char` dentro de la funci�n que se maneje 
de forma local o global.

En este caso, es posible retornar una cadena usando un array `char` local y evitar usar punteros directos como el `char*`. 
Aqu� tienes un ejemplo de c�mo hacerlo, pero con un array de tama�o fijo (en este caso, 3 caracteres: 2 para las letras y 1 
para el terminador de la cadena `\0`):
*/

    char letra3 = 'C', letra4 = 'D';
    
    // Llamada a la funci�n concatenar()
    concatenarb(letra3, letra4);
    

/*
### Explicaci�n:
1. La funci�n `concatenar()` crea una **cadena est�tica** `resultado` de tama�o fijo (3 caracteres). Este array tiene espacio suficiente para almacenar los dos caracteres y el terminador nulo `'\0'`.
2. Dentro de la funci�n, concatenamos los caracteres pasados como par�metros.
3. En lugar de devolver un puntero a la cadena, la funci�n simplemente imprime la cadena directamente dentro de la misma.

### Nota:
En este caso, hemos eliminado el retorno del valor y simplemente imprimimos la concatenaci�n dentro de la funci�n. El uso de un array local de esta manera tiene un alcance solo dentro de la funci�n, lo que significa que no podemos retornar este valor fuera de la funci�n, ya que la memoria se libera cuando la funci�n termina.

Para un manejo m�s avanzado, ser�a necesario usar punteros o t�cnicas como la memoria din�mica, pero este ejemplo muestra una manera b�sica de lograr lo que pides sin necesidad de punteros expl�citos en el retorno.
*/

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

printf("\n---Ejemplo 3 de char con strcat de la libreria string.---\n");

    char destino[50] = "Hola, ";
    char origen[] = "mundo!";
    
    // Concatenamos la cadena 'origen' al final de 'destino'
    strcat(destino, origen);
    
    // Imprimimos el resultado
    printf("Cadena concatenada: %s\n", destino);
    


    return 0;  // Fin del programa
}
