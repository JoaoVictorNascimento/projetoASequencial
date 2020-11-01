#include "macros.h"
#include "timing.h"

int main(){

	HOOKOMP_TIMING_OMP_START;
	#pragma omp parallel num_threads(OPENMP_NUM_THREADS)
  	{
  		#pragma omp for schedule(OPENMP_SCHEDULE_WITH_CHUNK)
    	for(...){...}
  	}
  	HOOKOMP_TIMING_OMP_STOP;

  	fprintf(stdout, "version = OMP, num_threads = %d, N = %d, ", OPENMP_NUM_THREADS, N);
  	HOOKOMP_PRINT_TIME_RESULTS;

	return 0;
}