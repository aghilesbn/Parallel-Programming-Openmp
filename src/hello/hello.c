#include <stdio.h>
#include <omp.h>

int main() {
    // Print a message from the main thread
    printf("Hello from the main thread!\n");

    // Start a parallel region
    #pragma omp parallel
    {
        // Get the thread ID
        int thread_id = omp_get_thread_num();
        // Get the total number of threads
        int num_threads = omp_get_num_threads();
        // Print a message from each thread
        printf("Hello from thread %d out of %d threads\n", thread_id, num_threads);
    }

    return 0;
}
