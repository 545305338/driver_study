#include <stdio.h>


#define LINE_LIM 40

int main(){

	int c;
	int line_len = 0;
	char line[LINE_LIM];

	for (int i=0; i<LINE_LIM; i++) {
		line[i] = 0;
	}
	while ((c=getchar())!=EOF) {
		if (c!='\n' && line_len<LINE_LIM) {
			line[line_len++] = c;
		} else if (c=='\n' && line_len<LINE_LIM) {
			line[line_len] = 0;
			printf("%s\n", line);
			line_len = 0;
		} else if (c=='\n' && line_len==LINE_LIM) {
			line[line_len] = 0;
			printf("%s\n", line);
			line_len = 0;
		} else if (c!='\n' && line_len==LINE_LIM) {
			line[line_len] = c;
			int i;
			for (i=line_len; i>0; i--) {
				if (line[i]==' ')
					break;
			}
			line[i] = 0;
			printf("%s\n", line);
			line_len = 0;
			while (i<LINE_LIM) {
				i++;
				line[line_len++] = line[i];
			}
		}
	}
	return 0;
}
