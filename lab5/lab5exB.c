//  ENSF 337 - fall 2020 - lab 5 -exercise B
//  lab5exB.c

#include <stdio.h>
#include "lab5exB.h"

const Date cd = {1, 1, 1970};

int main() {
    Timestamp *tsp;
    Time t = {0, 0, 24};
    Timestamp ts = {cd, &t};
	
	ts.date.day = 2;
	printf("Global cd day is %d and timestap cd day is %d\n", cd.day, ts.date.day);
	
	ts.time->second = 2;
	printf("%d %d\n", t.second, ts.time->second);
	
    tsp = & ts;
    change_date_time(&tsp->date, &t);
    
	printf("Second: %d, Minute: %d, Hour: %d\n", t.second, t.minute, t.hour);
	printf("Day %d, Month %d, Year %d\n", ts.date.day, ts.date.month, ts.date.year);
	
    printf("Program Terminted.\n");
    return 0;
}

void change_date_time(Date *arg1, Time *arg2){
    
    arg1 -> day = 29;
    arg1 -> month = 10;
    arg1 -> year = 2016;
    (*arg2).second = 5;
    (*arg2).minute = 59;
    (*arg2).hour = 23;
    
    // Point one
}
