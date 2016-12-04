#include <stdio.h>


#define SPACE ' '
#define TAB '\t'
#define SPACE_SIZE 4

int main(){

	int c;
	int space_num = 0;

	while ((c=getchar())!=EOF) {
		if (c != SPACE) {
			putchar(c);
			space_num = 0;
		} else {
			space_num++;
			putchar(SPACE);
		}
		if (space_num == SPACE_SIZE) {
			for (int i=0; i<SPACE_SIZE; i++) {
				putchar('\b');
			}
			putchar(TAB);
			space_num = 0;
		}
	}
	return 0;
}
