#include "sha256.h"
#include <stdio.h>
unsigned char buf[32];

int main(){
	sha256((unsigned char*)"hello", 5, buf);
	for(int i = 0; i < 32; i++){
		printf("%02x ", buf[i]);
	}
	printf("\n");
}
