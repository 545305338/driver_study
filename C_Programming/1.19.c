#include <stdio.h>
#define MAXLINE 200 /* maximum input line length */

int mygetline(char line[], int maxline);
int reverse(char s[], int len);

/* print the longest input line */
int main(){
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */
	max = 0;

	while ((len = mygetline(line, MAXLINE)) > 0){
		reverse(line, len);
		printf("%d,%s\n", len, line);
	}
	return 0;
}

/* mygetline: read a line into s, return length */
int mygetline(char s[],int lim){
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c!=EOF && c!='\n')
		while ((c=getchar())!='\n' && c!=EOF)
			i++;
	if (i>lim-1)
		s[lim-1] = '\0';
	else
		s[i] = '\0';
	return i;
}

int reverse(char s[], int len){

	char j;

	for (int i=0; i<len/2; i++){
		j = s[i];
		s[i] = s[len-1-i];
		s[len-1-i] = j;
	}
}
