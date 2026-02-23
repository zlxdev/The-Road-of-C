#include <stdio.h>
#include <time.h>

int main() {
    time_t start_time, end_time;
    double elapsed_seconds;
    int minutes, seconds;

    printf("--- Mobile App Timer ---\n");

    printf("Press Enter to START the timer...");
    getchar();
    start_time = time(NULL);
    printf("Timer started...\n");

    printf("Press Enter to STOP the timer...");
    getchar();
    end_time = time(NULL);

    elapsed_seconds = difftime(end_time, start_time);
    
    int total_secs = (int)elapsed_seconds;
    minutes = total_secs / 60;
    seconds = total_secs % 60;

    printf("\nTotal elapsed time: %d seconds\n", total_secs);
    printf("Output: %d minutes and %d seconds\n", minutes, seconds);

    return 0;
}