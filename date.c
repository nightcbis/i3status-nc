#include "date.h"
#include <stdio.h>
#include <time.h>

int getDate(char *string)
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	sprintf(string, "%02d:%02d", tm.tm_hour, tm.tm_min);
	return 0;	
}
