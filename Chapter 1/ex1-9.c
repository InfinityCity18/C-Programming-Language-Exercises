#include <stdio.h>
main()
{
	/* Following rules that else and && weren't shown */
	int c;
	int is_in_whitespace_sequence;
	while ((c = getchar()) != EOF) {
		if (is_in_whitespace_sequence == 0) {
			if (c == ' ') {
				is_in_whitespace_sequence = 1; 
				putchar(c);
			}
		}
		if (c != ' ')
			is_in_whitespace_sequence = 0;
		if (is_in_whitespace_sequence == 0)
			putchar(c);
	}
}
