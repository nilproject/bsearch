#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "Utils.h"

int main()
{
	const ptrdiff_t length = 10;
	ptrdiff_t *const array = malloc(length * sizeof(ptrdiff_t));

	for (size_t i = 0; i < length; i++)
	{
		array[i] = ((i + (i / (length / 5)) * 3) / 4) * 4 - (length / 3);
	}

	const ptrdiff_t testValues[7] = { array[0] - 1, array[0], 3, 5, 13, array[length - 1], array[length - 1] + 1 };
	
	printf("Generated array: ");
	for (size_t i = 0; i < length; i++)
	{
		printf("[%zu]:%zi ", i, array[i]);
	}
	printf("\n");

	for (size_t i = 0; i < sizeof(testValues) / sizeof(testValues[0]); i++)
	{
		ptrdiff_t index = binarySearchMore(array, length, testValues[i]);
		printf("Index for (%zi): %zi\n", testValues[i], index);
	}

	return 0;
}
