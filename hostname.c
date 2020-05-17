#include "hostname.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int getHostname(char *string, int length)
{
	FILE *file = fopen("/etc/hostname", "r");
	char icon[5]="";
	char hostname[30];

	if(file != 0)
		fscanf(file, "%s", hostname);
	
	sprintf(string, "%s %s", icon, hostname);

	return 0;
}
