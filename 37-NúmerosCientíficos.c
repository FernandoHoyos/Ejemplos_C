//Números científicos

//Un número de punto flotante también puede ser un número científico con una "e" para indicar la potencia de 10:

#include <stdio.h>
int main(){
	float f1 = 35e3;
	double d1 = 12E4;
	
	printf("%f\n", f1);
	printf("%lf", d1);
	
	return 0;
}
