#include <stdio.h>

int main(){

	float fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;

	celsius = lower;
	printf("celsis\tfahr\n");
	while(celsius <= upper){
		fahr = celsius / (5.0 / 9) +32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}
