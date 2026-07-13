#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock();

    long long counter = 0;
    for (int i = 1; i <= 1000000; i++) {
        counter ++;

    }
    double time = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("%.4f\n", time);

    return 0;
}
