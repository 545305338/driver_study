#include <stdio.h>

int main(){

	int c;
	int flag = 1;
	int letter[26];

	for ( int i=0; i<26; i++ ) {
		letter[i] = 0;
	}

	for ( c=getchar(); c!=EOF; c=getchar() ) {
		if (c>='a' && c<='z')
			letter[c-'a']++;
	}

	for ( int i=0; i<26; i++ ) {
		printf("%2c", i+'a');
	}
	printf("\n");

	while ( flag ) {

		for ( int i=0; i<26; i++ ) {
			if ( letter[i] > 0 ) {
				printf(" *");
				letter[i]--;
			} else {
				printf("  ");
			}
		}
		printf("\n");
		flag = 0;
		for ( int i=0; i<26; i++ ) {
			flag += letter[i];
		}
	 
	}
	return 0;
}
