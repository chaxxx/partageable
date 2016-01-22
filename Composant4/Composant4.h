#pragma once
#ifndef COMPOSANT4_H
#define COMPOSANT4_H

#ifdef COMPOSANT4_EXPORTS
	#define COMPOSANT1_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT1_INTERFACE __declspec(dllimport)
#endif



// interface du composant1
COMPOSANT1_INTERFACE int composant4(int p1, int p2);

COMPOSANT1_INTERFACE char * getComposant4Version(void);
#endif

