#include <stdio.h>

int main(){

	float fahr;

	printf("fahr\tcelsis\n");
	for(fahr=300; fahr>=0; fahr-=20){
		printf("%3.0f %6.1f\n", fahr, (5.0/9)*(fahr-32));
	}
	return 0;
}
