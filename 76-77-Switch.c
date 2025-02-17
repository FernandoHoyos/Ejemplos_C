#include <stdio.h>

int main(){
	
/* 76
utiliza el número del día de la semana para calcular el nombre del día de la semana:
*/	
	int day = 4;
  
  switch (day) {
    case 1:
      printf("Monday.\n");
      break;
    case 2:
      printf("Tuesday.\n");
      break;
    case 3:
      printf("Wednesday.\n");
      break;
    case 4:
      printf("Thursday.\n");
      break;
    case 5:
      printf("Friday.\n");
      break;
    case 6:
      printf("Saturday.\n");
      break;
    case 7:
      printf("Sunday.\n");
      break;
  }
	
	/* 77
	La defaultpalabra clave especifica un código que se ejecutará si no hay 
	coincidencia de mayúsculas y minúsculas:
	*/
	  int dayy = 4;
  
  switch (dayy) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
  }
	
	
	
	return 0;
}
