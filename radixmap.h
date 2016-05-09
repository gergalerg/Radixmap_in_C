#ifndef _radixmap_h
#define _radixmap_h
#include <stddef.h>
#include <stdint.h>

#define ByteOf(x,y) (( (uint8_t *)x) [(y)] )

typedef union RMElement {
	uint64_t raw;
	struct {
		uint32_t key;
		uint32_t value;
	} data;
} RMElement;

typedef struct RadixMap { 
	size_t max;
	size_t end;
	uint32_t counter;
	RMElement *contents;
	RMElement *temp;
} RadixMap;

void radix_sort(short, uint64_t, uint64_t*, uint64_t*);

RadixMap *RadixMap_create(size_t max);

void RadixMap_destroy(RadixMap *map);

void RadixMap_sort(RadixMap * map);

RMElement *Radixmap_find(RadixMap *map, uint32_t key);

int RadixMap_add(RadixMap *map, uint32_t key, uint32_t value);

int make_random(RadixMap *);

void RadixMap_printer(RadixMap *);

#endif