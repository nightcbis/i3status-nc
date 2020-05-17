#include "hostname.h"
#include <string.h>

int getHostname(char *hostname)
{
	strcpy(hostname, "tname");
	return 0;
}
