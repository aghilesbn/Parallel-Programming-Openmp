#include <stdio.h>
#include <omp.h>

int main() {
    int x = 0; // Shared variable among threads

    printf("Before parallel region, X = %d\n", x);

    // Parallel region WITHOUT protection (race condition!)
    #pragma omp parallel shared(x)
    {
        int thread_id = omp_get_thread_num();
        x += 1; // Race condition: multiple threads update x simultaneously
        printf("Thread %d increments X, X = %d\n", thread_id, x);
    }

    printf("After parallel region, X = %d\n", x);
    return 0;
}
