#include <stdio.h>
#include <omp.h>

int main() {
    int x = 0; // Shared variable among threads

    printf("Before parallel region, X = %d\n", x);

    // Parallel region WITH protection
    #pragma omp parallel shared(x)
    {
        int thread_id = omp_get_thread_num();

        // Critical section ensures only one thread updates X at a time
        #pragma omp critical
        {
            x += 1;
            printf("Thread %d increments X, X = %d\n", thread_id, x);
        }
    }

    printf("After parallel region, X = %d\n", x);
    return 0;
}
