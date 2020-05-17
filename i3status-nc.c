#include <unistd.h>
#include <stdio.h>
#include "hostname.h"

#define updateTime 1



int main()
{
	char hostname[15];
	getHostname(hostname);
	
	while(1)
	{

		printf("Hostname: %s\n", hostname);
		sleep(updateTime);
	}
	return(0);
}
