#include <stdio.h>

typedef int week_day;
//const int MONDAY = 1;
//const int TUESDAY = 2;
//const int WEDNESDAY = 3;

enum week_day {MONDAY, TUESDAY, WEDNESDAY};

week_day today;

int main(){
    int i;
    for (i=0; i<3; i++){
        if (i==0)
            today = MONDAY;
        else if (i==1)
            today = TUESDAY;
        else if (i==2)
            today = WEDNESDAY;
        printf("%d\n", today);
    }
    return (0);
}
