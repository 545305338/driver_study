#include <stdio.h>

int main(){

	float fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;

	fahr = lower;
	printf("fahr\tcelsis\n");
	while(fahr <= upper){
		celsius = (5.0 / 9) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}
