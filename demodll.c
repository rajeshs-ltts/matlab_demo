#include "demodll.h"


__declspec(dllexport) int addNumbers(int UserNumber)
{
	return UserNumber+UserNumber+UserNumber;
	
}