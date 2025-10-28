// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
// 1 hr = 60 min = 3600 sec

#include <stdio.h>
int main()
{
    int sec;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    // Calculate Hours: Total seconds divided by 3600 (seconds in an hour)
    int hours = sec / 3600;
    // Calculate Remaining Seconds (after extracting whole hours), Use modulus 3600 to find the leftover seconds that represent minutes and seconds.
    int remaining_seconds1 = sec % 3600;
    // Calculate Minutes: The remaining seconds are divided by 60 (seconds in a minute). Integer division again gives the whole number of minutes.
    int minutes = remaining_seconds1 / 60;
    // Calculate remaining econds after extracting whole minutes. This is found using modulus 60.
    int remaining_seconds2 = remaining_seconds1 % 60;

    // Using %02d ensures leading zeros for minutes and seconds
    printf("Time in HH:MM:SS format is %02d:%02d:%02d\n", hours, minutes, remaining_seconds2);
    return 0;
}