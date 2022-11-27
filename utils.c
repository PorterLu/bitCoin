#include <utils.h>
#include <stdlib.h>

char* int_to_str(uint8_t* array){
	char *str = malloc(32);
	for(int i = 0; i < 32; i++){
		if(array[i] <= 9){
			str[i] = array[i] + '0';			
		} else {
			str[i] = array[i] + 'a';
		}
	}
}
