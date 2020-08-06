#ifndef _DEMODLL_H
#define _DEMODLL_H

	#ifdef MYMATHDLL_EXPORTS
	#define MYMATHDLL_API __declspec(dllexport) 
	#else
	#define MYMATHDLL_API __declspec(dllimport) 
	#endif

	#define PI 3.1415

	__declspec(dllexport) int addNumbers(int UserNumber);

#endif	