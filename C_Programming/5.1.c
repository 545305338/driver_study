#include <stdio.h>
#include <ctype.h>

#define SIZE 10
#define STD_IN 0

int getint(int *pn) {

	int c, sign;
	while (isspace(c = getchar())) /* skip white space */
		printf("Hello\n");
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
//		ungetc(c, STD_IN); /* it is not a number */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getchar();
	for (*pn = 0; isdigit(c); c = getchar())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
//	if (c != EOF)
//		ungetc(c, STD_IN);
	return c;
}

int main(){

	int n, array[SIZE], getint(int *);
	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		printf("%d\n", array[n]);
	return 0;
}
