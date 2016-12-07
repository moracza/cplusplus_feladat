#pragma once
#include <string>

class TextReader
{
public:
	TextReader(void);
	~TextReader(void);

	/*
	*	Reading text from console
	*	@param investigation If true, filter out non-alphabetic caracters
	*	@return Read in string object
	*/
	static std::string read(bool investigation = false);
};

