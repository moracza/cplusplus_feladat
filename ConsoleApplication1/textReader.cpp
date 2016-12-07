#include "stdafx.h"
#include "textReader.h"

#include <iostream>
#include <locale>

#include "stringTransformer.h"

TextReader::TextReader(void)
{
}


TextReader::~TextReader(void)
{
}

std::string TextReader::read(bool investigation)
{
	int i=0;
	int skippedChar = 0;
	char c;
	std::string s;
	while(std::cin.get(c))
	{
		if(c == '\n')
		{
			break;
		}

		if(investigation)
		{
			StringTransformer::transformToUnaccented(c);
			if(iswalpha(c) != 0 )
			{
				s.push_back(c);
			}
		}
		else
		{
			s.push_back(c);
		}
	}
	return s;
}
