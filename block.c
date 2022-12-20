#include <block.h>
#include <string.h>
#include <stdlib.h>
#include <sha256.h>
#include <time.h>

//global block chain index
static uint64_t global_index = 0;

//block chain data structure
Block* block_chain;

//****************create a block***********************************
// 1. We apply an area for block				  *
// 2. Set index according to global block index			  *
// 3. Set time of block according to time of creating the block   *
// 4. Finally, calculating the hash the block and return the block*
//***************************************************************** 
Block* create_block(char* pre_hash, uint8_t* data){
	Block* block = malloc(sizeof(Block));
	block->index = global_index ++;
	
	if(block_chain == NULL)
		memset(block->pre_hash, 0, 256);
	else
		memcpy(block->pre_hash, block_chainpre_hash, 256);
	
	block->time = getTime();
	block->data = data;
	
	block->hash = calc_hash(block);
	return block;
}

//****************calculate the hash of a block*******************
//
char* calc_hash(Block* block){
	SHA256_ctx ctx;
	

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
