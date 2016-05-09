#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "dbg.h"
#include "radixmap.h"
#include <limits.h>
#include <time.h>
#include <assert.h>

size_t N = 10;

int main(int argc, char const *argv[])
{
	RadixMap *map = RadixMap_create(N);
	assert(map != NULL);
	make_random(map);
	RadixMap_printer(map);
	RadixMap_sort(map);
	printf("\n\n");
	RadixMap_printer(map);



	return 0;
}