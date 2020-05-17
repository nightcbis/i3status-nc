#include <unistd.h>
#include <stdio.h>
#include "hostname.h"

#define updateTime 1



int main()
{
	char hostname[30];
	getHostname(hostname, 30);
	
	while(1)
	{

		printf("%s\n", hostname);
		sleep(updateTime);
	}
	return(0);
}
