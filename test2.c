#include <stdio.h>
#include "test.h"

extern char add2[];
extern i;

void test2()
{
	printf("%s",add2);
	for (; i > 0; i--)
		printf("%d--", i);
}