#include <stdio.h>
struct TIME
{
  int seconds;
  int minutes;
  int hours;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
    struct TIME startTime, stopTime, diff;

    printf("Enter start time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter stop time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    // Calculate the difference between the start and stop time period.
    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nTIME DIFFERENCE: %d:%d:%d - ", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf("%d:%d:%d ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(start.seconds > stop.seconds){
        --stop.minutes;
        stop.seconds += 60;
    }

    diff->seconds = stop.seconds - start.seconds;
    
    if(start.minutes > stop.minutes){
        --stop.hours;
        stop.minutes += 60;
    }

    diff->minutes = stop.minutes - start.minutes;
    diff->hours = stop.hours - start.hours;
}
