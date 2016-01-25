
#include "Composant4.h"
#include "Composant4Version.h"
 #include <string.h>
#include <stdlib.h>
#include <stdio.h> 

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant1(int p1, int p2)
{
	return addition_interne(p1, p2);
}

 int addition_interne(int a1, int a2)
{
	return 100*a1+a2;
}

char * getComposant1Version()
{
	
	char * version4= "Composant 4 version " COMPOSANT_VERSION_STR;

	return version4;
}
