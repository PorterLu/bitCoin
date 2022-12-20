#include "ecc.h"
#include <stdio.h>
#include <string.h>

int main(){
	uint8_t public_key[ECC_BYTES+1];
	uint8_t private_key[ECC_BYTES];
	int res = ecc_make_key(public_key, private_key);
	if(res){
		printf("create key successfully\n");
		printf("public_key: ");
		for(int i = 0; i < ECC_BYTES; i++){
			printf("%02x ",public_key[i]); 
		}
		printf("\nprivate_key: ");
		for(int i = 0; i < ECC_BYTES; i++){
			printf("%02x ", private_key[i]);
		}	
		printf("\n");
	} else {
		printf("create key fail\n");
	}

	return 0;
}
