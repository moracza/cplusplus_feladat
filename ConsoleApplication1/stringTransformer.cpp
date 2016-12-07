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
			case 'ó':
				character = 'o';
				break;
			case 'õ':
				character = 'o';
				break;
			case 'ö':
				character = 'o';
				break;
			case 'ú':
				character = 'u';
				break;
			case 'û':
				character = 'u';
				break;
			case 'ü':
				character = 'u';
				break;
			case 'á':
				character = 'a';
				break;
			case 'é':
				character = 'e';
				break;
			case 'Ó':
				character = 'o';
				break;
			case 'Õ':
				character = 'o';
				break;
			case 'Ö':
				character = 'o';
				break;
			case 'Ú':
				character = 'u';
				break;
			case 'Û':
				character = 'u';
				break;
			case 'Ü':
				character = 'u';
				break;
			case 'Á':
				character = 'a';
				break;
			case 'É':
				character = 'e';
				break;
			default:
				break;
  }
	
}
