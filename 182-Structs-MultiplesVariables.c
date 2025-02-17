#include <stdio.h>
	
struct myStructure {
	int myNum;
	char myLetter;
	float myFloat;
};

int main(){
	//Create diferrent struct variables
	struct myStructure s1;
	struct myStructure s2;
	
	//Assign values to different struct variables
	s1.myNum = 13;
	s1.myLetter = 'B';
	s1.myFloat = 13.5;
	
	s2.myNum = 20;
	s2.myLetter = 'C';
	s2.myFloat = 38.5;
	
	//Print values
	printf("s1 number: %d\n", s1.myNum);
	printf("s1 letter: %c\n", s1.myLetter);
	printf("s1 Flotante: %f\n", s1.myFloat);
	
	printf("s2 number: %d\n", s2.myNum);
	printf("s2 letter: %c\n", s2.myLetter);
	printf("s2 Flotante: %f\n", s2.myFloat);
	return 0;
}
