// RooterFinder.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "RooterFinder.h"


// This is an example of an exported variable
ROOTERFINDER_API int nRooterFinder=0;

// This is an example of an exported function.
ROOTERFINDER_API int fnRooterFinder(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see RooterFinder.h for the class definition
CRooterFinder::CRooterFinder()
{
	return;
}

double CRootFinder::SquareRoot(double v)
{
	return 0.0;
}