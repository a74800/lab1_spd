#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

double total_time(struct timeval start, struct timeval end) {
    double start_sec = (double)start.tv_sec + (double)start.tv_usec / 1000000.0;
    double end_sec = (double)end.tv_sec + (double)end.tv_usec / 1000000.0;
    return end_sec - start_sec;
}

int main(int argc, char *argv[]) {

    struct timeval i_current_time;
    struct timeval end_current_time;

    double result = 0.0;

    for (size_t i = 0; i <= 30; i++)
    {
        /* code */
        gettimeofday(&i_current_time, NULL);
        getpid();
        gettimeofday(&end_current_time, NULL);

        printf("Elapsed time: %f\n", total_time(i_current_time, end_current_time));

        if (i > 0)
        {
            result += total_time(i_current_time, end_current_time);

        }
        

    }
    
    /*gettimeofday(&i_current_time, NULL);
    getpid();
    gettimeofday(&end_current_time, NULL);
    */
   
    result = result / 30;
    //double result = total_time(i_current_time, end_current_time);
    printf("\nTotal time: %f milisegundos\n", result * 1000);

    return 0;
}



