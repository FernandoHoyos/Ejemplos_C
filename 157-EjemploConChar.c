#include <stdio.h>
#include <string.h>  // Necesario para la función strcat

/*
Vamos a hacer un ejemplo similar, pero esta vez con el tipo de datos `char` en lugar de `int`.
En este caso, vamos a crear una función que reciba dos caracteres y retorne su concatenación (los dos caracteres como un solo string).
*/

//Ejemplo 1 con punteros char*:

// Declaración de la función que retorna un valor de tipo char*
char* concatenar(char a, char b) {
    // Definimos una cadena para almacenar los dos caracteres concatenados
    static char resultado[3];  // Usamos 'static' para asegurar que la memoria persista después de la función
    resultado[0] = a;  // Asignamos el primer carácter
    resultado[1] = b;  // Asignamos el segundo carácter
    resultado[2] = '\0'; // Terminamos la cadena con el carácter nulo '\0'
    
    return resultado;  // Retornamos la cadena concatenada
}

//Ejemplo 2 sin punteros char:
// Declaración de la función que retorna una cadena (sin usar punteros)
char concatenarb(char a, char b) {
    char resultadob[3];  // Array para almacenar los dos caracteres y el '\0'
    
    resultadob[0] = a;  // Asignamos el primer carácter
    resultadob[1] = b;  // Asignamos el segundo carácter
    resultadob[2] = '\0'; // Terminamos la cadena con el carácter nulo '\0'
    
    printf("La concatenación de %c y %c es %s\n", a, b, resultadob);
}



int main() {
	printf("\n---Ejemplo 1 de char con punteros.---\n");
    char letra1 = 'A', letra2 = 'B';
    
    // Llamada a la función concatenar() y guardamos el resultado
    char* resultado = concatenar(letra1, letra2);
    
    // Imprimimos el resultado
    printf("La concatenación de %c y %c es %s\n", letra1, letra2, resultado);
    
/*
### Explicación:
1. La función `concatenar()` recibe dos parámetros de tipo `char` y los almacena en una cadena estática (`resultado`).
2. La cadena de caracteres resultante se termina con el carácter nulo `'\0'` para marcar el final de la cadena.
3. La función retorna el puntero a la cadena de caracteres.
4. En `main`, llamamos a `concatenar()` pasando dos caracteres, y luego imprimimos la cadena resultante usando `printf`.
### Nota importante:
- **Usamos `static`** en la cadena `resultado` para garantizar que la memoria de la variable persista después de que la función termine. 
Esto es necesario porque, si no se usa `static`, la variable local sería destruida cuando la función termine, 
lo que resultaría en un comportamiento indefinido si intentamos usarla fuera de la función.
*/

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

printf("\n---Ejemplo 2 de char sin punteros.---\n");


/*
Si no deseas usar punteros para el retorno de la función, podemos modificar el ejemplo para que la función retorne un valor de tipo 
`char`. Sin embargo, una función que retorne un solo `char` no podría retornar dos caracteres concatenados (que es una cadena), 
ya que un solo `char` puede almacenar solo un valor. Pero si deseas retornar una cadena de dos caracteres, podemos hacer que la función 
retorne una variable `char` que contenga ambos caracteres como un tipo compuesto.

Sin embargo, si insistimos en que la función no use punteros, lo mejor es utilizar un array `char` dentro de la función que se maneje 
de forma local o global.

En este caso, es posible retornar una cadena usando un array `char` local y evitar usar punteros directos como el `char*`. 
Aquí tienes un ejemplo de cómo hacerlo, pero con un array de tamaño fijo (en este caso, 3 caracteres: 2 para las letras y 1 
para el terminador de la cadena `\0`):
*/

    char letra3 = 'C', letra4 = 'D';
    
    // Llamada a la función concatenar()
    concatenarb(letra3, letra4);
    

/*
### Explicación:
1. La función `concatenar()` crea una **cadena estática** `resultado` de tamaño fijo (3 caracteres). Este array tiene espacio suficiente para almacenar los dos caracteres y el terminador nulo `'\0'`.
2. Dentro de la función, concatenamos los caracteres pasados como parámetros.
3. En lugar de devolver un puntero a la cadena, la función simplemente imprime la cadena directamente dentro de la misma.

### Nota:
En este caso, hemos eliminado el retorno del valor y simplemente imprimimos la concatenación dentro de la función. El uso de un array local de esta manera tiene un alcance solo dentro de la función, lo que significa que no podemos retornar este valor fuera de la función, ya que la memoria se libera cuando la función termina.

Para un manejo más avanzado, sería necesario usar punteros o técnicas como la memoria dinámica, pero este ejemplo muestra una manera básica de lograr lo que pides sin necesidad de punteros explícitos en el retorno.
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
