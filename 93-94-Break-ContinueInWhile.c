#include <stdio.h>

int main() {
	printf("-------------------Break in while--------------------\n");
  int i = 0;
  
  while (i < 10) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
    i++;
  } 
  
  
	printf("-------------------Continue in while--------------------\n");
    int i2 = 0;
  
  	while (i2 < 10) {
    	if (i2 == 4) {
      	i2++;
      	continue;
    	}
    	printf("%d\n", i2);
    	i2++;
  	} 
  
  return 0;
}
