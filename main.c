#include <unistd.h>
#include <stdio.h>
#include "hostname.h"
#include "date.h"

#define updateTime 1



int main()
{
	char hostname[30];
	char date[30];
	getHostname(hostname, 30);
//	getDate(date);
	
	while(1)
	{
		getDate(date);

		printf("%s %s\n", hostname, date);
		sleep(updateTime);
	}
	return(0);
}
