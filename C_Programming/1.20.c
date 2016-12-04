#include <stdio.h>


#define SPACE ' '
#define TAB '\t'
#define SPACE_SIZE 4

int main(){

	int c;

	while ((c=getchar())!=EOF) {
		if (c != TAB)
			putchar(c);
		else {
			for (int i=0; i<SPACE_SIZE; i++) {
				putchar(SPACE);
			}
		}
	}
	return 0;
}
