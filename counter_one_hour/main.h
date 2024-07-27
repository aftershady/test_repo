#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/*---------------------------------------------------------------------------*/

typedef struct time_unit {
	char ten_hour;
	char hour;
	char ten_minutes;
	char minutes;
} time_unit;

/*---------------------------------------------------------------------------*/

void display_time(char *ten_hour, char *hour, char *ten_minutes, char *minutes)
{
	printf("%c", *ten_hour);
	printf("%c : ", *hour);
	printf("%c", *ten_minutes);
	printf("%c\n", *minutes);
}

/*---------------------------------------------------------------------------*/


#endif
