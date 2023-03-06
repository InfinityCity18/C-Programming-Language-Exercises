#include <stdio.h>
main()
{
	int tabs, blanks, newlines;
	/* assuming blank is a whitespace */
	int c;
	tabs = 0;
	blanks = 0;
	newlines = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			tabs++;
		if (c == ' ')
			blanks++;
		if (c == '\n')
			newlines++;
	}
	printf("Tabs: %d\nBlanks: %d\nNewlines: %d\n", tabs, blanks, newlines);
}
