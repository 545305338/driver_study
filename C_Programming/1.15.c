#include <stdio.h>

float fahr_to_celsius(float fahr);

int main(){

	float fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;

	fahr = lower;
	printf("fahr\tcelsis\n");
	while(fahr <= upper){
		printf("%3.0f %6.1f\n", fahr, fahr_to_celsius(fahr));
		fahr += step;
	}
	return 0;
}

float fahr_to_celsius(float fahr) {
	return (5.0 / 9) * (fahr - 32);
}
