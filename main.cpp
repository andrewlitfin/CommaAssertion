#include <stdio.h>
#include <assert.h>

int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		assert(("i is too big!", i <= 4));
		printf("i = %i\n", i);
	}
	return 0;
}
