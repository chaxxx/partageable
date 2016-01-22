#include "Composant3.h"
#include "Composant4.h"
#include "Composant4Version.h"
 #include <string.h>
#include <stdlib.h>
#include <stdio.h> 




int composant4(int p1, int p2)
{
	return composant3(p1,p2);
}


char * getComposant4Version()
{
	char * version3=getComposant3Version();
	char * version4= "Composant 4 version " COMPOSANT_VERSION_STR;
	char* c = (char*) malloc(strlen(version4)+strlen(version3));
	strcpy(c,version4);
	strcat(c,version3);
	return c;
}
