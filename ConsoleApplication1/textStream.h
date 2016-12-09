#pragma once
#include <string>

class TextStream
{
public:
	TextStream(void);
	~TextStream(void);

	/*
	*	Reading text from console
	*	@param investigation If true, filter out non-alphabetic caracters
	*	@return Read in string object
	*/
	static std::string read(bool investigation = false);

	/*
	*	Write input text to file
	*	@param text Input
	*/
	static void write(std::string text);
};

