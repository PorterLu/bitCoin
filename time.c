#include <time.h>
#include <sys/time.h>

uint64_t getTime(){
	
	struct timeval new;
	gettimeofday(&now, NULL);
	return now.tv_sec;
}
