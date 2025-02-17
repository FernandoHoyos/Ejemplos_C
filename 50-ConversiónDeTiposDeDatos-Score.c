/*
tipos de datos y conversi�n de tipos en el que creamos un programa para calcular el porcentaje 
de la puntuaci�n de un usuario en relaci�n con la puntuaci�n m�xima en un juego:
*/
#include <stdio.h>

int main() {
  // Set the maximum possible score to 500
  int maxScore = 500;

  // The actual score of the user
  int userScore = 423;

  // Calculate the percantage7media of the user's score in relation to the maximum available score
  float percentage = (float) userScore / maxScore * 100.0;

  // Print the percentage
  printf("User's percentage is %.2f", percentage);

  return 0;
}
