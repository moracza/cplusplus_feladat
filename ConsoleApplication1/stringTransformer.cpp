#include "stdafx.h"
#include "stringTransformer.h"

#include <stdio.h>
#include <ctype.h>

StringTransformer::StringTransformer(void)
{
}


StringTransformer::~StringTransformer(void)
{
}

void StringTransformer::toUpper( std::string& aInOutput )
{
	
	for(int i=0;i<aInOutput.size();i++)
	{
		aInOutput[i] = toupper(aInOutput[i]);
	}
	
}

void StringTransformer::transformToUnaccented( char& character )
{
	
		switch(character)
		{
			case '�':
				character = 'o';
				break;
			case '�':
				character = 'o';
				break;
			case '�':
				character = 'o';
				break;
			case '�':
				character = 'u';
				break;
			case '�':
				character = 'u';
				break;
			case '�':
				character = 'u';
				break;
			case '�':
				character = 'a';
				break;
			case '�':
				character = 'e';
				break;
			case '�':
				character = 'o';
				break;
			case '�':
				character = 'o';
				break;
			case '�':
				character = 'o';
				break;
			case '�':
				character = 'u';
				break;
			case '�':
				character = 'u';
				break;
			case '�':
				character = 'u';
				break;
			case '�':
				character = 'a';
				break;
			case '�':
				character = 'e';
				break;
			default:
				break;
  }
	
}
