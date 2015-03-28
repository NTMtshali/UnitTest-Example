// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ROOTFINDER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ROOTFINDER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ROOTFINDER_EXPORTS
#define ROOTFINDER_API __declspec(dllexport)
#else
#define ROOTFINDER_API __declspec(dllimport)
#endif

// This class is exported from the RootFinder.dll
class ROOTFINDER_API CRootFinder {
public:
	CRootFinder(void);
	double SquareRoot(double v);
	// TODO: add your methods here.
};

extern ROOTFINDER_API int nRootFinder;

ROOTFINDER_API int fnRootFinder(void);
