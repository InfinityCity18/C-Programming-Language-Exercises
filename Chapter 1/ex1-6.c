#include <stdio.h>
main()
{

int c;
while ((c = getchar()) != EOF) {
	printf("is not EOF: %d", (c = getchar()) != EOF);
	putchar(c);
}
printf("is not EOF: %d", c != EOF);
}
