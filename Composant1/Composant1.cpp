
#include "Composant1.h"
#include "Composant1Version.h"
#include "Composant3.h"
 #include <string.h>
#include <stdlib.h>
#include <stdio.h> 

int composant1(int p1, int p2)
{
	return composant3(p1,p2);
}


char * getComposant1Version()
{
	char * version3=getComposant3Version();
	char * version1= "Composant 1 version " COMPOSANT_VERSION_STR;
	char* x = (char*) malloc(strlen(version1)+strlen(version3));
	 strcpy(x,version1);
	 strcat(x,version3);
	return x;
}
