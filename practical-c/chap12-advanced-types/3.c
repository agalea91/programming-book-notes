#include <stdio.h>

/* Arrays of structures: time it takes to copmlete a lap */
struct time {
    int hour;
    int minute;
    int second;
};

const int MAX_LAPS = 4;

main(){
    struct time lap[MAX_LAPS];
    int i;
    for (i=0; i<MAX_LAPS; i++){
        lap[i].hour = i*2;
        lap[i].minute = i;
        lap[i].second = i*i;
        printf("%d: %d hour %d min %d sec\n", i, lap[i].hour, lap[i].minute, lap[i].second);
    }
}
