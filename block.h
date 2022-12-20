#ifndef __BLOCK_H__
#define __BLOCK_H__
#include <stdint.h>

struct Block{
	uint64_t index;
	char[256] hash;
	char[256] pre_hash;
	uint64_t time;
	uint8_t* data;
}

Block* create_block(char* pre_hash, uint8_t* data);
char* calc_hash(Block* block);
#endif
