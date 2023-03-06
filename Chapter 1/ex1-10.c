#include <stdio.h>
main()
{
	/* Following rules that else and && weren't shown */
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			c = 't'; }
		if (c == '\b') {
			putchar('\\');
			c = 'b'; }
		if (c == '\\') {
			putchar('\\');
			c = '\\'; }
		putchar(c);
	}
}
