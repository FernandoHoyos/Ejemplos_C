#include <stdio.h>

//152 Delcaracion
//void: indica que la función no debe devolver un valor.
//Si desea que la función devuelva un valor, puede utilizar un tipo de datos (como int, float, char, etc.) en lugar de void. 
int DevolverValor(int x){
	return 5 + x; //Utilizar la palabra clave return dentro de la función.
}

//153
int DevolverValorb(int x, int y){
	
	return x + y;	
}

//154
int DevolverValorc(int x, int y){
	return x + y;
}

//155 (El ejemplo de la calculadora, mejorado del ejercicio 147, 145).
int calculateSumd(int x, int y){
	return x + y;
}

//156
int calculateSume(int x, int y){
	return x + y;
}


int main(){
	printf("---Valores de retorno---\n\n");
	//152 Function con solo 1 parametro
	printf("---152---\n");
	printf("Result of 5 + x is = %d\n", DevolverValor(37)); 
	
	//153 Function con 2 parametros
	printf("\n---153---\n");
	printf("Result of x + y is = %d\n", DevolverValorb(5, 3));
	
	//154 Almacenar el resultado en una variable.
	printf("\n---154---\n");
	int result = DevolverValorc(35, 2);
	printf("Result of x + y is = %d\n", result);
	
	//155
	printf("\n---155---\n");
	int result1 = calculateSumd(5, 3);
	int result2 = calculateSumd(8, 2);
	int result3 = calculateSumd(15, 15);
	
	printf("Result1 of x + y is = %d\n", result1);
  	printf("Result2 of x + y is = %d\n", result2);
  	printf("Result3 of x + y is = %d\n", result3);
  	
  	printf("\n---156---\n");
  	//156 Si tiene muchas "variables de resultado", es mejor almacenar los resultados en una matriz:
  	//Create an array
  	int resultArr[6];
  	int i;
  	int length = sizeof(resultArr) / sizeof(resultArr[0]);
  	  	
  	//Call the function with different arguments and store the different results in the arry.
  	resultArr[0] = calculateSume(5, 3);
  	resultArr[1] = calculateSume(8, 2);
  	resultArr[2] = calculateSume(15, 15);
  	resultArr[3] = calculateSume(9, 1);
  	resultArr[4] = calculateSume(7, 7);
	resultArr[5] = calculateSume(1, 1);
	
	//Almacenar los resultados en una matriz:
	for(i = 0; i < length; i++){
		printf("Result%d is = %d\n", i + 1, resultArr[i]); //Al poner i + 1 muestra la cantidad de iteraciones.
		//printf("Repeticiones bucle for: %d\n", i + 1); //Para ver la cantidad de repeticiones.
	}
	
	return 0;
}
