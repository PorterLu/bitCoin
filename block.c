#include <block.h>
#include <string.h>
#include <stdlib.h>
#include <sha256.h>
#include <time.h>

static uint64_t global_index = 0;

Block* first_block;

Block* create_block(uint64_t index, char* hash, char* pre_hash, uint64_t timestamp, char* data){
	Block* block = malloc(sizeof(Block));
	block->index = index ++;
	memcpy(block->hash, hash, 256);
	memcpy(block->pre_hash, pre_hash, 256);
	block->data = data;
	return data;
}

char* calc_hash(Block* block){
	char *hash = malloc(32);
	int data_len = strlen(data);
	char* hash_material = malloc(data_len + 8 + 32 + 8);
	*((uint64_t*)hash_material) = index;
	memcpy(hash_material + 4, pre_hash, 32);
	*((uint64_t*)(hash_material + 32 + 4)) = timestamp;
	memcpy(hash_material + 4 + 32 + 4, data, len);
	sha256(hash_material, data_len + 8 + 32 + 8, hash);
	return hash;
}

void init_first_block(){
	first_block = malloc(sizeof(Block));
	first_block->index = index ++;
	fi
}
