#include "stdafx.h"
#include "stringTransformer.h"

StringTransformer::StringTransformer(void)
{
}


StringTransformer::~StringTransformer(void)
{
}

void StringTransformer::toUpper( std::string& text )
{
	
	for(int i=0;i<text.size();i++)
	{
		text[i] = toupper(text[i]);
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
