#include "Composant3.h"
#include "Composant3Version.h"

// declaration des fonctions internes

int addition_Composant3(int a1, int a2)
{
	return a1+a2;
}

int composant3(int p1, int p2)
{
	return addition_Composant3(p1,p2);
}



char * getComposant3Version()
{
	return " Composant 3 version " COMPOSANT_VERSION_STR;
}
