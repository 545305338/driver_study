#include <stdio.h>

int main(){

	int c1,c2;

	for(c1=getchar(); c1!=EOF; c1=getchar()){
		if(c1 == c2 && c2 == ' ')
			continue;
		putchar(c1);
		c2 = c1;
	}
	return 0;
}
