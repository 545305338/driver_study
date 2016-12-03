#include <stdio.h>

int main(){

	int space_num = 0;
	int tab_num = 0;
	int nl_num = 0;
	int c;

	for(c=getchar(); c!=EOF; c=getchar()){
		if(c == ' ')
			space_num ++;
		else if (c == '\t')
			tab_num ++;
		else if (c == '\n')
			nl_num ++;
	}
	printf("space = %d \ntab_num = %d \nnl_num = %d \n", space_num, tab_num, nl_num);
	return 0;
}
