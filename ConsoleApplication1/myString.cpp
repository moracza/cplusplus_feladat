#include "stdafx.h"
#include "myString.h"


myString::myString(void)
	: size(0)
{
}


myString::~myString(void)
{
}

int myString::setValue( char c, int index)
{
	if( index < 0 || index > size-1)
	{
		return -1;
	}

	text[index] = c;
	return 0;
}
