#include <stdio.h>

int main(){
	
	/* 72
	Este ejemplo muestra cómo se puede utilizar if..else
	para "abrir una puerta" si el usuario ingresa el código correcto:
	*/
	int doorCode = 1337;

  	if (doorCode == 1337) {
  	  printf("Correct code: The door is now open.\n");
 	 } else {
 	   printf("Wrong code: The door remains closed.\n");
 	 }
	
	/* 73
	Este ejemplo muestra cómo puedes utilizar if..else 
	para averiguar si un número es positivo o negativo:
	*/
	int myNum = 10;
	
	if(myNum > 0){
	printf("The value is a positive number.");
	}else if(myNum < 0){
		printf("The value is a negative number.");
	}else{
		printf("The value is 0.");
	}
	
	/* 74
	Descubra si una persona tiene edad suficiente para votar:
	*/
	  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    printf("Old enough to vote!");
  } else {
    printf("Not old enough to vote.");
  }
  
  /* 75
  Descubra si un número es par o impar:
  */
	  int myNum2 = 5;

  if (myNum2 % 2 == 0) {
    printf("%d is even/Par.\n", myNum2);
  } else {
    printf("%d is odd/Impar.\n", myNum2);
  }
	
	return 0;
}
