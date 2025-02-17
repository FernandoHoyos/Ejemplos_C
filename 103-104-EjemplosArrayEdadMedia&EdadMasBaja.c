#include <stdio.h>

int main(){
	printf("----Calcular el promedio de diferentes edades.----\n");
  // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
 
  float avg, sum = 0;
  int i;
  
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
    
  // Loop through the elements of the array and accumulate the sum
  for (i = 0; i < length; i++) {
    sum += ages[i]; //Añadira a sum la suma de cada valor del array.
  }
  
  // Calculate the average by dividing the sum by the length
  avg = sum / length; //Se divide la suma de los valores del Array y se divide por la cantidad de elementos del array.
  
  // Print the average
  printf("The average age is: %.2f\n\n", avg);
  
  
  printf("----Encuentra la edad más baja entre diferentes edades:.----\n");
  
     // An array storing different ages
  int agesb[] = {20, 22, 18, 35, 48, 26, 87, 70};
  
  int ib;
  
  // Get the length of the array
  int lengthb = sizeof(agesb) / sizeof(agesb[0]);
  
  // Create a 'lowest age' variable and assign the first array element of ages to it
  int lowestAge = agesb[0]; //Se asigna 0 como elemento de partida para la comparacion en if.

  // Loop through the elements of the ages array to find the lowest age
  for (i = 0; i < lengthb; i++) {
  	//printf("Saber iteraciones: %d\n", i);
  
    // Check if the current age is smaller than current the 'lowest age'
    if (lowestAge > agesb[i]) { //Si el primer elemento del Array es mayor que el comparado sera verdadero y...
    
      // If the smaller age is found, update 'lowest age' with that element
      lowestAge = agesb[i]; //...se sobre escribira en lowestAge para guardar la edad mas pequeña.
    }
  }
 
  // Output the value of the lowest age
  printf("The lowest age in the array is: %d\n", lowestAge);
   
  
	return 0;
}
