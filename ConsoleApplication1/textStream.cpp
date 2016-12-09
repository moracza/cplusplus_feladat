#include "stdafx.h"

#include <iostream>
#include <fstream>

#include "textStream.h"
#include "stringTransformer.h"

TextStream::TextStream(void)
{
}


TextStream::~TextStream(void)
{
}

std::string TextStream::read(bool investigation)
{
	int i=0;
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

void TextStream::write( std::string text)
{
	std::ofstream out("kodolt.dat");

	if(out.is_open())
	{
		out << text;

		out.close();
	}
	else
	{
		printf("Unable to open file");
	}

}
