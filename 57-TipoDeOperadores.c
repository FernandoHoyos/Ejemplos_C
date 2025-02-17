/* C divide los operadores en los siguientes grupos:
"	Operadores aritméticos
"	Operadores de asignación
"	Operadores de comparación
"	Operadores lógicos
"	Operadores bit a bit
*/

#include <stdio.h>

int main() {
  printf("Operadores aritméticos:\n");
/*Los operadores aritméticos se utilizan para realizar operaciones matemáticas comunes.
(+,-,+,/,%,++,--)
*/
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  
printf("Operadores de asignación:\n");
/*Los operadores de asignación se utilizan para asignar valores a las variables.
En el siguiente ejemplo, utilizamos el operador de asignación (=) para asignar el valor 10 
a una variable llamada x (=,+=,-=,*=,/=,%=,&=,|=,^=,>>=,<<=)
*/
  int x = 10;
  printf("%d\n", x);


printf("Operadores de comparación:\n");
/*Los operadores de comparación se utilizan para comparar dos valores (o variables). Esto es importante en programación, porque nos ayuda a encontrar respuestas y tomar decisiones.
El valor de retorno de una comparación es 1 o 0, lo que significa verdadero (1) o falso (0).
(==,!=,>,<,>=,<=) 
*/
  int x1 = 5;
  int y1 = 3;
  printf("%d\n", x1 > y1); // returns 1 (true) because 5 is greater than 3
  

printf("Operadores lógicos:\n");
/*
También puedes probar valores verdaderos o falsos con operadores lógicos.
Los operadores lógicos se utilizan para determinar la lógica entre variables o valores, 
combinando múltiples condiciones (&&,||,!).
*/
printf("&& (AND)\n");
  int x2 = 5;
  int y2 = 3;
  
    // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10.
    // Devuelve 1 (verdadero) porque 5 es mayor que 3 y 5 menor que 10.
  printf("%d\n", x2 > 3 && x2 < 10);


printf("|| (OR)\n");  
	int x3 = 5;
	int y3 = 3;
  
  // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
  printf("%d\n", x3 > 3 || x3 < 4);
  
printf("! (NOT)\n");  
	int x4 = 5;
	int y4 = 3;
  
  // Returns false (0) because ! (not) is used to reverse the result
  printf("%d", !(x4 > 3 && x4 < 10));


return 0;

}

